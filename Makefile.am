SUBDIRS = include lib bin
# libtoolize: Consider adding '-I m4' to ACLOCAL_AMFLAGS in Makefile.am.
ACLOCAL_AMFLAGS = -I m4

dist_doc_DATA = readme.md

# uninstall-exec-hook:
# bin/Makefile.am:37: error: use 'uninstall-hook', not 'uninstall-exec-hook'

uninstall-hook: # uninstall-dist_docDATA
	test ! -e $(DESTDIR)$(docdir) || rmdir -v $(DESTDIR)$(docdir)
# 	test -z '$(shell ls -A $(DESTDIR)$(docdir))'

