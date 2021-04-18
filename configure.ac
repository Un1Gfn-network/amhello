AC_PREREQ([2.71])
dnl https://www.gnu.org/software/autoconf/manual/autoconf-2.70/html_node/Generic-Programs.html#index-AC_005fCHECK_005fPROG-1
dnl https://stackoverflow.com/questions/7490978/autoconf-check-for-program-and-fail-if-not-found
dnl https://devmanual.gentoo.org/general-concepts/autotools/index.html
dnl AC_CHECK_PROGS(GIT, git)
dnl if test x$GIT = "x" ; then
dnl     AC_MSG_ERROR([git is required to build the data files.])
dnl fi
dnl https://lemon.cs.elte.hu/trac/lemon/browser/lemon-1.0/configure.ac?rev=395#L5
dnl https://stackoverflow.com/a/55427134
dnl https://www.gnu.org/savannah-checkouts/gnu/autoconf/manual/autoconf-2.70/html_node/Redefined-M4-Macros.html#index-m4_005fesyscmd_005fs-1
AC_INIT([GNU Automake Hello World],
        m4_bregexp(m4_quote(m4_esyscmd_s([printf "r%s.%s" "$(git rev-list --count HEAD)" "$(git rev-parse --short HEAD)"])),[r[1-9][0-9]*\.[0-9a-z]+], [\&]),
        [Un1Gfn@gmail.com],
        [amhello],
        [https://github.com/Un1Gfn-network/autotools])
dnl https://stackoverflow.com/questions/11647208/where-to-add-a-cflag-such-as-std-gnu99-into-an-autotools-project
dnl AX_APPEND_COMPILE_FLAGS([-D_GNU_SOURCE])
CFLAGS+=" -D_GNU_SOURCE"
dnl https://www.gnu.org/software/autoconf/manual/autoconf-2.70/html_node/Setting-Output-Variables.html#index-AC_005fSUBST-1
AC_SUBST(REV_LIST_COUNT, m4_quote(m4_esyscmd_s([printf "r%s" "$(git rev-list --count HEAD)"])))
dnl
dnl https://www.gnu.org/software/autoconf/manual/autoconf-2.70/html_node/Input.html#AC_005fCONFIG_005fSRCDIR
AC_CONFIG_SRCDIR([./amhello/amhello.c])
dnl AC_CONFIG_HEADERS([config.h])
AC_CONFIG_HEADERS([config.h:config.h.in])
dnl libtoolize: Consider adding 'AC_CONFIG_MACRO_DIRS([m4])' to configure.ac
dnl https://www.gnu.org/software/automake/manual/html_node/Local-Macros.html
dnl https://www.gnu.org/software/autoconf/manual/autoconf-2.70/html_node/Input.html#index-AC_005fCONFIG_005fMACRO_005fDIRS-1
AC_CONFIG_MACRO_DIRS([m4])
dnl
dnl https://www.gnu.org/software/autoconf/manual/autoconf-2.70/html_node/Particular-Headers.html
AC_CHECK_HEADER_STDBOOL
AC_HEADER_ASSERT
dnl https://www.gnu.org/software/autoconf/manual/autoconf-2.70/html_node/Generic-Headers.html
dnl AC_CHECK_HEADER(abcdef.h, [/bin/false], [/bin/false])
dnl https://www.gnu.org/software/automake/manual/html_node/List-of-Automake-options.html
dnl    nostdinc    - remove -I. -I.. before CFLAGS
dnl subdir-objects - subdir/file.cxx -> subdir/file.o
dnl https://www.gnu.org/software/automake/manual/html_node/Dependency-Tracking.html
dnl no-dependencies
AM_INIT_AUTOMAKE([foreign
                  no-dist
                  no-installinfo
                  no-installman
                  nostdinc
                  no-texinfo.tex
                  subdir-objects
                  1.16.3
                  -Wall
                  -Werror])
dnl https://www.gnu.org/software/autoconf/manual/autoconf-2.70/html_node/C-Compiler.html#AC_005fPROG_005fCC
dnl default "-g -O2"
AC_PROG_CC([gcc])
dnl https://www.gnu.org/software/autoconf/manual/autoconf-2.70/html_node/Particular-Programs.html
AC_PROG_INSTALL
dnl https://www.gnu.org/software/automake/manual/html_node/A-Library.html
dnl libtoolize: 'AC_PROG_RANLIB' is rendered obsolete by 'LT_INIT'
dnl AC_PROG_RANLIB
AM_PROG_AR
dnl
dnl https://gitlab.gnome.org/GNOME/libxml2/-/issues/219
dnl AM_PATH_XML2(2.9.11)
dnl pkg.m4(7)
dnl /usr/share/aclocal/pkg.m4 [m4_define([PKG_MACROS_VERSION], [0.29.1])
PKG_PREREQ(0.29.1)
dnl pkg-config --version
PKG_PROG_PKG_CONFIG(1.7.3)
dnl https://www.gnu.org/software/autoconf/manual/autoconf-2.70/html_node/Preset-Output-Variables.html#index-LIBS-5
dnl https://developer.gnome.org/anjuta-build-tutorial/stable/library-autotools.html.en
dnl pkg-config --modversion libxml-2.0
dnl PKG_CHECK_MODULES(XML, libxml-2.0 >= 2.4)
dnl PKG_CHECK_MODULES(SQLITE3, sqlite3 >= 3.35.4)
PKG_CHECK_MODULES(LIBQRENCODE, libqrencode >= 4.1.1)
dnl
dnl /usr/share/aclocal/libtool.m4
LT_PREREQ([2.4.6])
dnl https://www.gnu.org/software/libtool/manual/html_node/LT_005fINIT.html
LT_INIT([shared
         disable-static])
dnl
AM_SILENT_RULES([yes])
AC_CONFIG_FILES([
 Makefile
 include/Makefile
 lib/Makefile
 amhello/Makefile
])
AC_OUTPUT
dnl https://www.gnu.org/savannah-checkouts/gnu/m4/manual/m4-1.4.18/html_node/Location.html
AC_MSG_RESULT([__file__:__line__: removing rpath from libtool...])
dnl https://wiki.debian.org/RpathIssue#Patching_the_build-system (modified)
dnl Remove -Wl,-rpath -Wl,/some/path
dnl AC_MSG_RESULT([configure: removing rpath from libtool...])
sed -i.old s/'^hardcode_libdir_flag_spec.*$'/'hardcode_libdir_flag_spec="-D__LIBTOOL_IS_A_FOOL__"'/g libtool
diff -u0 libtool.old libtool
dnl cannot use [ "$A" -eq "$B" ] due to issue w/ brackets
test "$?" -eq 1 || (exit -1)
