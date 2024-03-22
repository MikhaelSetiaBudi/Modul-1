#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

// Fungsi yang digunakan untuk menggandakan elemen
int ganda(int x) {
    return x * 2;
}

int main() {
    // Array
    int array[] = {11, 15, 20, 25, 30, 35}; 

    // Vektor yang digunakan untuk menyimpan hasil transformasi
    vector<int> hasil;

    // menggunakan fungsi map dan transformasi
    transform(begin(array), end(array), back_inserter(hasil), ganda); 

    // Menampilkan hasil array dan hasil transformasi
    cout << "Array: ";
    for (int i : array) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Hasil transformasi: ";
    for (int i : hasil) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}


// Mikhael Setia Budi
// 2311110033
//copyright@MikhaelS.B  