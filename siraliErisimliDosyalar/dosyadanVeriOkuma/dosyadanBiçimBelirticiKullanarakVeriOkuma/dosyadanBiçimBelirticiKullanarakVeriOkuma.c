/*
fscanf(FILE* stream,"format specifiers(%s/t%d)",buffer) ile
"stream" adli dosya pointerindan, belirli bicimlendirmelerle karakterleri ve sayilari
bir arada dosyadan okumamizi saglar ve "buffer" adli pointerin içine saklamamizi saglar.

*/

#include "stdio.h"
int main(){
  FILE *fp; // fp = file pointer
  char buffer[20]; // isim soyisim,şehir vb.
  int buf; // herhangi bir numara
  fp = fopen("test2.txt","r");
  if(fp!=NULL){
    while(fscanf(fp,"%d-%s",&buf,buffer) != EOF)
    // while(fscanf(fp,"%d - %s",&buf,buffer) != EOF) YANLIS GOSTERIM yukaridaki g�sterdimde dikkat ederseniz bicim okurken string ve integer arasindaki ayrimi '-' ile yapiyor.
    // buna ekstra olarak tireden �nce koyulacak okumayi kolaylastirma amacli ' ' karakterleri programi sonsuz bir d�ng�ye sokuyor.
  {
      printf("%d - %s\n",buf,buffer);
  }
}
}

/*

data buffer = temp,
gecici olarak kullanılan bir hafizadir.
*/
