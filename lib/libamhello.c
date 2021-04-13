// libamhello.a
// libamhello.so

#include <stdio.h>

#include "../config.h"

void ver(){
  //                            ./configure     autoreconf -i
  //                            |               |
  // package.h(PACKAGE_STRING) <- package.h.in <- configure.ac(AC_INIT())
  puts("This is " PACKAGE_STRING);
  puts("Visit " PACKAGE_URL " for details");
}
