#include "../base.h"

void BaseProject::input(){
  cout<<endl;
  cout<<"\t DAFTAR MATA KULIAH"<<endl;
  cout<<"==========================="<<endl;
  cout<<"1. ALPRO[3 SKS]"<<endl;
  cout<<"2. MATDIS[3 SKS]"<<endl;
  cout<<"3. PWEB [3 SKS]"<<endl;
  cout<<"4. AKHLAK [2 SKS]"<<endl;
  cout<<"5. ARSIKOM [3 SKS]"<<endl;
  cout<<"6. ALJABAR [3 SKS]"<<endl;
  cout<<"7. PKN [3 SKS]"<<endl;
  cout<<"8. B.Indo  [2 SKS]"<<endl;
  cout<<"Pilih Mata Kuliah Yang Anda Ambil : ";
  cout<<"\nInput Data Diri Mahasiswa"<<endl;
  cout<<" Masukkan Nama Mahasiswa : ";cin>>nama;
  cout<<" Masukkan Nim Mahasiswa  : ";cin>>nim;
  cout<<" Biaya per SKS           : ";cin>>biaya_sks;
}
 void BaseProject::output(){
   float diskon = ;
   float total = ;
   float  biaya_total = ;
 
    cout<<endl;
    cout<<"======================================"<<endl;
    cout<<" Aplikasi Pemilihan Matak Kuliah dan SKS"<<endl;
    cout<<"Nama Mahsiswa  : "<<nama<<endl;
    cout<<"NIM Mahasiswa  : "<<nim<<endl;
    cout<<"Pilih Matkul Yang Ingin Anda Ambil"<<endl;
    cout<<" Mata Kuliah Yang Anda Pilih   :"<< <<endl;
    cout<<"---------------------------------------"
    cout<<" Total       Rp: "<< total_beli<<endl;
    cout<<" Diskon      Rp: "<<diskon<<endl;
    cout<<" Biaya Total Rp: "<<total_bayar <<endl;
    cout<<"======================================"endl;
}
  int main(){
    BaseProject base;
    base.input();
    base.output()
      return 0;
  }


    
      