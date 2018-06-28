#ifndef GLOBAL_MESSAGE_DEFINITION
#define GLOBAL_MESSAGE_DEFINITION

#define WM_BASE WM_USER+0X200
#define WM_MENU_EXIT			WM_BASE+0X10	// 程序退出
#define WM_MENU_ITEM_CLICKED	WM_BASE+0X11	// 菜单项被选中
#define WM_MENU_ACCEL_KEY_CLICKED	WM_BASE+0X12  // 快捷键被选中
#define WM_MENU_PARAM_MODIFIED	WM_BASE+0X13  // 参数栏参数被修改

#define WM_SCAN_ITEM_CLICKED    WM_BASE+0X20  // 扫查视图被选中
#define WM_GET_A_SCAN_DATA		WM_USER + 0X21 // 获取A扫描数据
#define WM_GET_S_SCAN_DATA		WM_USER + 0X22 // 获取S扫描数据
#define WM_GET_SCAN_DATA		WM_USER + 0X23 // 获取扫描数据
#endif