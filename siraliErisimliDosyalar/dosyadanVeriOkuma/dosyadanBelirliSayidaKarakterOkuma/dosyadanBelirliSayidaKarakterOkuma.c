#include "stdio.h"
#include "string.h"
/* icinde kac tane karakter oldugunu bildigimiz test1.txt adli
bir dosya oldugunu ve bu dosya icinden karakter okumak ve icindeki karakterleri
program icinde tekrar kullanmak icin
depolamak istedigimizi varsayalim.
*/
int main(){
  char var[15];
  FILE *fp;
  fp = fopen ("test1.txt","r");
  if (fp!=NULL)
  {
    fgets(var,8,fp); // "\0" karakterini de dahil edersek, 123456.'\0' toplam 8 tane karakter
    // 8 karakteri var isimli char dizisinin icine fp dosya pointerinin icinden okuyarak yazdir.
    if(strlen(var) > 0) // var string dizisinin icerdigi karakter sayisi 0 dan büyükse bunlari yap.
    {
      printf("%s\n",var );
      
    }
    fclose(fp);
  }
}
/*NOT: fgetc ve fgets fonksiyonlari dosyadan sadece karakter okur,
yani donen degerlerin hicbiri integer/float gibi sayisal bir deger degildir.

*/
