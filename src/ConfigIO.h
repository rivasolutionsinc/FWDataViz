#pragma once

#ifndef _PREFERENCES_INI_H
#define _PREFERENCES_INI_H

#include "NPP/PluginInterface.h"
#include <codecvt>
#include <locale>
#include <string>
#include <unordered_map>
#include <vector>
#include <Windows.h>

extern NppData nppData;
const int CONFIG_STR_MAX_LEN = 100;

class ConfigIO {
public:
   void init();
   std::string getConfigStringA(LPCWSTR sectionName, LPCWSTR keyName, LPCWSTR defaultValue = L"", LPCWSTR fileName=L"");
   std::wstring getConfigString(LPCWSTR sectionName, LPCWSTR keyName, LPCWSTR defaultValue = L"", LPCWSTR fileName=L"");
   int Tokenize(const std::wstring &text, std::vector<std::wstring> &results, LPCWSTR delim=L",");
   int Tokenize(const std::wstring &text, std::vector<int> &results, LPCWSTR delim = L",");
   std::wstring NarrowToWide(const std::string &str);
   std::string WideToNarrow(const std::wstring &wStr);

   void setThemeFilePath(const std::wstring theme=L"VT_Basic");
   std::wstring getStyleValue(LPCWSTR styleName);
   void getStyleColor(LPCWSTR styleName, int &color, bool foreColor);
   void getStyleBool(LPCWSTR styleName, int &var);

   int language = LANG_ENGLISH;

protected:
   TCHAR pluginConfigDir[MAX_PATH];
   TCHAR themeConfigFile[MAX_PATH];

   enum CF_TYPES {
      CONFIG_MAIN,
      CONFIG_PREFS,
      CONFIG_BASIC_THEME,
      CONFIG_FILE_COUNT
   };

   const std::wstring CONFIG_FILES[CONFIG_FILE_COUNT] { L"Visualizer.ini", L"VisualizerPrefs.ini",L"VT_Basic.ini"};
   std::wstring CONFIG_FILE_PATHS[CONFIG_FILE_COUNT] { };
   int defaultBackColor{};
   int defaultForeColor{};
};

#endif //_PREFERENCES_INI_H