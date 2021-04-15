# https://www.gnu.org/software/automake/manual/html_node/A-Library.html
# https://www.gnu.org/software/automake/manual/html_node/Canonicalization.html

# https://www.gnu.org/software/autoconf/manual/autoconf-2.70/html_node/Preset-Output-Variables.html#index-top_005fsrcdir
AM_CFLAGS = -I$(top_srcdir)/include
AM_LIBTOOLFLAGS = -v

# Without libtool
# lib_LIBRARIES = libamhello.a
# noinst_LIBRARIES = libamhello.a
# libamhello_a_SOURCES = libamhello.c

# With libtool
# pkglib_LTLIBRARIES = libamhello.la
lib_LTLIBRARIES = libamhello.la
# libamhello_la_SOURCES = libamhello.c

# https://www.gnu.org/software/automake/manual/html_node/Libtool-Flags.html
# https://www.gnu.org/software/libtool/manual/html_node/Link-mode.html
# https://www.gnu.org/software/libtool/manual/html_node/Libtool-versioning.html
# -rpath
# -release
# -version-info
# -version-number (obselete)
libamhello_la_LDFLAGS = -release @REV_LIST_COUNT@
# libamhello_la_LDFLAGS = -version-info 6:12:3
# libamhello_la_LIBTOOLFLAGS = -v -Wall
