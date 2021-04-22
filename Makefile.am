# AM_CSS = github-markdown.css
# ifeq (,$(wildcard $(top_srcdir)/$(AM_CSS)))
# $(error wget "https://raw.githubusercontent.com/sindresorhus/github-markdown-css/main/$(AM_CSS)")
# endif

# ifeq (,$(asdlfkj))
# $(error wget "https://raw.githubusercontent.com/sindresorhus/github-markdown-css/main/github-markdown.css")
# endif

# DIST_SUBDIRS = include lib bin
SUBDIRS = include lib bin

# libtoolize: Consider adding '-I m4' to ACLOCAL_AMFLAGS in Makefile.am.
ACLOCAL_AMFLAGS = -I m4

nodist_doc_DATA = readme.md readme.html $(BUILT_SOURCES)

# Makefile.am:*: warning: variable 'readme.html_SOURCES' is defined but no program or
# Makefile.am:*: library has 'readme.html' as canonical name (possible typo)
# readme.html_SOURCES = readme.md

# https://www.gnu.org/software/make/manual/html_node/Suffix-Rules.html
# https://www.tutorialspoint.com/makefile/makefile_suffix_rules.htm
SUFFIXES = .md .html

# Makefile.am:*: warning: '%'-style pattern rules are a GNU make extension
# %.html: %.md
.md.html:
# https://www.gnu.org/software/automake/manual/html_node/Scripts.html
# https://unix.stackexchange.com/a/450857
	cmark-gfm -t html --unsafe --validate-utf8 -e table -e autolink $^ | $(SED) $(srcdir)/md2html.template \
		-e 's,[@]TITLE[@],$(PACKAGE),g' \
		-e 's,[@]STYLESHEET[@],$(BUILT_SOURCES),g' \
		-e '/^@ARTICLE@/{r /dev/stdin' -e 'd;}' \
		>$@

# https://www.gnu.org/software/automake/manual/html_node/Sources.html
# https://www.gnu.org/software/automake/manual/html_node/Built-Sources-Example.html
BUILT_SOURCES = github-markdown.css
$(BUILT_SOURCES):
	@test ! -e $@
	@echo "please run 'wget https://raw.githubusercontent.com/sindresorhus/github-markdown-css/main/$@'"
	@/bin/false

# https://www.gnu.org/software/automake/manual/html_node/Clean.html
MOSTLYCLEANFILES = *.html      #    rm            rm
CLEANFILES = $(BUILT_SOURCES)  #    rm           keep
#                              # make clean   make mostlyclean

uninstall-hook: # uninstall-dist_docDATA
	test ! -e $(DESTDIR)$(docdir) || rmdir -v $(DESTDIR)$(docdir)
# 	test -z '$(shell ls -A $(DESTDIR)$(docdir))'
