# check_bin_PROGRAMS = amhello_check
bin_PROGRAMS = amhello

# https://www.gnu.org/software/automake/manual/html_node/Program-Sources.html
# ... defaults to the single file hello.c ...
# https://www.gnu.org/software/automake/manual/html_node/Default-_005fSOURCES.html
# ... default ... compile a single C file ...
# ... base name is the name of the target itself ...
# ... extension replaced by AM_DEFAULT_SOURCE_EXT, which defaults to .c ...
# https://www.gnu.org/software/automake/manual/html_node/true.html
# ... implicitly assume that there is a source file named ...
# amhello_SOURCES = amhello.c

# https://www.gnu.org/savannah-checkouts/gnu/autoconf/manual/autoconf-2.70/html_node/Defining-Directories.html
# https://www.gnu.org/software/automake/manual/html_node/Flag-Variables-Ordering.html
AM_CFLAGS = -I$(top_srcdir)/include

# https://www.gnu.org/software/autoconf/manual/autoconf-2.70/html_node/Preset-Output-Variables.html#index-top_005fsrcdir
# ./configure LIBTOOLFLAGS="..."
# AM_LIBTOOLFLAGS =

# https://developer.gnome.org/anjuta-build-tutorial/stable/library-autotools.html.en
# https://www.gnu.org/software/automake/manual/html_node/Linking.html
# amhello_LDFLAGS: program-specific linker flags
# amhello_LDADD:   -l -L -dlopen -dlpreopen
amhello_LDADD = $(top_srcdir)/lib/libamhello.la
