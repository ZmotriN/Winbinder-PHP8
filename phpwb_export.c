/*******************************************************************************

 WINBINDER - The native Windows binding for PHP for PHP

 Copyright  Hypervisual - see LICENSE.TXT for details
 Author: Rubem Pechansky (http://winbinder.org/contact.php)

 ZEND exports module

*******************************************************************************/

//----------------------------------------------------------------- DEPENDENCIES
#include "phpwb.h"
#include "ext/standard/info.h" // For ZEND_MINFO_FUNCTION

//----------------------------------------------------------------------- MACROS
#define WB_ZEND_CONST(type, str, val) REGISTER_##type##_CONSTANT((str), (val), CONST_CS | CONST_PERSISTENT);

// ---------------------------------------------------------- INI SETTINGS
PHP_INI_BEGIN()
PHP_INI_ENTRY("winbinder.debug_level", "0", PHP_INI_ALL, NULL)
PHP_INI_ENTRY("winbinder.low_level_functions", "0", PHP_INI_ALL, NULL)
PHP_INI_END()

ZEND_MINIT_FUNCTION(winbinder);
ZEND_MSHUTDOWN_FUNCTION(winbinder);
ZEND_MINFO_FUNCTION(winbinder);

//----------------------------------------------------------- EXPORTED FUNCTIONS

/*
  NOTE:

  Functions starting with "wb_temp" have been renamed... These are now
  part of Winbinder. All "wb_" functions are intended for public usage.

*/

#include "phpwb_wb_arginfo.h" // Arg info meta

// PHPWB_WINSYS.C
ZEND_FUNCTION(wb_main_loop);
ZEND_FUNCTION(wb_find_file);
ZEND_FUNCTION(wb_message_box);
ZEND_FUNCTION(wb_play_sound);
ZEND_FUNCTION(wb_stop_sound);
ZEND_FUNCTION(wb_exec);
ZEND_FUNCTION(wb_get_system_info);
ZEND_FUNCTION(wb_get_registry_key);
ZEND_FUNCTION(wb_set_registry_key);
ZEND_FUNCTION(wb_create_timer);
ZEND_FUNCTION(wb_destroy_timer);
ZEND_FUNCTION(wb_wait);
ZEND_FUNCTION(wb_is_obj);
ZEND_FUNCTION(wb_set_accel_table);
// new PHPWB_WINSYS.C
ZEND_FUNCTION(wb_get_clipboard);
ZEND_FUNCTION(wb_set_clipboard);
ZEND_FUNCTION(wb_empty_clipboard);
ZEND_FUNCTION(wb_get_mouse_pos);

// PHPWB_CONTROL.C
ZEND_FUNCTION(wb_delete_items);
ZEND_FUNCTION(wb_destroy_control);
ZEND_FUNCTION(wb_get_class);
ZEND_FUNCTION(wb_get_control);
ZEND_FUNCTION(wb_get_enabled);
ZEND_FUNCTION(wb_get_focus);
ZEND_FUNCTION(wb_get_id);
ZEND_FUNCTION(wb_get_item_count);
ZEND_FUNCTION(wb_get_parent);
ZEND_FUNCTION(wb_get_selected);
ZEND_FUNCTION(wb_get_state);
ZEND_FUNCTION(wb_get_value);
ZEND_FUNCTION(wb_get_visible);
ZEND_FUNCTION(wb_refresh);
ZEND_FUNCTION(wb_set_cursor);
ZEND_FUNCTION(wb_set_enabled);
ZEND_FUNCTION(wb_set_focus);
ZEND_FUNCTION(wb_set_handler);
ZEND_FUNCTION(wb_set_image);
ZEND_FUNCTION(wb_set_item_image);
ZEND_FUNCTION(wb_set_location);
ZEND_FUNCTION(wb_set_range);
ZEND_FUNCTION(wb_set_state);
ZEND_FUNCTION(wb_set_style);
ZEND_FUNCTION(wb_set_visible);
ZEND_FUNCTION(wb_sort);
ZEND_FUNCTION(wb_create_control);
ZEND_FUNCTION(wb_create_item);
ZEND_FUNCTION(wb_create_statusbar_items);
ZEND_FUNCTION(wb_get_text);
ZEND_FUNCTION(wb_select_tab);
ZEND_FUNCTION(wb_set_text);
ZEND_FUNCTION(wb_set_value);

// PHPWB_DRAW.C
ZEND_FUNCTION(wb_get_pixel);
ZEND_FUNCTION(wb_draw_point);
ZEND_FUNCTION(wb_draw_line);
ZEND_FUNCTION(wb_draw_rect);
ZEND_FUNCTION(wb_draw_ellipse);
ZEND_FUNCTION(wb_draw_text);
ZEND_FUNCTION(wb_draw_image);

