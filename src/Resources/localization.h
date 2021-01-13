#pragma once

// Common
#define MENU_PANEL_NAME             L"Fixed-Width Data Visualizer"
#define MENU_SHOW_PANEL             L"&Show Panel"
#define MENU_CARET_FRAMED           L"Framed Current Line"
#define MENU_CONFIG                 L"&Configure File Types"
#define MENU_DEMO_SINGLE_REC_FILES  L"Sample Single-Record-Type Files"
#define MENU_DEMO_MULTI_REC_FILES   L"Sample Multiple-Record-Type Files"
#define MENU_DEMO_MULTI_LINE_FILES  L"Sample Multiple-Line Record Files"
#define MENU_ABOUT                  L"&About"


// Fixed Width Data Visualizer Panel
#define VIZ_PANEL_FILETYPE_LABEL    L"&File Type:"
#define VIZ_PANEL_THEME_LABEL       L"&Visualizer Theme:"
#define VIZ_PANEL_CLEAR_BUTTON      L"&Clear"
#define VIZ_PANEL_CLOSE             L"C&lose"
#define VIZ_PANEL_FIELD_LABEL       L"Cursor Position Data"
#define VIZ_PANEL_JUMP_FIELD_BTN    L"&Jump to Field"
#define VIZ_PANEL_CARET_FRAMED      L"Framed Current Line"
#define VIZ_PANEL_WORDWRAP_INFO     L"Visualizer is impaired when wordwrap is enabled."
#define VIZ_PANEL_WORDWRAP_BUTTON   L"Turnoff Wordwrap"
#define VIZ_PANEL_FILE_SAMPLES_TIP  L"View Sample Files"
#define VIZ_PANEL_FILE_CONFIG_TIP   L"Open FileType Metadata Editor"
#define VIZ_PANEL_THEME_CONFIG_TIP  L"Open Visualizer Theme Editor"
#define VIZ_PANEL_JUMP_FIELD_TITLE  L"Jump to Field"
#define VIZ_PANEL_JUMP_FIELD_ERROR  L"Caret has moved to a different Record Type.\r\n\r\nUnable to jump to the specified field."


// About Dialog
#define ABOUT_DIALOG_TITLE          L"About"
#define ABOUT_PLUGIN_NAME           L"Fixed Width Data Visualizer Plugin for Notepad++"
#define ABOUT_BTN_LABEL_OK          L"&OK"

// Configuration Dialog
#define FWVIZ_DIALOG_TITLE          L"Fixed Width File Metadata Editor"
#define FWVIZ_DEF_FILE_GROUP_BOX    L"File Type"
#define FWVIZ_DEF_FILE_MOVE_DOWN    L"Move down the selected File Type"
#define FWVIZ_DEF_FILE_MOVE_UP      L"Move up the selected File Type"
#define FWVIZ_DEF_FILE_DESC_LABEL   L"File Type Label:"
#define FWVIZ_DEF_FILE_EOL_LABEL    L"File Records Terminator:"
#define FWVIZ_DEF_FILE_THEME_LABEL  L"File Color Theme:"
#define FWVIZ_DEF_FILE_ACCEPT_BTN   L"Accept"
#define FWVIZ_DEF_FILE_NEW_BTN      L"New"
#define FWVIZ_DEF_FILE_CLONE_BTN    L"Clone"
#define FWVIZ_DEF_FILE_DEL_BTN      L"Delete"
#define FWVIZ_DEF_REC_GROUP_BOX     L"Record Types"
#define FWVIZ_DEF_REC_MOVE_DOWN     L"Move down the selected Record Type"
#define FWVIZ_DEF_REC_MOVE_UP       L"Move up the selected Record Type"
#define FWVIZ_DEF_REC_DESC_LABEL    L"Record Type Label:"
#define FWVIZ_DEF_REC_START_LABEL   L"Record Starts With:"
#define FWVIZ_DEF_REC_REGEX_LABEL   L"Record Regex Key:"
#define FWVIZ_DEF_REC_ACCEPT_BTN    L"Accept"
#define FWVIZ_DEF_REC_NEW_BTN       L"New"
#define FWVIZ_DEF_REC_CLONE_BTN     L"Clone"
#define FWVIZ_DEF_REC_DEL_BTN       L"Delete"
#define FWVIZ_DEF_FIELD_GROUP_BOX   L"Fields"
#define FWVIZ_DEF_FIELD_WIDTHS_TEXT L"Widths:"
#define FWVIZ_DEF_FIELD_LABELS_TEXT L"Labels:"
#define FWVIZ_DEF_FIELD_ACCEPT_BTN  L"Accept"
#define FWVIZ_DEF_FIELD_RESET_BTN   L"Reset"
#define FWVIZ_DIALOG_SAVE_BTN       L"&Save as Primary Configuration"
#define FWVIZ_DIALOG_RESET_BTN      L"&Reload Primary Configuration"
#define FWVIZ_DIALOG_BKUP_LOAD_BTN  L"&Load Backup Configuration"
#define FWVIZ_DIALOG_BKUP_VIEW_BTN  L"&View Backup Folder"
#define FWVIZ_DIALOG_EXTRACT_BTN    L"E&xtract Selected File Type Data"
#define FWVIZ_DIALOG_APPEND_BTN     L"&Append New File Type Data"
#define FWVIZ_DIALOG_CLOSE_BTN      L"&Close"

