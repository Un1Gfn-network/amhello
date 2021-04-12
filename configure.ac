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
AC_CONFIG_SRCDIR([./amhello/main.c])
AC_CONFIG_HEADERS([config.h:config.h.in])
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
AC_CONFIG_FILES([
 Makefile
 amhello/Makefile
])
AC_OUTPUT
