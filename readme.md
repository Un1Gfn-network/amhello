---

CFLAGS, LDFLAGS -> Makefile.am -> automake -> Makefile.in

( autoscan -> ) configure.ac -> autoheader -> config.h.in -> ... -> config.h

    tree -aC -I .git\|.gitignore

<div></div>

    for var in \
      WARNINGS \
      AUTOCONF ACLOCAL AUTOHEADER AUTOM4TE AUTOMAKE AUTOPOINT GTKDOCIZE INTLTOOLIZE LIBTOOLIZE M4 MAKE \
    do
      # echo "${!var}"
      unset -v "$var"
    done
    autoreconf -v -i -W all

<div></div>

    env \
      CC=gcc \
      CFLAGS="-std=gnu11 -g -O0 -Wall -Wextra -Wno-unused-parameter -Winline -Wshadow -D_GNU_SOURCE -pthread" \
    ./configure --prefix=/usr/local --enable-silent-rules --disable-dependency-tracking

[2.2.2 Standard Makefile Targets](https://www.gnu.org/software/automake/manual/html_node/Standard-Targets.html)

    make all
    make DESTDIR=/tmp/x install
    make distclean # Makefile self-destructs

---

m4 macro `PKG_CHECK_MODULES` pkg-config(1)

configure.ac written in GNU m4 language

[GNU toolchain](https://en.wikipedia.org/wiki/GNU_toolchain) - make gcc glibc binutils bison m4 gdb autotools(GNU Build System)

[GNU Autotools](https://en.wikipedia.org/wiki/GNU_Autotools) -\
&bullet; [Autoconf](https://en.wikipedia.org/wiki/Autoconf) - autoconf autoheader autom4te autoreconf autoscan autoupdate ifnames\
&bullet; [Automake](https://en.wikipedia.org/wiki/Automake) - aclocal automake\
&bullet; [Libtool](https://en.wikipedia.org/wiki/Libtool)   - libtool libtoolize

[Automake manual](https://www.gnu.org/software/automake/manual)

[--disable-dependency-tracking](https://www.gnu.org/software/automake/manual/html_node/Dependency-Tracking.html)
