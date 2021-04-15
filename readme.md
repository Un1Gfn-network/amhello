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
    autoreconf -v -i -Wall -Werror

<!-- <div></div> -->
[./configure options](https://www.gnu.org/software/autoconf/manual/autoconf-2.70/html_node/configure-Invocation.html) -
[2.2.3 Standard Directory Variables](https://www.gnu.org/software/automake/manual/html_node/Standard-Directory-Variables.html) -
[4.8.2 Installation Directory Variables](https://www.gnu.org/savannah-checkouts/gnu/autoconf/manual/autoconf-2.70/html_node/Installation-Directory-Variables.html)

    ./configure \
      --prefix=/usr/local \
      CFLAGS="-std=gnu11 -g -O0 -Wall -Wextra -Wno-unused-parameter -Winline -Wshadow -D_GNU_SOURCE"

<div></div>

    make --no-print-directory all
    sh amhello/amhello
    env LD_LIBRARY_PATH=./lib/.libs/ amhello/.libs/amhello

<div></div>

    make --no-print-directory DESTDIR=/tmp/x install
    env LD_LIBRARY_PATH=/tmp/x/usr/local/lib /tmp/x/usr/local/bin/amhello

[2.2.2 Standard Makefile Targets](https://www.gnu.org/software/automake/manual/html_node/Standard-Targets.html)\
&bullet; dist distcheck distclean

---

`PKG_CHECK_MODULES()` - [pkg.m4(7)](https://man.archlinux.org/man/pkg.m4.7) - /usr/share/aclocal/pkg.m4

[GNU toolchain](https://en.wikipedia.org/wiki/GNU_toolchain):\
&bullet; make gcc glibc binutils bison m4 gdb autotools(i.e. GNU Build System)

[GNU Autotools](https://en.wikipedia.org/wiki/GNU_Autotools):\
&bullet; [Autoconf](https://en.wikipedia.org/wiki/Autoconf) - autoconf autoheader autom4te autoreconf autoscan autoupdate ifnames\
&bullet; [Automake](https://en.wikipedia.org/wiki/Automake) - aclocal automake\
&bullet; [Libtool](https://en.wikipedia.org/wiki/Libtool)   - libtool libtoolize

[Automake manual](https://www.gnu.org/software/automake/manual)

[--disable-dependency-tracking](https://www.gnu.org/software/automake/manual/html_node/Dependency-Tracking.html)

https://www.gnu.org/software/autoconf/manual/autoconf-2.70/html_node/Special-Chars-in-Variables.html

[auxiliary programs\
&dash; ar-lib
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

[make silent rules](https://www.gnu.org/software/automake/manual/html_node/Automake-Silent-Rules.html)\
&bullet; AM_SILENT_RULES([yes]) in configure.ac\
&bullet; ./configure --enable-silent-rules\
&bullet; make V=0

./configure --with-*package*\
&bullet; [AC_ARG_WITH()](https://www.gnu.org/software/autoconf/manual/autoconf-2.70/html_node/External-Software.html#AC_005fARG_005fWITH)\
&bullet; [PKG_WITH_MODULES()](https://man.archlinux.org/man/pkg.m4.7#PKG_WITH_MODULES(VARIABLE-PREFIX,_MODULES,_[ACTION-IF-FOUND],[ACTION-IF-NOT-FOUND],_[DESCRIPTION],_[DEFAULT]))

[slibtool](https://dev.midipix.org/cross/slibtool) - [Gentoo Wiki](https://wiki.gentoo.org/wiki/Slibtool)

[libraries are programs with multiple entry points, and more formally defined interfaces](https://www.gnu.org/software/libtool/manual/html_node/Libtool-paradigm.html)

table reference -
[2.2.3](https://www.gnu.org/software/automake/manual/html_node/Standard-Directory-Variables.html) -
[2.4.3](https://www.gnu.org/software/automake/manual/html_node/amhello_0027s-Makefile_002eam-Setup-Explained.html) -
[8.4](https://www.gnu.org/software/automake/manual/html_node/Program-and-Library-Variables.html) -
[12.2](https://www.gnu.org/software/automake/manual/html_node/The-Two-Parts-of-Install.html)

    prefix     dir.install-exec  primary
    ------     ---               ---------
    dist_      bin_              _DATA
    nobase_    lib_              _DEPENDENCIES
    nodist_    libexec_          _HEADERS
    notrans_   localstate_       _JAVA
               pkglib_           _LIBRARIES
               sbin_             _LISP
               sysconf_          _LTLIBRARIES
                                 _MANS
               dir.install-data  _PROGRAMS
               ---               _PYTHON
               data_             _SCRIPTS
               include_          _SOURCES
               info_             _TEXINFOS
               man_              
               oldinclude_       
               pkgdata_          
               pkginclude_       

[lt_cv_sys_lib_search_path_spec\
lt_cv_sys_lib_dlsearch_path_spec](https://www.gnu.org/software/libtool/manual/html_node/Configure-notes.html)\
[LT_SYS_LIBRARY_PATH](https://www.gnu.org/software/libtool/manual/html_node/LT_005fINIT.html#index-LT_005fSYS_005fLIBRARY_005fPATH)
