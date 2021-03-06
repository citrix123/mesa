#ifndef _WAYLAND_EGL_PRIV_H
#define _WAYLAND_EGL_PRIV_H

/* GCC visibility */
#if defined(__GNUC__)
#define WL_EGL_EXPORT __attribute__ ((visibility("default")))
#else
#define WL_EGL_EXPORT
#endif

#include <wayland-client.h>

#ifdef  __cplusplus
extern "C" {
#endif

struct wl_egl_window {
	struct wl_surface *surface;

	int width;
	int height;
	int dx;
	int dy;

	int attached_width;
	int attached_height;

	void *private;
	void (*resize_callback)(struct wl_egl_window *, void *);
	void (*destroy_window_callback)(void *);
};

#ifdef  __cplusplus
}
#endif

#endif
