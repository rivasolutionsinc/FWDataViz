#pragma once

#include "PluginDefinition.h"
#include <codecvt>
#include <locale>
#include <commdlg.h>
#include <fstream>
#include <iostream>
#include <regex>
#include <ShlObj_core.h>
#include <time.h>
#include <unordered_map>
#include <vector>

using std::stoi;
using std::vector;

class ConfigIO {
public:
   void init();

   int setCurrentConfigFile(const wstring& docFileType);
   void resetCurrentConfigFile();

   string getConfigStringA(const wstring& sectionName, const wstring& keyName,
      const wstring& defaultValue = L"", wstring fileName = L"");
   wstring getConfigString(const wstring& sectionName, const wstring& keyName,
      const wstring& defaultValue = L"", wstring fileName = L"");
   int getConfigSectionList(wstring& sections, wstring fileName);

   void setConfigStringA(const wstring& sectionName, const wstring& keyName,
      const string& keyValue, wstring fileName=L"");
   void setConfigString(const wstring& sectionName, const wstring& keyName,
      const wstring& keyValue, wstring fileName=L"");

   void flushConfigFile();
   void openConfigFile(LPWSTR configData, const size_t readLength, wstring fileName = L"");
   void saveConfigFile(const wstring &fileData, bool bViz, wstring fileName = L"");

   int Tokenize(const wstring &text, vector<wstring> &results, LPCWSTR delim=L",");
   int Tokenize(const wstring &text, vector<int> &results, LPCWSTR delim=L",");

   LPCWSTR ToUpper(LPWSTR str);
   wstring NarrowToWide(const string &str);
   string WideToNarrow(const wstring &wStr);

   vector<wstring> getAvailableThemesList();
   wstring getStyleValue(const wstring& theme, const wstring& styleName);
   void getFullStyle(const wstring& theme, const wstring& styleName,
      int& back, int& fore, int& bold, int& italics);

   void backupConfigFile(bool bViz);
   BOOL queryConfigFileName(HWND hwnd, bool bOpen, bool bBackupFolder, bool bViz, wstring &backupConfigFile);
   void viewBackupFolder();
   int getBackupTempFileName(wstring &tempFileName);

   bool getCaretFramed();
   void setCaretFramed(bool framed);

protected:
   TCHAR pluginConfigDir[MAX_PATH];
   TCHAR pluginConfigBackupDir[MAX_PATH];
   TCHAR defaultConfigFile[MAX_PATH];

   enum CF_TYPES {
      CONFIG_MAIN,
      CONFIG_THEMES,
      CONFIG_PREFS,
      CONFIG_FILE_COUNT
   };

   const wstring CONFIG_FILES[CONFIG_FILE_COUNT]{ L"Visualizer.ini", L"Themes.dat", L"Preferences.ini" };
   wstring CONFIG_FILE_PATHS[CONFIG_FILE_COUNT] { };
   wstring currentConfigFile{};

   int defaultBackColor{};
   int defaultForeColor{};
};
