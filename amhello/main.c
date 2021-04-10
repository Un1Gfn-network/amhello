#include <config.h>
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
