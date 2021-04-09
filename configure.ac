dnl https://lemon.cs.elte.hu/trac/lemon/browser/lemon-1.0/configure.ac?rev=395#L5
dnl https://stackoverflow.com/questions/8559456/read-a-version-number-from-a-file-in-configure-ac
dnl https://www.gnu.org/savannah-checkouts/gnu/autoconf/manual/autoconf-2.70/html_node/Redefined-M4-Macros.html#index-m4_005fesyscmd_005fs-1
AC_INIT([amhello], m4_esyscmd_s([printf "r%s.%s" "$(git rev-list --count HEAD)" "$(git rev-parse --short HEAD)"]))
AM_INIT_AUTOMAKE([-Wall -Werror foreign])
AC_PROG_CC
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_FILES([
 Makefile
 amhello/Makefile
])
AC_OUTPUT
