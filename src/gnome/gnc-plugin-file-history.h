/* 
 * gnc-plugin-file-history.h -- 
 * Copyright (C) 2003 David Hampton <hampton@employees.org>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, contact:
 *
 * Free Software Foundation           Voice:  +1-617-542-5942
 * 59 Temple Place - Suite 330        Fax:    +1-617-542-2652
 * Boston, MA  02111-1307,  USA       gnu@gnu.org
 */

#ifndef __GNC_PLUGIN_FILE_HISTORY_H
#define __GNC_PLUGIN_FILE_HISTORY_H

#include <gtk/gtk.h>
#include "gnc-plugin.h"

G_BEGIN_DECLS

/* type macros */
#define GNC_TYPE_PLUGIN_FILE_HISTORY            (gnc_plugin_file_history_get_type ())
#define GNC_PLUGIN_FILE_HISTORY(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), GNC_TYPE_PLUGIN_FILE_HISTORY, GncPluginFileHistory))
#define GNC_PLUGIN_FILE_HISTORY_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass), GNC_TYPE_PLUGIN_FILE_HISTORY, GncPluginFileHistoryClass))
#define GNC_IS_PLUGIN_FILE_HISTORY(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GNC_TYPE_PLUGIN_FILE_HISTORY))
#define GNC_IS_PLUGIN_FILE_HISTORY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GNC_TYPE_PLUGIN_FILE_HISTORY))
#define GNC_PLUGIN_FILE_HISTORY_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj), GNC_TYPE_PLUGIN_FILE_HISTORY, GncPluginFileHistoryClass))

#define GNC_PLUGIN_FILE_HISTORY_NAME "gnc-plugin-file-history"

/* typedefs & structures */
typedef struct GncPluginFileHistoryPrivate GncPluginFileHistoryPrivate;

typedef struct {
	GncPlugin parent;
	GncPluginFileHistoryPrivate *priv;
} GncPluginFileHistory;

typedef struct {
	GncPluginClass parent;
} GncPluginFileHistoryClass;

/* function prototypes */
GType       gnc_plugin_file_history_get_type (void);

GncPlugin  *gnc_plugin_file_history_new      (void);

void        gnc_history_add_file 	     (const char *newfile);
const char *gnc_history_get_last 	     (void);

G_END_DECLS

#endif /* __GNC_PLUGIN_FILE_HISTORY_H */
