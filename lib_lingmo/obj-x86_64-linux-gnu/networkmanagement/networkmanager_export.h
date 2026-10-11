
#ifndef NETWORKMANAGER_EXPORT_H
#define NETWORKMANAGER_EXPORT_H

#ifdef NETWORKMANAGER_STATIC_DEFINE
#  define NETWORKMANAGER_EXPORT
#  define NETWORKMANAGER_NO_EXPORT
#else
#  ifndef NETWORKMANAGER_EXPORT
#    ifdef lingmonm_qmlplugins_EXPORTS
        /* We are building this library */
#      define NETWORKMANAGER_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define NETWORKMANAGER_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef NETWORKMANAGER_NO_EXPORT
#    define NETWORKMANAGER_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef NETWORKMANAGER_DEPRECATED
#  define NETWORKMANAGER_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef NETWORKMANAGER_DEPRECATED_EXPORT
#  define NETWORKMANAGER_DEPRECATED_EXPORT NETWORKMANAGER_EXPORT NETWORKMANAGER_DEPRECATED
#endif

#ifndef NETWORKMANAGER_DEPRECATED_NO_EXPORT
#  define NETWORKMANAGER_DEPRECATED_NO_EXPORT NETWORKMANAGER_NO_EXPORT NETWORKMANAGER_DEPRECATED
#endif

/* NOLINTNEXTLINE(readability-avoid-unconditional-preprocessor-if) */
#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef NETWORKMANAGER_NO_DEPRECATED
#    define NETWORKMANAGER_NO_DEPRECATED
#  endif
#endif

#endif /* NETWORKMANAGER_EXPORT_H */
