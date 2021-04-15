# https://www.gnu.org/software/automake/manual/html_node/A-Library.html
# https://www.gnu.org/software/automake/manual/html_node/Canonicalization.html

# W/o libtool
# lib_LIBRARIES = libamhello.a
# noinst_LIBRARIES = libamhello.a
# libamhello_a_SOURCES = libamhello.c

# W/ libtool
# pkglib_LTLIBRARIES = libamhello.la # $(libdir)/amhello/
lib_LTLIBRARIES = libamhello.la      # $(libdir)/
# libamhello_la_SOURCES = libamhello.c

# https://developer.gnome.org/anjuta-build-tutorial/stable/library-autotools.html.en
libamhello_la_CFLAGS = -I$(top_srcdir)/include -DBINDIR='"$(bindir)"'

# https://www.gnu.org/software/automake/manual/html_node/Libtool-Flags.html
# https://www.gnu.org/software/libtool/manual/html_node/Link-mode.html
# https://www.gnu.org/software/libtool/manual/html_node/Libtool-versioning.html
# -rpath
# -release
# -version-info
# -version-number (obselete)
libamhello_la_LDFLAGS = -release @REV_LIST_COUNT@
# libamhello_la_LDFLAGS = -version-info 6:12:4
libamhello_la_LIBTOOLFLAGS = -v
