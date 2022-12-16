#include <iostream>
#include <string>
#include <queue>

using namespace std;

struct Pasien {
  string nama;
  int umur;
};

int main() {
  queue<Pasien> antrianDokter;

  // Menambahkan pasien ke antrian
  Pasien pasien1;
  pasien1.nama = "Warren";
  pasien1.umur = 30;
  antrianDokter.push(pasien1);

  Pasien pasien2;
  pasien2.nama = "Brian";
  pasien2.umur = 25;
  antrianDokter.push(pasien2);

  // Menampilkan pasien pertama dari antrian
  Pasien pasienSekarang = antrianDokter.front();
  cout << "Pasien sekarang: " << pasienSekarang.nama << ", " << pasienSekarang.umur << " tahun" << endl;

  // Menghapus pasien pertama dari antrian
  antrianDokter.pop();

  // Menampilkan pasien sekarang setelah menghapus pasien pertama
  pasienSekarang = antrianDokter.front();
  cout << "Pasien sekarang: " << pasienSekarang.nama << ", " << pasienSekarang.umur << " tahun" << endl;

  return 0;
}
