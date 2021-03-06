#pragma once

#include <stdbool.h>
#include <fb.h>

struct taskbar {
    bool      is_top;
    uint32_t *logo_arr;
    size_t    logo_len;
    size_t    logo_width;
    size_t    logo_height;
};

struct taskbar *create_taskbar(void);
void draw_taskbar(struct taskbar *bar, struct framebuffer *fb);
