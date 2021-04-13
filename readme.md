[the flow](https://www.gnu.org/savannah-checkouts/gnu/autoconf/manual/autoconf-2.70/html_node/Making-configure-Scripts.html)

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
    env INSTALL=/usr/bin/install autoreconf -v -i -W all -W error

<!-- <div></div> -->
[./configure options](https://www.gnu.org/software/autoconf/manual/autoconf-2.70/html_node/configure-Invocation.html) -
[2.2.3 Standard Directory Variables](https://www.gnu.org/software/automake/manual/html_node/Standard-Directory-Variables.html) -
[4.8.2 Installation Directory Variables](https://www.gnu.org/savannah-checkouts/gnu/autoconf/manual/autoconf-2.70/html_node/Installation-Directory-Variables.html)

    ./configure \
      --prefix=/usr/local \
      CFLAGS="-std=gnu11 -g -O0 -Wall -Wextra -Wno-unused-parameter -Winline -Wshadow -D_GNU_SOURCE"

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

[Automake primaries](https://www.gnu.org/software/automake/manual/html_node/amhello_0027s-Makefile_002eam-Setup-Explained.html)

[auxiliary programs\
ar-lib
compile
config.guess
config.sub
depcomp
install-sh
mdate-sh
missing
mkinstalldirs
py-compile
test-driver
texinfo.tex
ylwrap](https://www.gnu.org/software/automake/manual/html_node/Auxiliary-Programs.html)


