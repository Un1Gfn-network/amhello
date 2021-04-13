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
dnl https://www.gnu.org/software/autoconf/manual/autoconf-2.70/html_node/Input.html#AC_005fCONFIG_005fSRCDIR
AC_CONFIG_SRCDIR([./amhello/amhello.c])
dnl AC_CONFIG_HEADERS([config.h])
AC_CONFIG_HEADERS([config.h:config.h.in])
dnl https://www.gnu.org/software/autoconf/manual/autoconf-2.70/html_node/Particular-Headers.html
AC_CHECK_HEADER_STDBOOL
AC_HEADER_ASSERT
dnl https://www.gnu.org/software/autoconf/manual/autoconf-2.70/html_node/Generic-Headers.html
dnl AC_CHECK_HEADER(abcdef.h, [/bin/false], [/bin/false])
dnl https://www.gnu.org/software/automake/manual/html_node/List-of-Automake-options.html
dnl    nostdinc    - remove -I. -I.. before CFLAGS
dnl subdir-objects - subdir/file.cxx -> subdir/file.o
AM_INIT_AUTOMAKE([foreign
                  no-dependencies
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
AC_PROG_RANLIB
AM_PROG_AR
dnl pkg.m4(7)
dnl /usr/share/aclocal/pkg.m4 [m4_define([PKG_MACROS_VERSION], [0.29.1])
PKG_PREREQ(0.29.1)
dnl pkg-config --version
PKG_PROG_PKG_CONFIG(1.7.3)
dnl https://www.gnu.org/software/autoconf/manual/autoconf-2.70/html_node/Preset-Output-Variables.html#index-LIBS-5
dnl https://developer.gnome.org/anjuta-build-tutorial/stable/library-autotools.html.en
dnl pkg-config --modversion libxml-2.0
PKG_CHECK_MODULES(XML, libxml-2.0 >= 2.4)
dnl https://gitlab.gnome.org/GNOME/libxml2/-/issues/219
dnl AM_PATH_XML2(2.9.11)
AM_SILENT_RULES([yes])
AC_CONFIG_FILES([
 Makefile
 lib/Makefile
 amhello/Makefile
])
AC_OUTPUT