// PHPWB_BITMAP.C
ZEND_FUNCTION(wb_load_image);
ZEND_FUNCTION(wb_save_image);
ZEND_FUNCTION(wb_create_image);
ZEND_FUNCTION(wb_create_mask);
ZEND_FUNCTION(wb_destroy_image);
ZEND_FUNCTION(wb_get_image_data);

// PHPWB_CONTROL_LISTVIEW.C
ZEND_FUNCTION(wb_create_listview_item);
ZEND_FUNCTION(wb_set_listview_item_checked);
ZEND_FUNCTION(wb_get_listview_item_checked);
ZEND_FUNCTION(wb_set_listview_item_text);
ZEND_FUNCTION(wb_get_listview_text);
ZEND_FUNCTION(wb_get_listview_columns);
ZEND_FUNCTION(wb_clear_listview_columns);
ZEND_FUNCTION(wb_create_listview_column);
ZEND_FUNCTION(wb_select_listview_item);
ZEND_FUNCTION(wb_select_all_listview_items);
//ZEND_FUNCTION(wb_get_listview_column_widths);
//ZEND_FUNCTION(wb_set_listview_column_widths);

// PHPWB_CONTROL_MENU.C
ZEND_FUNCTION(wb_create_menu);
ZEND_FUNCTION(wb_get_menu_item_checked);
ZEND_FUNCTION(wb_set_menu_item_checked);
ZEND_FUNCTION(wb_set_menu_item_selected);
ZEND_FUNCTION(wb_set_menu_item_image);

// PHPWB_CONTROL_TOOLBAR.C
ZEND_FUNCTION(wb_create_toolbar);

// PHPWB_CONTROL_TREEVIEW.C
ZEND_FUNCTION(wb_create_treeview_item);
ZEND_FUNCTION(wb_set_treeview_item_selected);
ZEND_FUNCTION(wb_set_treeview_item_text);
ZEND_FUNCTION(wb_set_treeview_item_value);
ZEND_FUNCTION(wb_get_treeview_item_text);
ZEND_FUNCTION(wb_get_level);

// PHPWB_FONTS.C
ZEND_FUNCTION(wb_create_font);
ZEND_FUNCTION(wb_destroy_font);
ZEND_FUNCTION(wb_set_font);

// PHPWB_LOWLEVEL.C
ZEND_FUNCTION(wb_get_address);
ZEND_FUNCTION(wb_send_message);
ZEND_FUNCTION(wb_peek);
ZEND_FUNCTION(wb_poke);
ZEND_FUNCTION(wb_load_library);
ZEND_FUNCTION(wb_release_library);
ZEND_FUNCTION(wb_get_function_address);
ZEND_FUNCTION(wb_call_function);
ZEND_FUNCTION(wb_get_midi_callback);
ZEND_FUNCTION(wb_get_enum_callback);
ZEND_FUNCTION(wb_get_hook_callback);

// PHPWB_WINDOW.C
ZEND_FUNCTION(wb_get_size);
ZEND_FUNCTION(wb_set_size);
ZEND_FUNCTION(wb_set_position);
ZEND_FUNCTION(wb_get_position);
ZEND_FUNCTION(wb_destroy_window);
ZEND_FUNCTION(wb_create_window);
ZEND_FUNCTION(wb_get_item_list);
ZEND_FUNCTION(wb_get_instance);
ZEND_FUNCTION(wb_set_area);

// PHPWB_SYSDLG.C
ZEND_FUNCTION(wb_sys_dlg_path);
ZEND_FUNCTION(wb_sys_dlg_color);
ZEND_FUNCTION(wb_sys_dlg_open);
ZEND_FUNCTION(wb_sys_dlg_save);
ZEND_FUNCTION(wb_sys_dlg_font);

//-------------------------------------------------------------------- VARIABLES

