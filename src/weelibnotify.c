#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <libnotify/notification.h>
#include <libnotify/notify.h>

#include <weechat-plugin.h>

WEECHAT_PLUGIN_NAME("double");
WEECHAT_PLUGIN_DESCRIPTION("Extension de test pour WeeChat");
WEECHAT_PLUGIN_AUTHOR("Sebastien Helleu <flashcode@flashtux.org>");
WEECHAT_PLUGIN_VERSION("0.1");
WEECHAT_PLUGIN_LICENSE("GPL3");

struct t_weechat_plugin *weechat_plugin = NULL;


int highlight_notify_cb (void *data, const char *signal, const char *type_data, void *signal_data) {
  if( strcmp(type_data, WEECHAT_HOOK_SIGNAL_STRING) == 0) {
    char * line = (char*) signal_data;
    NotifyNotification * notif = notify_notification_new("highlight", line, NULL);
    notify_notification_show(notif, NULL);
    //notify_notification_close(notif, NULL);

    //weechat_command (NULL, line);
  }
  return WEECHAT_RC_OK;
}

int weechat_plugin_init (struct t_weechat_plugin *plugin,
    int argc, char *argv[])
{
  weechat_plugin = plugin;
  g_type_init();
  notify_init("Weechat");

  weechat_hook_signal ("weechat_highlight", &highlight_notify_cb, NULL);

  return WEECHAT_RC_OK;
}

  int
weechat_plugin_end (struct t_weechat_plugin *plugin)
{
  /* pour que le compilateur C soit content */
  plugin = plugin;
  notify_uninit();

  return WEECHAT_RC_OK;
}
