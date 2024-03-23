#include <iostream>
#include <map>

using namespace std;

int main() {
    string kata;
    cout << "Silahkan Masukkan kalimat: ";
    getline(cin, kata); // Membaca seluruh baris kalimat dari input

    map<char, int> frekuensi;

    // Menghitung frekuensi kemunculan setiap karakter dalam kalimat
    for (char huruf : kata) {
        if (isalpha(huruf)) { 
            huruf = tolower(huruf); 
            frekuensi[huruf]++;
        }
    }

    // Menampilkan frekuensi kemunculan setiap karakter
    cout << "Frekuensi kemunculan setiap huruf dalam kalimat: "<< endl;
    for (auto& pasangan : frekuensi) {
        cout << "'" << pasangan.first << "': " << pasangan.second << endl;
    }

    return 0;
}


// Mikhael Setia Budi
// 2311110033
//copyright@MikhaelS.B