/* List of exported functions */
zend_function_entry winbinder_functions[] =
	{
		// Namespace
		// ZEND_FE(
		// PHPWB_WINSYS.C
        ZEND_FE(wb_main_loop,arginfo_wb_main_loop)
        ZEND_FE(wb_find_file,arginfo_wb_find_file)
        ZEND_FE(wb_message_box,arginfo_wb_message_box)
        ZEND_FE(wb_play_sound,arginfo_wb_play_sound)
        ZEND_FE(wb_stop_sound,arginfo_wb_stop_sound)
        ZEND_FE(wb_exec,arginfo_wb_exec)
        ZEND_FE(wb_get_system_info,arginfo_wb_get_system_info)
        ZEND_FE(wb_get_registry_key,arginfo_wb_get_registry_key)
        ZEND_FE(wb_set_registry_key,arginfo_wb_set_registry_key)
        ZEND_FE(wb_create_timer,arginfo_wb_create_timer)
        ZEND_FE(wb_wait,arginfo_wb_wait)
        ZEND_FE(wb_is_obj,arginfo_wb_is_obj)
        ZEND_FE(wb_destroy_timer,arginfo_wb_destroy_timer)
        ZEND_FE(wb_set_accel_table,arginfo_wb_set_accel_table)

		// new PHPWB_WINSYS.C
        ZEND_FE(wb_get_clipboard,arginfo_wb_get_clipboard)
        ZEND_FE(wb_set_clipboard,arginfo_wb_set_clipboard)
        ZEND_FE(wb_empty_clipboard,arginfo_wb_empty_clipboard)
        ZEND_FE(wb_get_mouse_pos,arginfo_wb_get_mouse_pos)

        // PHPWB_BITMAP.C
        ZEND_FE(wb_load_image,arginfo_wb_load_image)
        ZEND_FE(wb_save_image,arginfo_wb_save_image)
        ZEND_FE(wb_create_image,arginfo_wb_create_image)
        ZEND_FE(wb_create_mask,arginfo_wb_create_mask)
        ZEND_FE(wb_destroy_image,arginfo_wb_destroy_image)
        ZEND_FE(wb_get_image_data,arginfo_wb_get_image_data)

        // PHPWB_DRAW.C
        ZEND_FE(wb_get_pixel,arginfo_wb_get_pixel)
        ZEND_FE(wb_draw_point,arginfo_wb_draw_point)
        ZEND_FE(wb_draw_line,arginfo_wb_draw_line)
        ZEND_FE(wb_draw_rect,arginfo_wb_draw_rect)
        ZEND_FE(wb_draw_ellipse,arginfo_wb_draw_ellipse)
        ZEND_FE(wb_draw_text,arginfo_wb_draw_text)
        ZEND_FE(wb_draw_image,arginfo_wb_draw_image)

        // PHPWB_CONTROL.C
        ZEND_FE(wb_destroy_control,arginfo_wb_destroy_control)
        ZEND_FE(wb_get_value,arginfo_wb_get_value)
        ZEND_FE(wb_refresh,arginfo_wb_refresh)
        ZEND_FE(wb_set_enabled,arginfo_wb_set_enabled)
        ZEND_FE(wb_set_image,arginfo_wb_set_image)
        ZEND_FE(wb_set_item_image,arginfo_wb_set_item_image)
        ZEND_FE(wb_create_control,arginfo_wb_create_control)
        ZEND_FE(wb_create_item,arginfo_wb_create_item)
        ZEND_FE(wb_create_statusbar_items,arginfo_wb_create_statusbar_items)
        ZEND_FE(wb_get_text,arginfo_wb_get_text)
        ZEND_FE(wb_set_text,arginfo_wb_set_text)
        ZEND_FE(wb_delete_items,arginfo_wb_delete_items)
        ZEND_FE(wb_get_class,arginfo_wb_get_class)
        ZEND_FE(wb_get_control,arginfo_wb_get_control)
        ZEND_FE(wb_get_enabled,arginfo_wb_get_enabled)
        ZEND_FE(wb_get_focus,arginfo_wb_get_focus)
        ZEND_FE(wb_get_id,arginfo_wb_get_id)
        ZEND_FE(wb_get_item_count,arginfo_wb_get_item_count)
        ZEND_FE(wb_get_parent,arginfo_wb_get_parent)
        ZEND_FE(wb_get_selected,arginfo_wb_get_selected)
        ZEND_FE(wb_get_state,arginfo_wb_get_state)
        ZEND_FE(wb_get_visible,arginfo_wb_get_visible)
        ZEND_FE(wb_set_cursor,arginfo_wb_set_cursor)
        ZEND_FE(wb_set_focus,arginfo_wb_set_focus)
        ZEND_FE(wb_set_handler,arginfo_wb_set_handler)
        ZEND_FE(wb_set_location,arginfo_wb_set_location)
        ZEND_FE(wb_set_range,arginfo_wb_set_range)
        ZEND_FE(wb_set_state,arginfo_wb_set_state)
        ZEND_FE(wb_set_style,arginfo_wb_set_style)
        ZEND_FE(wb_set_visible,arginfo_wb_set_visible)
        ZEND_FE(wb_sort,arginfo_wb_sort)
        ZEND_FE(wb_select_tab,arginfo_wb_select_tab)
        ZEND_FE(wb_set_value,arginfo_wb_set_value)

        // PHPWB_CONTROL_LISTVIEW.C
        ZEND_FE(wb_create_listview_item,arginfo_wb_create_listview_item)
        ZEND_FE(wb_set_listview_item_checked,arginfo_wb_set_listview_item_checked)
        ZEND_FE(wb_get_listview_item_checked,arginfo_wb_get_listview_item_checked)
        ZEND_FE(wb_set_listview_item_text,arginfo_wb_set_listview_item_text)
        ZEND_FE(wb_get_listview_text,arginfo_wb_get_listview_text)
        ZEND_FE(wb_get_listview_columns,arginfo_wb_get_listview_columns)
        ZEND_FE(wb_create_listview_column,arginfo_wb_create_listview_column)
        ZEND_FE(wb_clear_listview_columns,arginfo_wb_clear_listview_columns)
        ZEND_FE(wb_select_listview_item,arginfo_wb_select_listview_item)
        ZEND_FE(wb_select_all_listview_items,arginfo_wb_select_all_listview_items)
        //	ZEND_FE(wb_get_listview_column_widths,arginfo_wb_get_listview_column_widths)
        //	ZEND_FE(wb_set_listview_column_widths,arginfo_wb_set_listview_column_widths)

        // PHPWB_CONTROL_MENU.C
        ZEND_FE(wb_create_menu,arginfo_wb_create_menu)
        ZEND_FE(wb_get_menu_item_checked,arginfo_wb_get_menu_item_checked)
        ZEND_FE(wb_set_menu_item_checked,arginfo_wb_set_menu_item_checked)
        ZEND_FE(wb_set_menu_item_selected,arginfo_wb_set_menu_item_selected)
        ZEND_FE(wb_set_menu_item_image,arginfo_wb_set_menu_item_image)

        // PHPWB_CONTROL_TOOLBAR.C
        ZEND_FE(wb_create_toolbar,arginfo_wb_create_toolbar)

        // PHPWB_CONTROL_TREEVIEW.C
        ZEND_FE(wb_create_treeview_item,arginfo_wb_create_treeview_item)
        ZEND_FE(wb_set_treeview_item_selected,arginfo_wb_set_treeview_item_selected)
        ZEND_FE(wb_set_treeview_item_text,arginfo_wb_set_treeview_item_text)
        ZEND_FE(wb_set_treeview_item_value,arginfo_wb_set_treeview_item_value)
        ZEND_FE(wb_get_treeview_item_text,arginfo_wb_get_treeview_item_text)
        ZEND_FE(wb_get_level,arginfo_wb_get_level)

        // PHPWB_FONTS.C
        ZEND_FE(wb_create_font,arginfo_wb_create_font)
        ZEND_FE(wb_destroy_font,arginfo_wb_destroy_font)
        ZEND_FE(wb_set_font,arginfo_wb_set_font)

        // PHPWB_LOWLEVEL.C
        ZEND_FE(wb_get_address, arginfo_get_address)
        ZEND_FE(wb_send_message,arginfo_wb_send_message)
        ZEND_FE(wb_peek,arginfo_wb_peek)
        ZEND_FE(wb_poke,arginfo_wb_poke)
        ZEND_FE(wb_load_library,arginfo_wb_load_library)
        ZEND_FE(wb_release_library,arginfo_wb_release_library)
        ZEND_FE(wb_get_function_address,arginfo_wb_get_function_address)
        ZEND_FE(wb_call_function,arginfo_wb_call_function)
        ZEND_FE(wb_get_midi_callback,arginfo_wb_get_midi_callback)
        ZEND_FE(wb_get_enum_callback,arginfo_wb_get_enum_callback)
        ZEND_FE(wb_get_hook_callback,arginfo_wb_get_hook_callback)

        // PHPWB_WINDOW.C
        ZEND_FE(wb_destroy_window,arginfo_wb_destroy_window)
        ZEND_FE(wb_get_size,arginfo_wb_get_size)
        ZEND_FE(wb_set_size,arginfo_wb_set_size)
        ZEND_FE(wb_set_position,arginfo_wb_set_position)
        ZEND_FE(wb_get_position,arginfo_wb_get_position)
        ZEND_FE(wb_create_window,arginfo_wb_create_window)
        ZEND_FE(wb_get_instance,arginfo_wb_get_instance)
        ZEND_FE(wb_get_item_list,arginfo_wb_get_item_list)
        ZEND_FE(wb_set_area,arginfo_wb_set_area)

        // PHPWB_SYSDLG.C
        ZEND_FE(wb_sys_dlg_path,arginfo_wb_sys_dlg_path)
        ZEND_FE(wb_sys_dlg_color,arginfo_wb_sys_dlg_color)
        ZEND_FE(wb_sys_dlg_open,arginfo_wb_sys_dlg_open)
        ZEND_FE(wb_sys_dlg_save,arginfo_wb_sys_dlg_save)
        ZEND_FE(wb_sys_dlg_font,arginfo_wb_sys_dlg_font)

		// The line below must be the last one
		{NULL, NULL, NULL}};

