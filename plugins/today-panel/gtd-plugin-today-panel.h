/* gtd-plugin-today-panel.h
 *
 * Copyright (C) 2016 Georges Basile Stavracas Neto <georges.stavracas@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef GTD_PLUGIN_TODAY_PANEL_H
#define GTD_PLUGIN_TODAY_PANEL_H

#include <glib.h>
#include <gnome-todo.h>

G_BEGIN_DECLS

#define GTD_TYPE_PLUGIN_TODAY_PANEL (gtd_plugin_today_panel_get_type())

G_DECLARE_FINAL_TYPE (GtdPluginTodayPanel, gtd_plugin_today_panel, GTD, PLUGIN_TODAY_PANEL, PeasExtensionBase)

G_MODULE_EXPORT void gtd_plugin_today_panel_register_types       (PeasObjectModule   *module);

G_END_DECLS

#endif /* GTD_PLUGIN_TODAY_PANEL_H */

