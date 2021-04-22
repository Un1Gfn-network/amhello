#ifdef HAVE_CONFIG_H
#include "config.h"
#else
#error
#endif

#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

#include <libamhello.h>

void amhello(){

  path();
  puts("");

  // dbver();
  qrver();
  puts("");

  ver();
  puts("");

  uname2();

}

void amreset(){
  time_t rawtime=0;
  time(&rawtime);
  struct tm *timeptr=localtime(&rawtime);
  assert(timeptr);
  // puts(asctime(timeptr));
  printf("[%.2d:%.2d:%.2d] reset\n",
         timeptr->tm_hour,
         timeptr->tm_min,
         timeptr->tm_sec);
}

int main(const int argc, const char *const *const argv){
// https://sourceforge.net/p/predef/wiki/OperatingSystems/#gnulinux
#ifdef __gnu_linux__
  char buf[PATH_BUF_SZ]={};
  readlink("/proc/self/exe",buf,PATH_BUF_SZ);
  assert(0==strcmp(BINDIR"/"PACKAGE ,buf));
#else
#error
#endif
  puts("");
  assert(argc==1);
  const char *name=basename(argv[0]);
  if(0==strcmp("amhello",name))
    amhello();
  else if(0==strcmp("amreset",name))
    amreset();
  else
    assert(false);
  puts("");
  return 0;
}
