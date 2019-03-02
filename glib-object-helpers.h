/*
 * Copyright © 2019 Damien Flament
 *
 * This file is part of GLib Helpers.
 *
 * GLib Helpers is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * GLib Helpers is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with GLib Helpers.  If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef __GLIB_GOBJECT_HELPERS_H__
#define __GLIB_GOBJECT_HELPERS_H__

#include <glib-object.h>

/**
 * GObjectDisposeFunc:
 * @object: the #GObject which need to drop all references
 *
 * The type of the @dispose function of #GObjectClass.
 */
typedef void (*GObjectDisposeFunc)(GObject *object);

/**
 * GObjectConstructedFunc:
 * @object: the #GObject to finalize the creation
 *
 * The type of the @constructed function of #GObjectClass.
 */
typedef void (*GObjectConstructedFunc)(GObject *object);

#endif /* __GLIB_GOBJECT_HELPERS_H__ */