#define FWVIZ_DIALOG_ANSI_TITLE     L"ANSI characters only!"
#define FWVIZ_DIALOG_ANSI_MESSAGE   L"This edit field will only accept ANSI characters."
#define FWVIZ_DIALOG_COMMAS_TITLE   L"Commas are item separators"
#define FWVIZ_DIALOG_COMMAS_MESSAGE L"The line will be split into multiple items when the 'Accept' button below is clicked."
#define FWVIZ_DISCARD_CHANGES       L"Discard changes?"
#define FWVIZ_OPEN_BKUP_CONFIG_DLG  L"Open Backup Configuration File"
#define FWVIZ_SAVE_BKUP_CONFIG_DLG  L"Save Backup Configuration File"
#define FWVIZ_FT_NEW_ACTION         L"Add New File Type"
#define FWVIZ_FT_CLONE_ACTION       L"Clone Selected File Type"
#define FWVIZ_FT_APPEND_ACTION      L"Append File Type(s)"
#define FWVIZ_FT_LIMIT_ERROR        L"Only %i File Types can be defined."
#define FWVIZ_RT_NEW_ACTION         L"Add New Record Types"
#define FWVIZ_RT_CLONE_ACTION       L"Clone Selected Record Types"
#define FWVIZ_RT_LIMIT_ERROR        L"Only %i Record Types can be defined per File Type."

// Theme Dialog
#define THEME_DIALOG_TITLE          L"Fixed Width File Theme Editor"
#define THEME_DEF_GROUP_BOX         L"Themes"
#define THEME_DEF_MOVE_DOWN         L"Move down the selected Theme"
#define THEME_DEF_MOVE_UP           L"Move up the selected Theme"
#define THEME_DEF_DESC_LABEL        L"Theme Label:"
#define THEME_DEF_ACCEPT_BTN        L"Accept"
#define THEME_DEF_NEW_BTN           L"New"
#define THEME_DEF_CLONE_BTN         L"Clone"
#define THEME_DEF_DEL_BTN           L"Delete"
#define THEME_STYLE_GROUP_BOX       L"Styles"
#define THEME_STYLE_MOVE_DOWN       L"Move down the selected Style"
#define THEME_STYLE_MOVE_UP         L"Move up the selected Style"
#define THEME_STYLE_CLONE_BTN       L"Clone"
#define THEME_STYLE_NEW_BTN         L"New"
#define THEME_STYLE_DEL_BTN         L"Delete"
#define THEME_STYLE_DEF_GROUP_BOX   L"Style Definition"
#define THEME_STYLE_DEF_BACKCOLOR   L"Back Color:"
#define THEME_STYLE_DEF_FORECOLOR   L"Fore Color:"
#define THEME_STYLE_DEF_BOLD        L"Bold"
#define THEME_STYLE_DEF_ITALICS     L"Italics"
#define THEME_STYLE_DEF_OUT_LABEL   L"Output:"
#define THEME_STYLE_DEF_OUTPUT      L"SPHINX OF BLACK QUARTZ,\r\nJUDGE MY VOW.\r\n9876543210"
#define THEME_STYLE_DEF_ACCEPT_BTN  L"Accept"
#define THEME_STYLE_DEF_RESET_BTN   L"Reset"
#define THEME_DIALOG_SAVE_BTN       L"&Save as Primary Themes File"
#define THEME_DIALOG_RESET_BTN      L"&Reload Primary Themes File"
#define THEME_DIALOG_BKUP_LOAD_BTN  L"&Load Backup Themes File"
#define THEME_DIALOG_BKUP_VIEW_BTN  L"&View Backup Folder"
#define THEME_DIALOG_EXTRACT_BTN    L"E&xtract Selected Theme Data"
#define THEME_DIALOG_APPEND_BTN     L"&Append New Theme Data"
#define THEME_DIALOG_CLOSE_BTN      L"&Close"

#define THEME_DIALOG_HEX_TITLE      L"Hexadecimal characters only!"
#define THEME_DIALOG_HEX_CHARS_ONLY L"This edit field will only accept characters in the following range: 0-9|A-F|a-f"
#define THEME_DEF_NEW_ACTION        L"Add New Theme"
#define THEME_DEF_CLONE_ACTION      L"Clone Selected Theme"
#define THEME_DEF_APPEND_ACTION     L"Append Theme(s)"
#define THEME_DEF_LIMIT_ERROR       L"Only %i Themes can be defined."
#define THEME_STYLE_NEW_ACTION      L"Add New Style"
#define THEME_STYLE_CLONE_ACTION    L"Clone Selected Style"
#define THEME_STYLE_LIMIT_ERROR     L"Only %i Styles can be defined per Theme."

#define THEME_DISCARD_CHANGES       L"Discard changes?"
#define THEME_OPEN_BKUP_CONFIG_DLG  L"Open Backup Themes File"
#define THEME_SAVE_BKUP_CONFIG_DLG  L"Save Backup Themes File"

// Exim File Type Dialog
#define FT_EXIM_EXTRACT_FT_TITLE    L"Extract File Type Data"
#define FT_EXIM_APPEND_FT_TITLE     L"Append File Type Data"
#define FT_EXIM_EDIT_FT_LABEL       L"File Type Metadata:"
#define FT_EXIM_EXTRACT_THEME_TITLE L"Extract Theme Data"
#define FT_EXIM_APPEND_THEME_TITLE  L"Append Theme Data"
#define FT_EXIM_EDIT_THEME_LABEL    L"Theme Metadata:"
#define FT_EXIM_LOAD_FILE_BTN       L"&Load from a File"
#define FT_EXIM_SAVE_FILE_BTN       L"&Save to a File"
#define FT_EXIM_APPEND_BTN          L"&Append File Type"
#define FT_EXIM_CLOSE_BTN           L"&Close"

// Jump Field Dialog
#define JUMP_FIELD_DIALOG_TITLE     L"Extract File Type Data"
#define JUMP_FIELD_SELECT_LABEL     L"&Select Field:"
#define JUMP_FIELD_GO_BTN           L"&Jump"
#define JUMP_FIELD_CLOSE_BTN        L"&Cancel"