/*
	Structure with module information
*/

zend_module_entry winbinder_module_entry = {
	STANDARD_MODULE_HEADER,
	MODULENAME,
	winbinder_functions,
	ZEND_MINIT(winbinder),
	ZEND_MSHUTDOWN(winbinder),
	NULL, NULL,
	ZEND_MINFO(winbinder),
	LIBVERSION,
	STANDARD_MODULE_PROPERTIES};

//-------------------------------------------------------- ZEND MODULE FUNCTIONS

/* Module initialization function */

ZEND_MINIT_FUNCTION(winbinder)
{

	REGISTER_INI_ENTRIES();

	// Module initialization procedure
	wbInit();

	// Window classes
	WB_ZEND_CONST(LONG_PTR, "AppWindow", AppWindow)
	WB_ZEND_CONST(LONG_PTR, "ModalDialog", ModalDialog)
	WB_ZEND_CONST(LONG_PTR, "ModelessDialog", ModelessDialog)
	WB_ZEND_CONST(LONG_PTR, "NakedWindow", NakedWindow)
	WB_ZEND_CONST(LONG_PTR, "PopupWindow", PopupWindow)
	WB_ZEND_CONST(LONG_PTR, "ResizableWindow", ResizableWindow)
	WB_ZEND_CONST(LONG_PTR, "ToolDialog", ToolDialog)

	// WinBinder control classes
	WB_ZEND_CONST(LONG_PTR, "Accel", Accel)
	WB_ZEND_CONST(LONG_PTR, "Calendar", Calendar)
	WB_ZEND_CONST(LONG_PTR, "CheckBox", CheckBox)
	WB_ZEND_CONST(LONG_PTR, "ComboBox", ComboBox)
	WB_ZEND_CONST(LONG_PTR, "EditBox", EditBox)
	WB_ZEND_CONST(LONG_PTR, "Frame", Frame)
	WB_ZEND_CONST(LONG_PTR, "Gauge", Gauge)
	WB_ZEND_CONST(LONG_PTR, "HTMLControl", HTMLControl)
	WB_ZEND_CONST(LONG_PTR, "HyperLink", HyperLink)
	WB_ZEND_CONST(LONG_PTR, "ImageButton", ImageButton)
	WB_ZEND_CONST(LONG_PTR, "InvisibleArea", InvisibleArea)
	WB_ZEND_CONST(LONG_PTR, "Label", Label)
	WB_ZEND_CONST(LONG_PTR, "ListBox", ListBox)
	WB_ZEND_CONST(LONG_PTR, "ListView", ListView)
	WB_ZEND_CONST(LONG_PTR, "Menu", Menu)
	WB_ZEND_CONST(LONG_PTR, "PushButton", PushButton)
	WB_ZEND_CONST(LONG_PTR, "RTFEditBox", RTFEditBox)
	WB_ZEND_CONST(LONG_PTR, "RadioButton", RadioButton)
	WB_ZEND_CONST(LONG_PTR, "ScrollBar", ScrollBar)
	WB_ZEND_CONST(LONG_PTR, "Slider", Slider)
	WB_ZEND_CONST(LONG_PTR, "Spinner", Spinner)
	WB_ZEND_CONST(LONG_PTR, "StatusBar", StatusBar)
	WB_ZEND_CONST(LONG_PTR, "TabControl", TabControl)
	WB_ZEND_CONST(LONG_PTR, "ToolBar", ToolBar)
	WB_ZEND_CONST(LONG_PTR, "TreeView", TreeView)

	// System constants
	WB_ZEND_CONST(STRING, "WBC_VERSION", LIBVERSION)

	// Style flags
	WB_ZEND_CONST(LONG_PTR, "WBC_BORDER", WBC_BORDER)
	WB_ZEND_CONST(LONG_PTR, "WBC_BOTTOM", WBC_BOTTOM)
	WB_ZEND_CONST(LONG_PTR, "WBC_CENTER", WBC_CENTER)
	WB_ZEND_CONST(LONG_PTR, "WBC_CHECKBOXES", WBC_CHECKBOXES)
	WB_ZEND_CONST(LONG_PTR, "WBC_CUSTOMDRAW", WBC_CUSTOMDRAW)
	WB_ZEND_CONST(LONG_PTR, "WBC_DEFAULTPOS", WBC_DEFAULTPOS)
	WB_ZEND_CONST(LONG_PTR, "WBC_DISABLED", WBC_DISABLED)
	WB_ZEND_CONST(LONG_PTR, "WBC_ELLIPSIS", WBC_ELLIPSIS)
	WB_ZEND_CONST(LONG_PTR, "WBC_ENABLED", WBC_ENABLED)
	WB_ZEND_CONST(LONG_PTR, "WBC_GROUP", WBC_GROUP)
	WB_ZEND_CONST(LONG_PTR, "WBC_IMAGE", WBC_IMAGE)
	WB_ZEND_CONST(LONG_PTR, "WBC_INVISIBLE", WBC_INVISIBLE)
	WB_ZEND_CONST(LONG_PTR, "WBC_LEFT", WBC_LEFT)
	WB_ZEND_CONST(LONG_PTR, "WBC_LINES", WBC_LINES)
	WB_ZEND_CONST(LONG_PTR, "WBC_MASKED", WBC_MASKED)
	WB_ZEND_CONST(LONG_PTR, "WBC_MIDDLE", WBC_MIDDLE)
	WB_ZEND_CONST(LONG_PTR, "WBC_MULTILINE", WBC_MULTILINE)
	WB_ZEND_CONST(LONG_PTR, "WBC_NOTIFY", WBC_NOTIFY)
	WB_ZEND_CONST(LONG_PTR, "WBC_NUMBER", WBC_NUMBER)
	WB_ZEND_CONST(LONG_PTR, "WBC_READONLY", WBC_READONLY)
	WB_ZEND_CONST(LONG_PTR, "WBC_RIGHT", WBC_RIGHT)
	WB_ZEND_CONST(LONG_PTR, "WBC_SINGLE", WBC_SINGLE)
	WB_ZEND_CONST(LONG_PTR, "WBC_SORT", WBC_SORT)
	WB_ZEND_CONST(LONG_PTR, "WBC_TASKBAR", WBC_TASKBAR)
	WB_ZEND_CONST(LONG_PTR, "WBC_AUTOREPEAT", WBC_AUTOREPEAT)
	WB_ZEND_CONST(LONG_PTR, "WBC_TOP", WBC_TOP)
	WB_ZEND_CONST(LONG_PTR, "WBC_VISIBLE", WBC_VISIBLE)
	WB_ZEND_CONST(LONG_PTR, "WBC_TRANSPARENT", WBC_TRANSPARENT)
	WB_ZEND_CONST(LONG_PTR, "WBC_DEFAULT", WBC_DEFAULT)
	WB_ZEND_CONST(LONG_PTR, "WBC_MULTISELECT", WBC_MULTISELECT)
	WB_ZEND_CONST(LONG_PTR, "WBC_NOHEADER", WBC_NOHEADER)

	// Notification message flags
	WB_ZEND_CONST(LONG_PTR, "WBC_DBLCLICK", WBC_DBLCLICK)
	WB_ZEND_CONST(LONG_PTR, "WBC_MOUSEMOVE", WBC_MOUSEMOVE)
	WB_ZEND_CONST(LONG_PTR, "WBC_MOUSEDOWN", WBC_MOUSEDOWN)
	WB_ZEND_CONST(LONG_PTR, "WBC_MOUSEUP", WBC_MOUSEUP)
	WB_ZEND_CONST(LONG_PTR, "WBC_KEYDOWN", WBC_KEYDOWN)
	WB_ZEND_CONST(LONG_PTR, "WBC_KEYUP", WBC_KEYUP)
	WB_ZEND_CONST(LONG_PTR, "WBC_GETFOCUS", WBC_GETFOCUS)
	WB_ZEND_CONST(LONG_PTR, "WBC_RESIZE", WBC_RESIZE)
	WB_ZEND_CONST(LONG_PTR, "WBC_REDRAW", WBC_REDRAW)
	WB_ZEND_CONST(LONG_PTR, "WBC_HEADERSEL", WBC_HEADERSEL)

	// Additional notification message flags
	WB_ZEND_CONST(LONG_PTR, "WBC_ALT", WBC_ALT)
	WB_ZEND_CONST(LONG_PTR, "WBC_CONTROL", WBC_CONTROL)
	WB_ZEND_CONST(LONG_PTR, "WBC_SHIFT", WBC_SHIFT)
	WB_ZEND_CONST(LONG_PTR, "WBC_LBUTTON", WBC_LBUTTON)
	WB_ZEND_CONST(LONG_PTR, "WBC_MBUTTON", WBC_MBUTTON)
	WB_ZEND_CONST(LONG_PTR, "WBC_RBUTTON", WBC_RBUTTON)

	// Message box and beep types
	WB_ZEND_CONST(LONG_PTR, "WBC_BEEP", WBC_BEEP)
	WB_ZEND_CONST(LONG_PTR, "WBC_INFO", MB_ICONINFORMATION)
	WB_ZEND_CONST(LONG_PTR, "WBC_OK", MB_OK)
	WB_ZEND_CONST(LONG_PTR, "WBC_OKCANCEL", MB_OKCANCEL | MB_ICONQUESTION)
	WB_ZEND_CONST(LONG_PTR, "WBC_QUESTION", MB_ICONQUESTION)
	WB_ZEND_CONST(LONG_PTR, "WBC_STOP", MB_ICONSTOP)
	WB_ZEND_CONST(LONG_PTR, "WBC_WARNING", MB_ICONWARNING)
	WB_ZEND_CONST(LONG_PTR, "WBC_YESNO", MB_YESNO | MB_ICONQUESTION)
	WB_ZEND_CONST(LONG_PTR, "WBC_YESNOCANCEL", MB_YESNOCANCEL | MB_ICONQUESTION)

	// Window states
	WB_ZEND_CONST(LONG_PTR, "WBC_MAXIMIZED", WBC_MAXIMIZED)
	WB_ZEND_CONST(LONG_PTR, "WBC_MINIMIZED", WBC_MINIMIZED)
	WB_ZEND_CONST(LONG_PTR, "WBC_NORMAL", WBC_NORMAL)

	// Area types for wb_set_area()
	WB_ZEND_CONST(LONG_PTR, "WBC_MINSIZE", WBC_MINSIZE);
	WB_ZEND_CONST(LONG_PTR, "WBC_MAXSIZE", WBC_MAXSIZE);
	WB_ZEND_CONST(LONG_PTR, "WBC_TITLE", WBC_TITLE);

	// Windows standard identifiers
	WB_ZEND_CONST(LONG_PTR, "IDABORT", IDABORT);
	WB_ZEND_CONST(LONG_PTR, "IDCANCEL", IDCANCEL);
	WB_ZEND_CONST(LONG_PTR, "IDCLOSE", IDCLOSE);
	WB_ZEND_CONST(LONG_PTR, "IDDEFAULT", IDDEFAULT);
	WB_ZEND_CONST(LONG_PTR, "IDHELP", IDHELP);
	WB_ZEND_CONST(LONG_PTR, "IDIGNORE", IDIGNORE);
	WB_ZEND_CONST(LONG_PTR, "IDNO", IDNO);
	WB_ZEND_CONST(LONG_PTR, "IDOK", IDOK);
	WB_ZEND_CONST(LONG_PTR, "IDRETRY", IDRETRY);
	WB_ZEND_CONST(LONG_PTR, "IDYES", IDYES);

	// Font attributes
	WB_ZEND_CONST(LONG_PTR, "FTA_BOLD", FTA_BOLD);
	WB_ZEND_CONST(LONG_PTR, "FTA_ITALIC", FTA_ITALIC);
	WB_ZEND_CONST(LONG_PTR, "FTA_NORMAL", FTA_NORMAL);
	WB_ZEND_CONST(LONG_PTR, "FTA_REGULAR", FTA_NORMAL);
	WB_ZEND_CONST(LONG_PTR, "FTA_STRIKEOUT", FTA_STRIKEOUT);
	WB_ZEND_CONST(LONG_PTR, "FTA_UNDERLINE", FTA_UNDERLINE);

	// RGB standard colors
	WB_ZEND_CONST(LONG_PTR, "BLACK", RGB(0, 0, 0))
	WB_ZEND_CONST(LONG_PTR, "BLUE", RGB(0, 0, 255))
	WB_ZEND_CONST(LONG_PTR, "CYAN", RGB(0, 255, 255))
	WB_ZEND_CONST(LONG_PTR, "DARKBLUE", RGB(0, 0, 128))
	WB_ZEND_CONST(LONG_PTR, "DARKCYAN", RGB(0, 128, 128))
	WB_ZEND_CONST(LONG_PTR, "DARKGRAY", RGB(128, 128, 128))
	WB_ZEND_CONST(LONG_PTR, "DARKGREEN", RGB(0, 128, 0))
	WB_ZEND_CONST(LONG_PTR, "DARKMAGENTA", RGB(128, 0, 128))
	WB_ZEND_CONST(LONG_PTR, "DARKRED", RGB(128, 0, 0))
	WB_ZEND_CONST(LONG_PTR, "DARKYELLOW", RGB(128, 128, 0))
	WB_ZEND_CONST(LONG_PTR, "GREEN", RGB(0, 255, 0))
	WB_ZEND_CONST(LONG_PTR, "LIGHTGRAY", RGB(192, 192, 192))
	WB_ZEND_CONST(LONG_PTR, "MAGENTA", RGB(255, 0, 255))
	WB_ZEND_CONST(LONG_PTR, "RED", RGB(255, 0, 0))
	WB_ZEND_CONST(LONG_PTR, "WHITE", RGB(255, 255, 255))
	WB_ZEND_CONST(LONG_PTR, "YELLOW", RGB(255, 255, 0))
	WB_ZEND_CONST(LONG_PTR, "NOCOLOR", NOCOLOR)
	WB_ZEND_CONST(LONG_PTR, "WINCOLOUR", WINCOLOUR)

	// BGR standard colors
	WB_ZEND_CONST(LONG_PTR, "bgrBLACK", RGB(0, 0, 0))
	WB_ZEND_CONST(LONG_PTR, "bgrBLUE", RGB(255, 0, 0))
	WB_ZEND_CONST(LONG_PTR, "bgrCYAN", RGB(255, 255, 0))
	WB_ZEND_CONST(LONG_PTR, "bgrDARKBLUE", RGB(128, 0, 0))
	WB_ZEND_CONST(LONG_PTR, "bgrDARKCYAN", RGB(128, 128, 0))
	WB_ZEND_CONST(LONG_PTR, "bgrDARKGRAY", RGB(128, 128, 128))
	WB_ZEND_CONST(LONG_PTR, "bgrDARKGREEN", RGB(0, 128, 0))
	WB_ZEND_CONST(LONG_PTR, "bgrDARKMAGENTA", RGB(128, 0, 128))
	WB_ZEND_CONST(LONG_PTR, "bgrDARKRED", RGB(0, 0, 128))
	WB_ZEND_CONST(LONG_PTR, "bgrDARKYELLOW", RGB(0, 128, 128))
	WB_ZEND_CONST(LONG_PTR, "bgrGREEN", RGB(0, 255, 0))
	WB_ZEND_CONST(LONG_PTR, "bgrLIGHTGRAY", RGB(192, 192, 192))
	WB_ZEND_CONST(LONG_PTR, "bgrMAGENTA", RGB(255, 0, 255))
	WB_ZEND_CONST(LONG_PTR, "bgrRED", RGB(0, 0, 255))
	WB_ZEND_CONST(LONG_PTR, "bgrWHITE", RGB(255, 255, 255))
	WB_ZEND_CONST(LONG_PTR, "bgrYELLOW", RGB(0, 255, 255))
	WB_ZEND_CONST(LONG_PTR, "bgrNOCOLOR", NOCOLOR)
	WB_ZEND_CONST(LONG_PTR, "bgrWINCOLOUR", WINCOLOUR)

	// Listview custom color state
	WB_ZEND_CONST(LONG_PTR, "WBC_LV_NONE", WBC_LV_NONE);
	WB_ZEND_CONST(LONG_PTR, "WBC_LV_FORE", WBC_LV_FORE);
	WB_ZEND_CONST(LONG_PTR, "WBC_LV_BACK", WBC_LV_BACK);
	WB_ZEND_CONST(LONG_PTR, "WBC_LV_DEFAULT", WBC_LV_DEFAULT);
	WB_ZEND_CONST(LONG_PTR, "WBC_LV_DRAW", WBC_LV_DRAW);
	WB_ZEND_CONST(LONG_PTR, "WBC_LV_COLUMNS", WBC_LV_COLUMNS);
	WB_ZEND_CONST(LONG_PTR, "LVM_FIRST",			LVM_FIRST);
	WB_ZEND_CONST(LONG_PTR, "LVM_DELETEALLITEMS",	LVM_DELETEALLITEMS);
	WB_ZEND_CONST(LONG_PTR, "LVM_GETITEMCOUNT",		LVM_GETITEMCOUNT);
	WB_ZEND_CONST(LONG_PTR, "LVM_GETITEMSTATE",		LVM_GETITEMSTATE);
	WB_ZEND_CONST(LONG_PTR, "LVM_GETSELECTEDCOUNT",	LVM_GETSELECTEDCOUNT);
	WB_ZEND_CONST(LONG_PTR, "LVIS_SELECTED",		LVIS_SELECTED);
	// RTFEditBox
	WB_ZEND_CONST(LONG_PTR, "WBC_RTF_TEXT", WBC_RTF_TEXT);

	// Additional @todo refactor to WBC constants

	// Button control
	WB_ZEND_CONST(LONG_PTR, "BM_SETCHECK",			BM_SETCHECK);

	// Tab control
	WB_ZEND_CONST(LONG_PTR, "TCM_GETCURSEL",		TCM_GETCURSEL);
	WB_ZEND_CONST(LONG_PTR, "TCM_SETCURSEL",		TCM_SETCURSEL);

	// Combobox
	WB_ZEND_CONST(LONG_PTR, "CB_FINDSTRINGEXACT",	CB_FINDSTRINGEXACT);
	WB_ZEND_CONST(LONG_PTR, "CB_SETCURSEL",			CB_SETCURSEL);

	// Listbox
	WB_ZEND_CONST(LONG_PTR, "LB_FINDSTRINGEXACT",	LB_FINDSTRINGEXACT);
	WB_ZEND_CONST(LONG_PTR, "LB_SETCURSEL",			LB_SETCURSEL);

	// Window
	WB_ZEND_CONST(LONG_PTR, "WM_SETTEXT",			WM_SETTEXT);

	// @see https://github.com/lxn/win

	return SUCCESS;
}

/* Provides module information (function provided by Hans Rebel) */

ZEND_MINFO_FUNCTION(winbinder)
{
	php_info_print_table_start();
	php_info_print_table_row(2, MODULENAME, "enabled");
	php_info_print_table_row(2, "Version", WINBINDER_VERSION);
	php_info_print_table_end();

	DISPLAY_INI_ENTRIES();
}

/* Module shutdown function required by PHP */

ZEND_MSHUTDOWN_FUNCTION(winbinder)
{

	UNREGISTER_INI_ENTRIES();

	// End procedure
	wbEnd();
	return SUCCESS;
}

/* Stub function: implements the get_module() function, which is the only function actually exported */

ZEND_GET_MODULE(winbinder);

//------------------------------------------------------------------ END OF FILE
