/*Cnin dosyalari nasil isledigi hakkinda konusmadan once
*program icinde kullanilan herhangi bir verinin nasil saklandigini/kullanildigini hatirlayalim.
*herhangi bir pointer ya da degisken(int,float,double,char, vb.)
*icinde depoladigi veriyi RAM'de muhafaza eder, yani program kapandiginda
*kullanicinin arayuzden girmis oldugu her degisiklik kaybolur.
*C dili de kullanici tarafindan girilecek bu verilerin program kapandiginda RAMde oldugu gibi kaybolmamasi
*icin ayri bir pointer sagliyor ve "FILE" olarak adlandiriyor.
*/

/* stdio.h header kutuphanesi, fopen,fclose,freopen,fread,fwrite,fscanf,fprintf
gibi dosya okuma/yazdirma icin bir cok onemli fonksiyonu icinde bulundurur.

   stdlib.h header kutuphanesi, rand,srand,exit gibi fonksiyonlari icerir.

   time.h time(NULL) kullanilan makinedeki guncel zamani saniye cinsinden dondurur.
   rastgelelik etkisi vermesi icin srand fonksiyonunun icine time(NULL) fonksiyonundan gelen deger dondurulur.
*/

#include "stdio.h" //
#include "stdlib.h"
#include "time.h"
int main()
{
  srand(time(NULL));
  FILE* fptr1; // dosya pointerinin tanimlanmasi
  int x;
  ptr1 = fopen("test.txt","w"); // dosya pointeri test.txt dosyasini "w" (write) moduyla acsin.
  if (ptr1 != NULL) { // dosyanin daha onceden olusturulmadigini varsayarsak herhangi bir sebeple acilamayan bir dosya pointeri,
    // NULL degerini dondurecektir, pointer NULL olmadigi zaman, bunlari yapsin.
    for(int i=0;i<10;i++){
      fprintf(ptr1,"%d. eleman = %d\n",i+1,rand()%10); // dosyaya yazdirilacak olan verilerin girilmesi.
    //printf("%d. eleman = %d\n",i+1,rand()%10); goruldugu uzere printf fonksiyonuyla arasindaki tek fark, stdout[standart cikti]'ya degil de
    // daha onceden secilen bir pointer'in icine yazdirilmasini sagliyor.
      //(1)*
    }
  }
  fclose(ptr1);
}
/*(1)* = Yazdirilacak olan bu veriler dosyaya karakter olarak yazdirilacaktir. Yani integer olarak yazdirilmasini istedigimiz i+1
ve rand()%10 degerleri, dosyaya karakter olarak yazdirilacaktir. fscanf fonksiyonuyla karakter ve reel sayi ayrimi yapilabilmektedir.*/
