/*
fscanf(FILE* stream,"format specifiers(%s/t%d)",buffer) ile
"stream" adli dosya pointerindan, belirli bicimlendirmelerle karakterleri ve sayilari
bir arada dosyadan okumamizi saglar ve "buffer" adli pointerin iÃ§ine saklamamizi saglar.

*/

#include "stdio.h"
int main(){
  FILE *fp; // fp = file pointer
  char buffer[20]; // isim soyisim,ÅŸehir vb.
  int buf; // herhangi bir numara
  fp = fopen("test2.txt","r");
  if(fp!=NULL){
    while(fscanf(fp,"%d-%s",&buf,buffer) != EOF)
    // while(fscanf(fp,"%d - %s",&buf,buffer) != EOF) YANLIS GOSTERIM yukaridaki gösterdimde dikkat ederseniz bicim okurken string ve integer arasindaki ayrimi '-' ile yapiyor.
    // buna ekstra olarak tireden önce koyulacak okumayi kolaylastirma amacli ' ' karakterleri programi sonsuz bir döngüye sokuyor.
  {
      printf("%d - %s\n",buf,buffer);
  }
}
}

/*

data buffer = temp,
gecici olarak kullanÄ±lan bir hafizadir.
*/
