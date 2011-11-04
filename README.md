This project has many purposes:

  – Get notified when being poked in any chan.
  – Learn how to make weechat plugin.
  – Learn how to use autotools.
  – Write some C.
  

Build it:

If weechat/plugins directory is under /usr/lib, prefix should be /usr.
  
  ./autogen.sh
  ./configure [--prefix=/usr]
  make
  make install
