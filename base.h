#include <iostream>
using namespace std;

class BaseProject {
public:
  void proses();
  void input();
  void output();

  void hitung(int n);

private:
  int banyak_sks;
  int harga_sks;
   int masuk;
  float diskon, total_beli, total_bayar, biaya_sks;
  string nama, nim; 
};

void BaseProject::input() {
  cout << endl;
  cout<<"=========================="<<endl;
  cout << "\t DAFTAR MATA KULIAH" << endl;
  cout << "-----------------------" << endl;
  cout << "1. ALPRO[3 SKS]" << endl;
  cout << "2. MATDIS[3 SKS]" << endl;
  cout << "3. PWEB [3 SKS]" << endl;
  cout << "4. AKHLAK [2 SKS]" << endl;
  cout << "5. ARSIKOM [3 SKS]" << endl;
  cout << "6. ALJABAR [3 SKS]" << endl;
  cout << "7. PKN [3 SKS]" << endl;
  cout << "8. B.Indo  [2 SKS]" << endl;
  cout<<"Masukan Mata Kuliah Yang Anda Pilih :"<<endl;
  cin>>masuk;
  cout << "\nInput Data Diri Mahasiswa"<< endl;
  cout << " Masukkan Nama Mahasiswa : ";
  cin >> nama;
  cout << " Masukkan Nim Mahasiswa  : ";
  cin >> nim;
  cout << " Biaya per SKS           : ";
  cin>>biaya_sks;
}

void BaseProject::proses() {
  // int banyak_sks = 3;

  int harga_sks = 150000;

  int beli = (banyak_sks * harga_sks);
  total_beli = float(beli);

  if (beli >= 150000) {
    diskon = total_beli * 0.25;
    total_bayar = total_beli - diskon;
  } else {
    diskon = 0;
    total_bayar = total_beli - diskon;
  }
}

void BaseProject::output() {
  //float diskon = ;
  //float total = ;
  //float biaya_total = ;

  cout << endl;
  cout << "======================================" << endl;
  cout << " Aplikasi Pemilihan Mata Kuliah dan SKS" << endl;
  cout<<"----------------------------------------"<<endl;
  cout << " Nama Mahsiswa                 : "<<nama<<endl;
  cout << " NIM Mahasiswa                 : "<<nim<<endl;
  cout << " Mata Kuliah Yang Anda Pilih   : " <<masuk<< endl;
  cout << "---------------------------------------"<<endl;
  cout << " Total       Rp: " << total_beli << endl;
  cout << " Diskon      Rp: " << diskon << endl;
  cout << " Biaya Total Rp: " << total_bayar << endl;
  cout << "======================================"<< endl;
}
