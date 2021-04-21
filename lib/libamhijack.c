#include <stdio.h>
#include <stdlib.h>

#include <libamhello.h>

static void hijack(){
  fprintf(stderr,"hijacked\n");
  fprintf(stderr,"\n");
  exit(1);
}

void path(){hijack();}

void ver(){hijack();}

void uname2(){hijack();}
