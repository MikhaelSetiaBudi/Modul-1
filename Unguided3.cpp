#include <iostream>
#include <map>

using namespace std;

int main() {
    string kata;
    cout << "Masukkan sebuah kalimat: ";
    getline(cin, kata); // Membaca seluruh baris kalimat dari input

    map<char, int> frekuensi;

    // Menghitung frekuensi kemunculan setiap karakter dalam kalimat
    for (char karakter : kata) {
        if (isalpha(karakter)) { 
            karakter = tolower(karakter); 
            frekuensi[karakter]++;
        }
    }

    // Menampilkan frekuensi kemunculan setiap karakter
    cout << "Frekuensi kemunculan setiap karakter dalam kalimat: "<< endl;
    for (auto& pasangan : frekuensi) {
        cout << "'" << pasangan.first << "': " << pasangan.second << endl;
    }

    return 0;
}
