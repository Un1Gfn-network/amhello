#include <qrencode.h>
#include <stdio.h>
#include <libamhello.h>

void qrver(){
  int x=0,y=0,z=0;
  QRcode_APIVersion(&x,&y,&z);
  printf("libqrencode %d.%d.%d (%s)\n",x,y,z,QRcode_APIVersionString());
  // fflush(stdout);
}
