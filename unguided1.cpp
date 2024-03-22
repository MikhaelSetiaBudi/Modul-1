#include <iostream>
using namespace std;

// Fungsi untuk menghitung luas Persegi Panjang
float hitungluaspersegipanjang(float P, float L) {
    float luaspersegipanjang = P * L;
    return luaspersegipanjang;
}

// Fungsi untuk menghitung luas Segitiga
float hitungluassegitiga(float a, float t) {
    float luassegitiga = 0.5 * a * t; 
    return luassegitiga;
}

// Fungsi untuk menghitung luas persegi
float hitungluaspersegi(float s) {
    float luaspersegi = s * s;
    return luaspersegi;
}

int main() {
    int pilihan;
    float P, L, a, t, s;

    cout << "Pilih Luas yang ingin dicari: " << endl;
    cout << "1. Persegi Panjang" << endl;
    cout << "2. Segitiga" << endl;
    cout << "3. Persegi" << endl;
    cout << "Masukkan angka untuk mencari luas bangun datar: ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            cout << "Masukkan Panjang Persegi Panjang: ";
            cin >> P;
            cout << "Masukkan Lebar Persegi Panjang: ";
            cin >> L;
            cout << "Luas Persegi Panjang adalah: " << hitungluaspersegipanjang(P, L) << endl;
            break;
        case 2:
            cout << "Masukkan Alas Segitiga: ";
            cin >> a;
            cout << "Masukkan Tinggi Segitiga: ";
            cin >> t;
            cout << "Luas Segitiga adalah: " << hitungluassegitiga(a, t) << endl;
            break;
        case 3:
            cout << "Masukkan sisi: ";
            cin >> s;
            cout << "Luas Persegi adalah: " << hitungluaspersegi(s) << endl;
            break;
        default:
            cout << "Angka yang dimasukkan tidak valid." << endl;
            break;
    }
    return 0;
}


// Mikhael Setia Budi
// 2311110033
//copyright@MikhaelS.B