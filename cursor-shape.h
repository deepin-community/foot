#pragma once

#if defined(HAVE_CURSOR_SHAPE)
#include <cursor-shape-v1.h>
#endif

enum cursor_shape {
    CURSOR_SHAPE_NONE,
    CURSOR_SHAPE_CUSTOM,
    CURSOR_SHAPE_HIDDEN,

    CURSOR_SHAPE_LEFT_PTR,
    CURSOR_SHAPE_TEXT,
    CURSOR_SHAPE_TEXT_FALLBACK,
    CURSOR_SHAPE_TOP_LEFT_CORNER,
    CURSOR_SHAPE_TOP_RIGHT_CORNER,
    CURSOR_SHAPE_BOTTOM_LEFT_CORNER,
    CURSOR_SHAPE_BOTTOM_RIGHT_CORNER,
    CURSOR_SHAPE_LEFT_SIDE,
    CURSOR_SHAPE_RIGHT_SIDE,
    CURSOR_SHAPE_TOP_SIDE,
    CURSOR_SHAPE_BOTTOM_SIDE,

    CURSOR_SHAPE_COUNT,
};

const char *cursor_shape_to_string(enum cursor_shape shape);

#if defined(HAVE_CURSOR_SHAPE)
enum wp_cursor_shape_device_v1_shape cursor_shape_to_server_shape(
    enum cursor_shape shape);
enum wp_cursor_shape_device_v1_shape cursor_string_to_server_shape(
    const char *xcursor);
#endif
