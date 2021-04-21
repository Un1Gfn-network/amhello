# https://www.gnu.org/software/automake/manual/html_node/A-Library.html
# https://www.gnu.org/software/automake/manual/html_node/Canonicalization.html

# W/o libtool
# lib_LIBRARIES = libamhello.a
# noinst_LIBRARIES = libamhello.a
# libamhello_a_SOURCES = libamhello.c

# W/ libtool
# noinst_LTLIBRARIES = libamhello.la
# pkglib_LTLIBRARIES = libamhello.la # $(libdir)/amhello/
# lib_LTLIBRARIES = libamhello.la    # $(libdir)/
lib_LTLIBRARIES = libamhello.la libamhijack.la

# https://www.gnu.org/software/automake/manual/html_node/Conditional-Sources.html
# EXTRA_libamhello_la_SOURCES = qr.c
libamhello_la_SOURCES = libamhello.c
libamhello_la_SOURCES += qr.c

# ./configure LIBTOOLFLAGS="..."
# libamhello_la_LIBTOOLFLAGS =

# https://developer.gnome.org/anjuta-build-tutorial/stable/library-autotools.html.en
# https://www.gnu.org/software/automake/manual/html_node/Renamed-Objects.html
# libamhello.c -> libamhello_la-libamhello.o
libamhello_la_CFLAGS = -I$(top_srcdir)/include -DBINDIR='"$(bindir)"' $(LIBQRENCODE_CFLAGS)
libamhijack_la_CFLAGS = -I$(top_srcdir)/include

# https://www.gnu.org/software/automake/manual/html_node/Libtool-Flags.html
# https://www.gnu.org/software/libtool/manual/html_node/Link-mode.html
# https://www.gnu.org/software/libtool/manual/html_node/Libtool-versioning.html
# -rpath
# -release
# -version-info
# -version-number (obselete)
# libamhello_la_LDFLAGS = -version-info 6:12:4
libamhello_la_LDFLAGS = -release @REV_LIST_COUNT@
# libamhijack_la_LDFLAGS = -release ""
# libamhijack_la_LDFLAGS = -version-info 0:0:0
libamhijack_la_LDFLAGS = -avoid-version

# https://stackoverflow.com/questions/23685981/what-is-the-difference-between-ldadd-and-libadd
# https://www.gnu.org/software/automake/manual/html_node/Program-and-Library-Variables.html#index-maude_005fLIBADD-1
# https://www.gnu.org/software/automake/manual/html_node/Program-and-Library-Variables.html#index-maude_005fLDADD-1
# Use the LIBADD primary for libraries, and LDADD for executables
libamhello_la_LIBADD = $(LIBQRENCODE_LIBS)

# https://www.gnu.org/software/automake/manual/html_node/Dependency-Tracking.html
# https://www.gnu.org/software/automake/manual/html_node/Linking.html # EXTRA_prog_DEPENDENCIES
# EXTRA_libamhello_la_DEPENDENCIES = $(top_srcdir)/include/libamhello.h
