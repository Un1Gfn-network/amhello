|||
|-|-|
|autoscan  |-> stub configure.ac|
|&nbsp;||
|autoconf  |<del>configure.in</del><sup>1</sup> configure.ac -> configure  |
|autoheader|<del>configure.in</del><sup>1</sup> configure.ac -> config.h.in|
|automake  |configure.ac+Makefile.am -> Makefile.in|
|&nbsp;||
|./configure|Makefine.in -> Makefile<br>config.h.in -> config.h|

\[1\] deprecated

    tree -aC -I .git\|.gitignore

autoreconf(1) - regenerate the GNU Build System files - runs autoconf - optionally runs aclocal autoheader automake autopoint (formerly gettextize) libtoolize intltoolize gtkdocize

    for var in \
      WARNINGS \
      AUTOCONF ACLOCAL AUTOHEADER AUTOM4TE AUTOMAKE AUTOPOINT GTKDOCIZE INTLTOOLIZE LIBTOOLIZE M4 MAKE
    do
      # echo "${!var}"
      unset -v "$var"
    done
    autoreconf -v -i -W all

<!-- <div></div> -->
[./configure options](https://www.gnu.org/software/autoconf/manual/autoconf-2.70/html_node/configure-Invocation.html)

    env \
      CC=gcc \
      CFLAGS="-std=gnu11 -g -O0 -Wall -Wextra -Wno-unused-parameter -Winline -Wshadow -D_GNU_SOURCE" \
    ./configure --prefix=/usr/local

[2.2.2 Standard Makefile Targets](https://www.gnu.org/software/automake/manual/html_node/Standard-Targets.html)

* make all
* make DESTDIR=/tmp/x install
* make dist
* make distcheck
* make distclean

---

m4 macro `PKG_CHECK_MODULES` pkg-config(1)

[GNU toolchain](https://en.wikipedia.org/wiki/GNU_toolchain):\
make gcc glibc binutils bison m4 gdb autotools(i.e. GNU Build System)

[GNU Autotools](https://en.wikipedia.org/wiki/GNU_Autotools):\
&bullet; [Autoconf](https://en.wikipedia.org/wiki/Autoconf) - autoconf autoheader autom4te autoreconf autoscan autoupdate ifnames\
&bullet; [Automake](https://en.wikipedia.org/wiki/Automake) - aclocal automake\
&bullet; [Libtool](https://en.wikipedia.org/wiki/Libtool)   - libtool libtoolize

[Automake manual](https://www.gnu.org/software/automake/manual)

[--disable-dependency-tracking](https://www.gnu.org/software/automake/manual/html_node/Dependency-Tracking.html)

https://www.gnu.org/software/autoconf/manual/autoconf-2.70/html_node/Special-Chars-in-Variables.html
