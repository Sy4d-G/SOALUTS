#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel
    float beratBadan, tinggiBadanCM, tinggiBadanM, IMT;

    // Input berat badan dan tinggi badan dari pengguna
    cout << "Masukkan berat badan (kg): ";
    cin >> beratBadan;
    cout << "Masukkan tinggi badan (cm): ";
    cin >> tinggiBadanCM;

    // Konversi tinggi badan dari cm ke meter
    tinggiBadanM = tinggiBadanCM / 100;

    // Menghitung IMT
    IMT = beratBadan / (tinggiBadanM * tinggiBadanM);

    // Menentukan kategori berdasarkan nilai IMT
    cout << "Nilai IMT Anda: " << IMT << endl;
    if (IMT < 18.5) {
        cout << "Kategori: Berat Badan Kurang" << endl;
    } else if (IMT >= 18.5 && IMT <= 24.9) {
        cout << "Kategori: Berat Badan Ideal" << endl;
    } else if (IMT >= 25 && IMT <= 29.9) {
        cout << "Kategori: Berat Badan Lebih" << endl;
    } else if (IMT >= 30 && IMT <= 39.9) {
        cout << "Kategori: Gemuk" << endl;
    } else {
        cout << "Kategori: Sangat Gemuk" << endl;
    }

    return 0;
}
