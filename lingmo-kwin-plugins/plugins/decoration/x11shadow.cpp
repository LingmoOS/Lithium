#include "x11shadow.h"

#include <QGuiApplication>
#include <xcb/xcb.h>

static xcb_atom_t internAtom(const char *name, bool only_if_exists)
{
    if (!name || *name == 0)
        return XCB_NONE;

    auto *x11Application = qGuiApp->nativeInterface<QNativeInterface::QX11Application>();
    if (x11Application == nullptr)
        return XCB_NONE;

    xcb_intern_atom_cookie_t cookie = xcb_intern_atom(x11Application->connection() , only_if_exists, strlen(name), name);
    xcb_intern_atom_reply_t *reply = xcb_intern_atom_reply(x11Application->connection(), cookie, 0);

    if (!reply)
        return XCB_NONE;

    xcb_atom_t atom = reply->atom;
    free(reply);

    return atom;
}

X11Shadow::X11Shadow(QObject *parent)
    : QObject(parent)
{
    m_atom_net_wm_shadow = internAtom("_KDE_NET_WM_SHADOW", false);
    m_atom_net_wm_window_type = internAtom("_NET_WM_WINDOW_TYPE", false);
}
