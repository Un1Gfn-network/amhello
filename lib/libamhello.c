// https://www.gnu.org/software/autoconf/manual/autoconf-2.70/html_node/Configuration-Headers.html
// ... ‘#include’ the configuration header file before any other header files ...
#ifdef HAVE_CONFIG_H
#include "../config.h"
#else
#error
#endif

#include <assert.h>
#include <stdio.h>
#include <sys/utsname.h>
#include <unistd.h>

#include <libamhello.h>

#define SZ 1024
#define SELF "/proc/self/exe"

void path(){
  char buf[SZ]={};
  assert(1<=readlink(SELF,buf,SZ));
  // amhello/Makefile.am
  // https://www.gnu.org/savannah-checkouts/gnu/autoconf/manual/autoconf-2.70/html_node/Defining-Directories.html
  printf("%s -> %s\n",buf,BINDIR"/amhello");
}

void ver(){
  //                            ./configure     autoreconf -i
  //                            |               |
  // package.h(PACKAGE_STRING) <- package.h.in <- configure.ac(AC_INIT())
  puts("This is " PACKAGE_STRING);
  puts("Visit " PACKAGE_URL " for details");
}

void uname2(){
  struct utsname buf_s={};
  assert(0==uname(&buf_s));
  printf("sysname    - %s\n",buf_s.sysname);
  printf("nodename   - %s\n",buf_s.nodename);
  printf("release    - %s\n",buf_s.release);
  printf("version    - %s\n",buf_s.version);
  printf("machine    - %s\n",buf_s.machine);
  printf("domainname - %s\n",buf_s.domainname);
}
