#pragma once

#include "../Utils.h"
#include "../ConfigIO.h"
#include "../SubmenuManager.h"
#include "../NPP/DockingDlgInterface.h"
#include "../NPP/menuCmdID.h"
#include <regex>

#define FW_DEBUG_LOAD_STYLES FALSE
#define FW_DEBUG_SET_STYLES FALSE
#define FW_DEBUG_LOAD_REGEX FALSE
#define FW_DEBUG_APPLY_LEXER FALSE

#define FW_DOC_FILE_TYPE "FWVisualizerType"
#define FW_DOC_FILE_THEME "FWVisualizerTheme"
#define FW_STYLE_CACHE_START_INDEX 40
#define FW_STYLE_CACHE_ITEMS_LIMIT 200

extern NppData nppData;
extern ConfigIO _configIO;

using std::regex;
using std::vector;

class VisualizerPanel : public DockingDlgInterface {
public :
   VisualizerPanel() :DockingDlgInterface(IDD_VISUALIZER_DOCKPANEL) {};

   void initPanel();
   virtual void display(bool toShow=true);
   void setParent(HWND parent2set);
   void setFocusOnEditor();
   void showCaretFramedState(bool framed);

   void loadListFileTypes();
   void loadListThemes();
   void onBufferActivate();
   void renderCurrentPage();
   void visualizeFile(wstring fileType, bool syncFileTypesList);
   void jumpToField(const wstring fileType, const int recordIndex, const int fieldIdx);

protected :
   HWND hFTList, hThemesLB, hFieldInfo;

   // Field Info tracking
   int caretRecordStartPos, caretRecordEndPos, caretRecordRegIndex, caretEolMarkerPos, caretFieldIndex;

   // File Type data
   std::unordered_map<wstring, wstring> mapFileDescToType;
   std::unordered_map<wstring, wstring> mapFileTypeToDesc;

   // Styleset data
   struct ThemeInfo {
      wstring name{};
      StyleInfo styleEOL;
      int rangeStartIndex;
      vector<StyleInfo> styleSet;
   };

   vector<ThemeInfo> themeSet;
   int loadedStyleCount;

   // Regex data
   wstring fwVizRegexed{};

   struct RecordInfo {
      wstring label;
      string marker;
      regex regExpr;
      wstring theme;
      vector<int> fieldStarts;
      vector<int> fieldWidths;
      vector<wstring> fieldLabels;
   };

   vector<RecordInfo> recInfoList;

   virtual INT_PTR CALLBACK run_dlgProc(UINT message, WPARAM wParam, LPARAM lParam);
   void localize();
   bool getDocFileType(HWND hScintilla, wstring& fileType);
   bool getDocFileType(PSCIFUNC_T sci_func, void* sci_ptr, wstring& fileType);
   bool detectFileType(HWND hScintilla, wstring& fileType);
   bool getDocTheme(HWND hScintilla, wstring& theme);
   bool getDocTheme(PSCIFUNC_T sci_func, void* sci_ptr, wstring& theme);
   void setDocFileType(HWND hScintilla, wstring fileType);
   void setDocTheme(HWND hScintilla, wstring fileType, wstring theme);
   void setAutoDetectFileType();

   void enableThemeList(bool enable);
   void syncListFileTypes();
   void syncListThemes();

   void clearVisualize(bool sync=TRUE);
   int loadTheme(const wstring theme);
   int loadUsedThemes();
   int applyStyles();
   int loadLexer();
   void applyLexer(const size_t startLine, const size_t endLine);
   void clearLexer();
   void visualizeTheme();

   void displayCaretFieldInfo(const size_t startLine, const size_t endLine);
   void clearCaretFieldInfo();
   void resizeCaretFieldInfo(int width);
   void showJumpDialog();
   void showExtractDialog();
   void showWordwrapInfo(bool show);
   void popupSamplesMenu();
};
