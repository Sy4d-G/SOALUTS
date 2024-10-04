#include <iostream>
using namespace std;

int main() {
    int n;
    
    // Meminta input dari pengguna
    cout << "Masukkan Angka: ";
    cin >> n;
    
    // Loop untuk mencetak pola segitiga bintang
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}
