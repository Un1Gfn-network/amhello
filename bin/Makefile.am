# check_bin_PROGRAMS = amhello_check

# bin/Makefile.am:26: warning: variable 'amhello_LDADD' is defined but no program or
# bin/Makefile.am:26: library has 'amhello' as canonical name (possible typo)
# bin_PROGRAMS = $(PACKAGE)$(EXEEXT)
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
AM_CFLAGS = -I$(top_srcdir)/include -DBINDIR='"$(bindir)"'

# https://www.gnu.org/software/autoconf/manual/autoconf-2.70/html_node/Preset-Output-Variables.html#index-top_005fsrcdir
# ./configure LIBTOOLFLAGS="..."
# AM_LIBTOOLFLAGS =

# https://developer.gnome.org/anjuta-build-tutorial/stable/library-autotools.html.en
# https://www.gnu.org/software/automake/manual/html_node/Linking.html
# amhello_LDFLAGS: program-specific linker flags
# amhello_LDADD:   -l -L -dlopen -dlpreopen
amhello_LDADD = $(top_srcdir)/lib/lib$(PACKAGE).la

# http://gnu-automake.7480.n7.nabble.com/local-vs-hook-td17002.html
# https://www.gnu.org/software/automake/manual/html_node/Extending-Installation.html
# https://www.gnu.org/software/automake/manual/html_node/Extending.html#index-dist_002dhook-1
install-exec-hook:
	ln -sv $(PACKAGE)$(EXEEXT) $(DESTDIR)$(bindir)/amreset$(EXEEXT)
