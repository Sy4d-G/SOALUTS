#include <iostream>
#include <string>

using namespace std;

int main() {
    string nama;
    int npm;
    float nilaiAbsen, nilaiTugas, nilaiUTS, nilaiUAS, nilaiAkhir;
    char hurufMutu;

    // Input data mahasiswa
    cout << "Masukkan Nama Mahasiswa: ";
    getline(cin, nama); // Menggunakan getline untuk membaca nama lengkap dengan spasi
    cout << "Masukkan NPM Mahasiswa: ";
    cin >> npm;
    cout << "Masukkan Nilai Absen: ";
    cin >> nilaiAbsen;
    cout << "Masukkan Nilai Tugas: ";
    cin >> nilaiTugas;
    cout << "Masukkan Nilai UTS: ";
    cin >> nilaiUTS;
    cout << "Masukkan Nilai UAS: ";
    cin >> nilaiUAS;

    // Menghitung nilai akhir
    nilaiAkhir = (nilaiAbsen * 0.1) + (nilaiTugas * 0.2) + (nilaiUTS * 0.3) + (nilaiUAS * 0.4);

    // Menentukan huruf mutu
    if (nilaiAkhir >= 85 && nilaiAkhir <= 100) {
        hurufMutu = 'A';
    } else if (nilaiAkhir >= 80 && nilaiAkhir < 85) {
        hurufMutu = 'B';
    } else if (nilaiAkhir >= 75 && nilaiAkhir < 80) {
        hurufMutu = 'C';
    } else if (nilaiAkhir >= 70 && nilaiAkhir < 75) {
        hurufMutu = 'D';
    } else {
        hurufMutu = 'E';
    }

    // Menampilkan output
    cout << "\n===== Hasil Perhitungan Nilai Akhir =====" << endl;
    cout << "Nama Mahasiswa: " << nama << endl;
    cout << "NPM Mahasiswa: " << npm << endl;
    cout << "Nilai Absen: " << nilaiAbsen << endl;
    cout << "Nilai Tugas: " << nilaiTugas << endl;
    cout << "Nilai UTS: " << nilaiUTS << endl;
    cout << "Nilai UAS: " << nilaiUAS << endl;
    cout << "Nilai Akhir: " << nilaiAkhir << endl;
    cout << "Huruf Mutu: " << hurufMutu << endl;

    return 0;
}