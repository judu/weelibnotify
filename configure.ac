AC_PREREQ([2.68])
AC_INIT([Weelibnotify],[0.1],[julien.durillon@gmail.com])

AC_SUBST([PACKAGE_NAME], ["$PACKAGE_NAME"])
AC_SUBST([PACKAGE_VERSION], ["$PACKAGE_VERSION"])

AC_CONFIG_HEADERS([config.h])
AC_CONFIG_SRCDIR([src/])
AC_CONFIG_MACRO_DIR([m4])
AC_CONFIG_AUX_DIR([.aux])

AM_INIT_AUTOMAKE([1.11 subdir-objects check-news foreign no-dist-gzip dist-xz tar-ustar -Wall])
AM_SILENT_RULES([yes])

AC_PROG_INSTALL
AC_PROG_CC
AM_PROG_CC_C_O

PKG_CHECK_MODULES(GOBJECT, [gobject-2.0 >= 2.27.0])

PKG_CHECK_MODULES(NOTIFY, [libnotify])
PKG_CHECK_MODULES(WEECHAT, [weechat])

LT_INIT

AC_CONFIG_FILES([
  Makefile
])
AC_OUTPUT
AC_MSG_RESULT([
        $PACKAGE_NAME $VERSION
])
