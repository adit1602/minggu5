#include "../base.h"

void BaseProject::proses(){
  int banyak_sks = 3;

  int harga_sks = 150000;

  int beli = (banyak_sks * harga_sks);
  total_beli = float(beli);

  if(beli>=150000){
    diskon = total_beli*0.25;
    total_bayar = total_beli-diskon;
  }
  else{
    diskon = 0;
    total_bayar = total_beli-diskon;
  }

}

int main(){
  BaseProject base;
  base.proses();
}