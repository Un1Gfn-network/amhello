// https://www.gnu.org/software/automake/manual/html_node/Flag-Variables-Ordering.html
// amhello/Makefile.am
#if defined AM_TEST_FLAG_A && defined AM_TEST_FLAG_B
#else
#error
#endif

// https://www.gnu.org/software/autoconf/manual/autoconf-2.70/html_node/Configuration-Headers.html
// ... ‘#include’ the configuration header file before any other header files ...
#ifdef HAVE_CONFIG_H
#include "../config.h"
#else
#error
#endif

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

#include <libamhello.h>

#define SZ 1024
#define SELF "/proc/self/exe"

void ver();

int main(){

  char buf[SZ]={};
  assert(1<=readlink(SELF,buf,SZ));
  // amhello/Makefile.am
  // https://www.gnu.org/savannah-checkouts/gnu/autoconf/manual/autoconf-2.70/html_node/Defining-Directories.html
  printf("%s -> %s\n",buf,BINDIR"/amhello");

  puts("Hello World!");
  ver();

  return 0;

}
