ACLOCAL_AMFLAGS = -I m4

weechatplugindir = $(libdir)/weechat/plugins
weechatplugin_LTLIBRARIES = libweelibnotify.la



AM_CFLAGS = \
	   $(WEECHAT_CFLAGS)\
	   $(NOTIFY_CFLAGS)

AM_LDFLAGS = \
	     $(WEECHAT_LIBS)\
	     $(NOTIFY_LIBS)

libweelibnotify_la_SOURCES = \
		      src/weelibnotify.c
