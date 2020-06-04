lib_LTLIBRARIES = libmylibrary.la
libmylibrary_la_SOURCES = \
	mylibrary.c

libmylibrary_la_CFLAGS = -I$(abs_top_builddir)/include -I$(top_srcdir)/include -std=gnu99

if ENABLE_MYEXTRAFEATURE
libmylibrary_la_SOURCES+=\
	myextrafeature.c
libmylibrary_la_CFLAGS+=-DMYEXTRAFEATURE
endif

bin_PROGRAMS = myapp
myapp_SOURCES=\
	main.c
myapp_CFLAGS = -I$(abs_top_builddir)/include -I$(top_srcdir)/include -std=gnu99
myapp_LDADD=-L$(abs_top_builddir)/src/.libs libmylibrary.la


