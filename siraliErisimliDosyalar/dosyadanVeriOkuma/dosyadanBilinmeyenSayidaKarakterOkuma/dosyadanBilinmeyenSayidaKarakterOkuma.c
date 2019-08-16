//Dosyadaki karakterleri ekrana yazdirmak

#include "stdio.h"
#include "string.h"

int main(){
  FILE* fptr1;
  fptr1 = fopen("test1.txt","r");
  if(fptr1 != NULL){//dosya basarili bir sekilde acildiysa NULLdan farkli bir yeri gösterir.
    while (!feof(fptr1)){
      printf("%c",fgetc(fptr1));
    }
  }
  fclose(fptr1);
}
/*
1) feof(FILE *stream) feof fonksiyonu, standart input output header dosyasi
icinde bulunan ve parametre olarak gönderilen dosyanin sonuna varilip varilmadigini
kontrol eden bir fonksiyondur.
dosya sonunda degilken 0(False) döndürüyor, dosya sonuna geldigindeyse 1(True) döndürüyor.
*/
