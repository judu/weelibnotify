ACLOCAL_AMFLAGS = -I m4

weechatplugindir = $(libdir)/weechat/plugins
weechatplugin_LTLIBRARIES = weelibnotify.la



AM_CFLAGS = \
	   $(WEECHAT_CFLAGS)\
	   $(NOTIFY_CFLAGS)\
	   -fPIC 

AM_LDFLAGS = \
	     $(WEECHAT_LIBS)\
	     $(NOTIFY_LIBS)\
	     -fPIC -shared -avoid-version -module -export-dynamic

weelibnotify_la_SOURCES = \
		      src/weelibnotify.c
