// SPDX-License-Identifier: LGPL-2.1-or-later
// Copyright © 2019 Damien Flament
// This file is part of GLib Helpers.

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
