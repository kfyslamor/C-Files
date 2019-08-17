#include "stdio.h"
#include "time.h"
#include <stdlib.h>

int isEven(const int NUM){
  if(NUM % 2 == 0){
    return 0;
  }
  else{
    return 1;
  }
}
int isPrime(const int NUM){
  if(NUM > 1){
    for(int i = 2;i<=(NUM/2);i++){
      if(NUM % i == 0){
        // sayi asal degildir.
        return 1;
      }
    }
    return 0;
  }
  else{
    return 1;
  }
}

int main(){
    srand(time(NULL));
    FILE *fptr1,*ftek,*fcift,*fasal;
    int temp;
    fptr1 = fopen("data/numbers.txt","w");
    fasal = fopen("data/prime.txt","w");
    ftek = fopen("data/odd.txt","w");
    fcift = fopen("data/even.txt","w");
    if(fptr1 == NULL || fasal == NULL || ftek == NULL || fcift == NULL){
      printf("Dosyalardan biri acilamadi.\n");
      exit(EXIT_FAILURE);
    }

    for(int i = 0;i<100;i++){
      fprintf(fptr1,"%d\n",rand()%100);
    }
    freopen("numbers.txt","r",fptr1);
    while(!feof(fptr1)){ //sayilarin oldugu pointer, dosya sonuna gelene kadar bunlari yap.
      fscanf(fptr1,"%d\n",&temp); // karar yapilarinda isleme sokabilmek icin dosyadan okuma yap ve degiskeninin icine ata.
      if(isPrime(temp) == 0){ // sayi asal ise 0 dondur
        fprintf(fasal,"%d\n",temp); // fasal pointerina temp degiskenini yazdir
      }
      else if(isEven(temp) == 0){
        fprintf(fcift, "%d\n",temp);
      }
      else if(temp>0 && isEven(temp) == 1 && isPrime(temp) == 1){
        fprintf(ftek, "%d\n",temp);
      }// sayi pozitifse, cift veya asal degilse, tektir.
      //printf("%d\n",temp);
      //DEBUG
    }
    fclose(ftek);
    fclose(fcift);
    fclose(fasal);
    fclose(fptr1);
  }
