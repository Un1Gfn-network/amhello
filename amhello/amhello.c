// https://www.gnu.org/software/autoconf/manual/autoconf-2.70/html_node/Configuration-Headers.html
// ... ‘#include’ the configuration header file before any other header files ...
#ifdef HAVE_CONFIG_H
#include "../config.h"
#else
#error
#endif

#include <stdio.h>

int main(){

  puts("Hello World!");

  //                            ./configure     autoreconf -i
  //                            |               |
  // package.h(PACKAGE_STRING) <- package.h.in <- configure.ac(AC_INIT())
  puts("This is " PACKAGE_STRING);
  puts("Visit " PACKAGE_URL " for details");

  return 0;

}
