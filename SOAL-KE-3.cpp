#include <iostream>

using namespace std;

// Fungsi untuk penjumlahan
int penjumlahan(int angka1, int angka2) {
  return angka1 + angka2;
}

// Fungsi untuk pengurangan
int pengurangan(int angka1, int angka2) {
  return angka1 - angka2;
}

// Fungsi untuk perkalian
int perkalian(int angka1, int angka2) {
  return angka1 * angka2;
}

// Fungsi untuk pembagian
float pembagian(int angka1, int angka2) {
  return (float)angka1 / angka2; // Konversi ke float untuk hasil desimal
}

int main() {
  int pilihan, angka1, angka2, hasil;

  cout << "Menu Operasi Matematika:" << endl;
  cout << "1. Penjumlahan" << endl;
  cout << "2. Pengurangan" << endl;
  cout << "3. Perkalian" << endl;
  cout << "4. Pembagian" << endl;
  cout << "Pilih operasi (1-4): ";
  cin >> pilihan;

  cout << "Masukkan angka pertama: ";
  cin >> angka1;
  cout << "Masukkan angka kedua: ";
  cin >> angka2;

  switch (pilihan) {
    case 1:
      hasil = penjumlahan(angka1, angka2);
      cout << "Hasil dari Penjumlahan untuk " << angka1 << " dan " << angka2 << " adalah " << hasil << endl;
      break;
    case 2:
      hasil = pengurangan(angka1, angka2);
      cout << "Hasil dari Pengurangan untuk " << angka1 << " dan " << angka2 << " adalah " << hasil << endl;
      break;
    case 3:
      hasil = perkalian(angka1, angka2);
      cout << "Hasil dari Perkalian untuk " << angka1 << " dan " << angka2 << " adalah " << hasil << endl;
      break;
    case 4:
      if (angka2 == 0) {
        cout << "Tidak bisa melakukan pembagian dengan nol." << endl;
      } else {
        hasil = pembagian(angka1, angka2);
        cout << "Hasil dari Pembagian untuk " << angka1 << " dan " << angka2 << " adalah " << hasil << endl;
      }
      break;
    default:
      cout << "Pilihan tidak valid." << endl;
  }

  return 0;
}
