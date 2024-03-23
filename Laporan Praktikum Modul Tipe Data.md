# <h1 align="center">Laporan Praktikum Modul Tipe Data</h1>
<p align="center">Mikhael Setia Budi</p>

## Dasar Teori

Tipe data merupakan pengklasifikasian data berdasarkan jenis data. Adapun tipe data yang akan dipelajari:
1. Tipe data Primitif
2. Tipe data Abstrak
3. Tipe data Koleksi

### Tipe Data Primitif
Tipe data primitif adalah tipe data yang sudah ditentukan oleh sistem.  contoh tipe data primitif:

a. Int : digunakan untuk menyimpan bilangan bulat seperti 1, 2, 3, dan seterusnya

b. Float : digunakan untuk menyimpan bilangan desimal seperti 1.5, 2.5, 3.5, 4.5 dan sebagainya

c. Char : digunakan untuk menyimpan data dalam bentuk huruf. Biasanya digunakan simbol seperti A, B, C, dan seterusnya.

d. Boolean : digunakan untuk menyimpan nilai boolean yang hanya memiliki dua nilai yaitu true dan false

### Tipe Data Abstrak
Tipe data abstrak merupakan tipe data yang dibentuk oleh programer sendiri. Pada tipe data ini terisi banyak tipe data, jadi untuk nilainya bisa lebih dari satu dan beragam tipe data. 
Fitur Class merupakan fitur Object Oriented Program(OPP). Dalam bahasa C++, fitur class mirip dengan fitur struct. perbedaan fungsi Struct dan fungsi Class adalah pada akses defaultnya dimana Struct bersifat public dan Class bersifat private.

### Tipe Data Koleksi
Tipe data koleksi merupakan tipe data yang digunakan untuk mengelompokkan serta menyimpan beberapa nilai atau objek secara bersamaan. Tipe data ini Memungkinkan kita menyimpan, mengelola, dan mengakses sejumlah besar data dengan cara terstruktur.
beberapa tipe data koleksi yang umum digunakan:
1. Array adalah struktur data statis yang dapat menyimpan elemen dengan tipe data yang sama. Elemen ini dapat diakses dengan menggunakan index. Array memiliki ukuran yang tetap sesuai dengan yang ditentukan saat deklarasi.
2. Vector merupakan Standard Template Library (STL) dalam C++ mempunyai bentuk std::vector. vector mirip seperti array yang memiliki kemampuan untuk menyimpan data dalam bentuk elemen. Vector juga dilengkapi fitur-fitur pelengkap seperti elemen access, iterators, capacity, dan modifiers.
3. Map terasa mirip dengan array tetapi dengan index yang memungkinkan untuk tipe data selain integer. Pada map, index diberi nama "key". std::map digunakan Self-Balancing Tree terkhusus Res-Black Tree.

## Guided 

### 1. Tipe Data Primitif

![alt text](https://github.com/MikhaelSetiaBudi/Modul-1/blob/main/code%20guided%201%20tipe%20data.png?raw=true)

1. #include <iostream> merupakan file header yang digunakan untuk memungkinkan program dapat menggunakan fungsi-fungsi input- output dengan standar C++
2. using namespace std; digunakan dengan tujuan memberi tahu program untuk menggunakan namespace 'std', dimana namespace standar untuk fungsi dan objek standar dalam C++
3. int main() adalah fungsi utama dari program diatas. int main() merupakan fondasi pada setiap program C++ karena dapat mengatur bagaimana program berjalan dan dapat mengkontrol aliran eksekusi program. fungsi main() adalah titik awal dari berjalannya program, jadi ketika semua program ditempatkan dalam fungsi main maka ketika program dijalankan, semua fungsi dalam main akan dieksekusi. selain itu dengan menggunakan fungsi main maka dapat memanggil fungsi lainnya.
4. char op; digunakan untuk menyimpan sistem operator matematikan yang nantinya akan digunakan dalam program. variabel op digunakan untuk menyimpan operator matermatika yang nantinya akan dimasukan oleh pengguna
5. float num1, num2; digunakan untuk menyimpan bilangan pertama dan kedua yang akan dioperasikan. tipe data float digunakan dalam program di atas agar variabel num1 dan num2 dapat menyimpan bilangan desimal.
6. cout<<"Masukkan Operator: " digunakan untuk mencetak pesan. jadi cout digunakan untuk mencetak keluaran, jadi ketika program dijalankan maka akan keluar pesan Masukan Operator:. <<"Masukan Operator: " ini digunkan untuk menggambungkan pesan teks dengan cout.
7. cin>>op; digunakan untuk meminta pengguna memasukan operator matematika yang akan diperasikan. kemudian disimpan dalam variabel op untuk eksekusi program selanjutnya.
8. cout<<"\nMasukkan Bilangan ke-1: ";, cout<<"\nMasukkan Bilangan ke-2 sama seperti pada nomor 6 bahwa ini digunakan untuk mencetak pesan ketika program dijalankan. \n ini digunakan agar kalimat Masukan Bilangan ke-1 berada di bawah kalimat Masukkan Operator atau pindah ke barisan bawahnya. sehingga ketika di print teksnya tidak tercampur dengan teks atasnya.
9. cin>>num1; dan cin>>num2; digunakan untuk meminta user memasukan angka pertama dan kedua yang akan di operasikan dengan oeprasi matematika. kemduai angka tersebut akan disimpan dalam variabel num1 dan num2.
10. switch (op) digunakan untuk membuat keputusan berdasarkan dengan nilai variabel op untuk memilih jalur eksekusi yang sesuai. jadi ketika pengguna memasukan operasi matematika + maka switch akan menentukan case atau blok kode mana yang sesuai untuk operasi matematika tersebut, jika sudah ditemuka maka blok kode tersebut yang akan dijalankan.
11. case digunakan dalam menentukan tindakan mana yang sesuai dengan operator matematika yang telah dimasukan oleh pengguna, dimana dalam kode di atas terdapat tindakan penjumlahan, pengurangan, perkalian, dan pembagian. jadi ketika pengguna memasukan operasi matematika + maka akan tersimpan dalam variabel op, lalu akan ditentukan oleh switch (op) tindakan mana yang sama dengan operasi matematika + yang telah diinputkan oleh pengguna. setelah ketemu mana tindakan yang sama dengan operasi matematika yang dimasukkan oleh pengguna yaitu case '+':, maka case itulah yang akan dijalankan.
12. cout<< num1 + num2;, cout<< num1 - num 2;, cout<< num1 * num2;, cout<< num1 / num2; digunakan untuk menampilkan hasil operasi matematika yang sesuai dengan operator yang dimasukkan oleh pengguna
13. break digunakan untuk menjeda setiap programnya, jadi setiap case terdapat break di akhir dengan tujuan hanya blok yang sesuai dengan case saja yang dieksekusi.
14. default:
    cout<< "Error! Operator tidak benar"; merupakan bagian default dari switch-case yang menangani jika operator yang dimasukkan oleh pengguna tidak sesuai. ketika operator yang di masukkan tidak sesuai maka akan muncul pesan Eror! Operator tidak benar
15. return 0 mengindikasikan program telah berakhir.

### 2. Tipe Data Abstrak

![alt text](https://github.com/MikhaelSetiaBudi/Modul-1/blob/main/code%20guided%202%20tipe%20data.png?raw=true)

1. #include <stdio.h> adalah direktif yang menyertakan file header studio.h yang digunakan untuk menggunakan fungsi input-output standar dalam C++.
2. Struct Mahasiswa adalah mendefinisikan sebuat struct bernama Mahasiswa yang memiliki 3 anggota yaitu name dengan tipe data char atau charakter yaitu berupa huruf, address dengan menggunakan tipe data char juga, dan age yang menggunakan tipe data integer berupa bilangan bulat.
3. int main() adalah fungsi utama dari program diatas. int main() merupakan fondasi pada setiap program C++ karena dapat mengatur bagaimana program berjalan dan dapat mengkontrol aliran eksekusi program. fungsi main() adalah titik awal dari berjalannya program, jadi ketika semua program ditempatkan dalam fungsi main maka ketika program dijalankan, semua fungsi dalam main akan dieksekusi. selain itu dengan menggunakan fungsi main maka dapat memanggil fungsi lainnya.
4. struct Mahasiswa mhs1, mhs2; adalah membuat objek mhs1 dan mhs2 dari tipe struct Mahasiswa. lalu isi nilai pada setiap anggota struct Mahasiswa seperti pada mhs1 terdapat nilai mhs1.name, mhs1.address, mhs1.age dengan menggunakan titik  untuk setiap anggota struct.
5. printf digunakan untuk mencetak nilai dari setiap objek mhs1 dan mhs2.
6. return 0 mengindikasikan program telah berakhir.

### 3. Tipe Data Koleksi

![alt text](https://github.com/MikhaelSetiaBudi/Modul-1/blob/main/code%20guided%203%20tipe%20data.png?raw=true)

1. #include <iostream> merupakan file header yang digunakan untuk memungkinkan program dapat menggunakan fungsi-fungsi input- output dengan standar C++
2. using namespace std; digunakan dengan tujuan memberi tahu program untuk menggunakan namespace 'std', dimana namespace standar untuk fungsi dan objek standar dalam C++
3. int main() adalah fungsi utama dari program diatas. int main() merupakan fondasi pada setiap program C++ karena dapat mengatur bagaimana program berjalan dan dapat mengkontrol aliran eksekusi program. fungsi main() adalah titik awal dari berjalannya program, jadi ketika semua program ditempatkan dalam fungsi main maka ketika program dijalankan, semua fungsi dalam main akan dieksekusi. selain itu dengan menggunakan fungsi main maka dapat memanggil fungsi lainnya.
4. int nilai[5]: adalah mendeklarasikan array dengan nama nilai terdiri dari 5 element dengan tipe integer.
5. nilai[0] = 23;, nilai[1] =50 dan lainnya adalah mengisi setiap array pada indeks 0, 1, 2, 3, 4 dengan nilai tertentu. seperti pada nilai indeks ke 0 diberi angka 23, indeks 1 diberi angka 50 dan seterusnya.
6. cout<<"Isi array pertama :" << nilai[0] << endl; dan lainnya digunakan untuk mencetak isi setiap elemen pada array menggunakan cout dan operator <<. endl digunakan untuk menambahkan newline sama seperti \n agar kalimat yang akan muncul berikutnya berada di baris berikutnya.
7. return 0 mengindikasikan program telah berakhir.

## Unguided 

### 1. Buatlah program menggunakan tipe data primitif minimal dua fungsi dan bebas. Menampilkan program, jelaskan program tersebut dan ambil kesimpulan dari materi tipe data primitif!

![alt text](https://github.com/MikhaelSetiaBudi/Modul-1/blob/main/code%20unguided%201%20tipe%20data.png?raw=true)

1. #include <iostream> merupakan file header yang digunakan untuk memungkinkan program dapat menggunakan fungsi-fungsi input- output dengan standar C++
2. using namespace std; digunakan dengan tujuan memberi tahu program untuk menggunakan namespace 'std', dimana namespace standar untuk fungsi dan objek standar dalam C++
3. hitungluaspersegipanjang(float P, float L) merupakan deklarasi fungsi untuk menghitung luas persegi panjang dengan parameter P dan L. parameter ini menggunakan tipe data float agar pengguna dapat memasukkan bilangan desimal. lalu variabel luaspersegi untuk menyimpan program luas persegi panjang yaitu P * L. menggunakan return agar nilai luas persegi panjang yang telah dihitung dapat dikembalikan dan digunakan di bagian program lainnya.
4. hitungluassegitiga(float a, float t) merupakan deklarasi fungsi untuk menghitung luas segitiga dengan parameter a dan t. parameter ini menggunakan tipe data float agar pengguna dapat memasukkan bilangan desimal. lalu variabel luassegitiga untuk menyimpan program luas segitiga yaitu 1/2 atau 0,5 * a * t. menggunakan return agar nilai luas segitiga yang telah dihitung dapat dikembalikan dan digunakan di bagian program lainnya.
5. hitungluaspersegi(float s) merupakan deklarasi fungsi untuk menghitung luas persegi dengan parameter s. parameter ini menggunakan tipe data float agar pengguna dapat memasukan bilangan desimal. lalu variabel luaspersegi untuk menyimpan program luas persegi yaitu s kuadrat atau s*s. menggunakan return agar nilai luas persegi yang telah dihitung dapat dikembalikan dan digunakan di bagian program lainnya.
6. int main() sebagai program utama
7. int pilihan mendeklarasikan variabel pilihan dengan tipe data integer.
8. float P, L, a, t, s adalah mendeklarasikan P, L, a, t, dan s dengan tipe data float.
9. cout << "pilih luas yang ingin dicari" << endl; dan yang lainnya digunakan untuk menampilkan teks dan endl adalah newline
10. cin >> pilihan digunakan untuk meminta input dari pengguna dan menyimpannya dalam variabel pilihan
11. switch (pilihan) digunakan untuk membuat keputusan berdasarkan dengan nilai variabel pilihan untuk memilih jalur eksekusi yang sesuai. jadi ketika pengguna memasukan angka 1 maka switch akan menentukan case atau blok kode mana yang sesuai dengan angka tersebut, jika sudah ditemuka maka blok kode tersebut yang akan dijalankan.
12. case 1:, case 2:, case 3: digunakan untuk membuat tindakan mana yang sesaui dengan angka yang dimasukan oleh pengguna. dalam kode diatas terdapat kondisi 1, 2, dan 3. dimana kondisi 1 adalah luas persegi panjang, kondisi 2 adalah luas segitiga, dan kondisi 3 adalah luas persegi. jadi ketika pengguna memasukkan angka 1 maka program akan menjalankan case 1.
13. cout digunakan untuk menampilkan teks. cin >> P adalah meminta pengguna untuk menginput nilai panjang dan menyimpannya dalam variabel P dan cin >> L adalah meminta pengguna untuk memasukan nilai lebar dan menyimpannya dalam variabel L.  cout << "Luas Persegi Panjang adalah: " << hitungluaspersegipanjang(P, L) << endl; digunakan untuk mencetak hasil perhitungan luas persegi panjang, hitung luaspersegipanjang(P, L) adalah pemanggilan fungsi hitungluaspersegipanjang yang telah dideklarasikan sebelumnya dengan parameter P dan L, dan mengembalikan nilai luas persegi panjang berdasarkan panjang dan lebar yang telah dimasukkan oleh pengguna. break digunakan untuk menjeda setiap programnya, jadi setiap case terdapat break di akhir dengan tujuan hanya blok yang sesuai dengan case saja yang dieksekusi.
14. cout digunakan untuk menampilkan teks. cin >> a adalah meminta pengguna untuk menginput nilai alas dan menyimpannya dalam variabel a dan cin >> t adalah meminta pengguna untuk memasukan nilai tinggi dan menyimpannya dalam variabel t.  cout << "Luas Segitiga adalah: " << hitungluassegitiga(a, t) << endl; digunakan untuk mencetak hasil perhitungan luas segitiga, hitungluassegitiga(a, t) adalah pemanggilan fungsi hitungluassegitiga yang telah dideklarasikan sebelumnya dengan parameter a dan t, dan mengembalikan nilai luas segitiga berdasarkan alas dan tinggi yang telah dimasukkan oleh pengguna. break digunakan untuk menjeda setiap programnya, jadi setiap case terdapat break di akhir dengan tujuan hanya blok yang sesuai dengan case saja yang dieksekusi.
15. cout digunakan untuk menampilkan teks. cin >> s adalah meminta pengguna untuk menginput nilai sisi persegi dan menyimpannya dalam variabel s.  cout << "Luas Persegi adalah: " << hitungluaspersegi(s) << endl; digunakan untuk mencetak hasil perhitungan luas persegi, hitungluaspersegi(s) adalah pemanggilan fungsi hitungluaspersegi yang telah dideklarasikan sebelumnya dengan parameter s, dan mengembalikan nilai luas persegi berdasarkan sisi yang telah dimasukkan oleh pengguna. break digunakan untuk menjeda setiap programnya, jadi setiap case terdapat break di akhir dengan tujuan hanya blok yang sesuai dengan case saja yang dieksekusi.
16. default
    cout << "Angka yang dimasukkan tidak valid." << endl;
merupakan bagian default dari switch-case yang menangani jika operator yang dimasukkan oleh pengguna tidak sesuai. ketika operator yang di masukkan tidak sesuai maka akan muncul pesan Angka yang dimasukkan tidak valid.
17. return 0 mengindikasikan program telah berakhir.

#### Output:

![alt text](https://github.com/MikhaelSetiaBudi/Modul-1/blob/main/output%20unguided%201%20tipe%20data.png?raw=true)

pertama pengguna akan memilih luas bangun datar mana yang akan dicari dengan mengetikkan angka. lalu pengguna harus memasukan P dan L jika mencari luas persegi panjang, a dan t jika mencari luas segitiga, dan s jika mencari luas persegi. setelah itu akan muncul hasil operasi dari luas setiap bangun ruang.

#### Kesimpulan
tipe data primitif adalah tipe data yang telah ditentukan oleh sistem. tipe data primitif ini telah disediakan oleh bahasa pemrograman lainnya. tipe data primitif ini meliputi integer (menyimpan bilangan bulat), float (menyimpan bilangan desimal), char (menyimpan huruf), dan boolean (menyimpan dua nilai yaitu true dan false).

### 2. Jelaskan fungsi dari class dan struct secara detail dan berikan contoh programnya

fungsi class adalah untuk mendefinisikan struktur dan prilaku suatu objek. berisikan data dan metode yang dimiliki oleh setiap onjek berdasarkan class tersebut. class dapat mendefinisikan karakteristik data yang dimiliki suatu objek. class juga dapat mendefinisikan fungsi yang digunakan untuk melakukan tindakan tertentu. class juga dapat membuat objek.
fungsi struct adalah mengelompokkan beberapa jenis data yang berbeda menjadi satu. struct juga dapat menyederhanakan kode dengan mengelompokkan data. struct sering digunakan dalam fungsi dan algoritma yang membutuhkan data terstruktur.

![alt text](https://github.com/MikhaelSetiaBudi/Modul-1/blob/main/Modul%201%20Alstrukdat/code%20unguided%202%20tipe%20data.png?raw=true)

1. #include <iostream> merupakan file header yang digunakan untuk memungkinkan program dapat menggunakan fungsi-fungsi input- output dengan standar C++
2. using namespace std; digunakan dengan tujuan memberi tahu program untuk menggunakan namespace 'std', dimana namespace standar untuk fungsi dan objek standar dalam C++
3. class lansia digunakan mendeklarasikan informasi tentang lansia. dimana di dalam class lansia terdapat beberapa data yaitu nama dengan tipe data string untuk pengguna dapat memasukan nama, umur dengan tipe data integer, tb (tinggi badan) dengan tipe data float agar pengguna dapat memasukan bilangan desimal juga, dan bb (berat badan) dengan menggunakan tipe data float agar pengguna dapat memasukan bilangan desimal. public digunakan agar dapat diakses dari luar class.
4. void display() merupakan fungsi yang digunakan untuk menampilkan informasi lansia. cout<<"Nama: "<<nama<<endl; dan yang lainnya digunakan untuk menampilkan nama, umur, tinggi badan, berat badan pengguna yang telah dimasukan oleh pengguna dengan memanggil data nama, umur, tb, bb. lalu endl adalah newline atau bari baru.
5. struct BBM digunakan untuk mendeklarasikan informasi mengenai bahan bakar minyak. dimana di dalam class BBM terdapat beberapa data yaitu nama dengan tipe data string yang digunakan untuk menyimpan rangkaian karakter, liter dengan menggunakan tipe data float agar dapat menyimpan bilangan desimal, dan harga dengan tipe data float agar dapat menyimpan bilangan desimal.
6. int main() adalah fungsi utama dari program diatas. int main() merupakan fondasi pada setiap program C++ karena dapat mengatur bagaimana program berjalan dan dapat mengkontrol aliran eksekusi program. fungsi main() adalah titik awal dari berjalannya program, jadi ketika semua program ditempatkan dalam fungsi main maka ketika program dijalankan, semua fungsi dalam main akan dieksekusi. selain itu dengan menggunakan fungsi main maka dapat memanggil fungsi lainnya.
7. membuat variabel lansia dan BBM dari class lansia dan struct BBM. dimana dalam variabel lansia terdapat data tentang nama, umur, tb, bb yang telah dideklarasikan, dalam kode terdapat lansia1, lansia2, dan lansia3 dengan data yang sama yaitu nama, umur, tb, bb. lalu membuat objek bbm1 dan bbm2 dalam struct BBM yang berisikan data Nama, liter, dan harga yang telah dideklarasikan.
8. menggunakan metode display() unruk menampilkan data lasia1, lansia2, dan lansia3. dengan memasukkan objek sebelum display, lansia.display().
9. cout<<"Nama: "<<bbm1.Nama<<endl;
    cout<<"Liter: "<<bbm1.liter<<" L"<<endl;
    cout<<"Harga: "<<bbm1.harga<<" Rupiah"<<endl;

    cout<<"Nama: "<<bbm2.Nama<<endl;
    cout<<"Liter: "<<bbm2.liter<<" L"<<endl;
    cout<<"Harga: "<<bbm2.harga<<" Rupiah"<<endl;
digunakan untuk menampilakan data dari setiap objek yang telah dibuat dalam struct dengan memanggil data yang telah dibuat. menambahkan teks L dan Rupiah agar ketika ditampilkan maka setelah angka akan muncul satuannya.
10. return 0 mengindikasikan program telah berakhir.

#### output

![alt text](https://github.com/MikhaelSetiaBudi/Modul-1/blob/main/Output%20Modul%201%20Alstrukdat/output%20unguided%202%20tipe%20data.png?raw=true)

### 3. Buat dan jelaskan program menggunakan fungsi map dan jelaskan perbedaan dari array dengan map.

![alt text](https://github.com/MikhaelSetiaBudi/Modul-1/blob/main/Modul%201%20Alstrukdat/code%20unguided%203%20tipe%20data.png?raw=true)

1. #include <iostream> merupakan file header yang digunakan untuk memungkinkan program dapat menggunakan fungsi-fungsi input- output dengan standar C++
2. #include <map> digunakan untuk menyertakan file header map yang memberikan akses ke class map.
3. using namespace std; digunakan dengan tujuan memberi tahu program untuk menggunakan namespace 'std', dimana namespace standar untuk fungsi dan objek standar dalam C++

#### output

![alt text](https://github.com/MikhaelSetiaBudi/Modul-1/blob/main/Output%20Modul%201%20Alstrukdat/output%20unguided%203%20tipe%20data.png?raw=true)

## Kesimpulan
Ringkasan dan interpretasi pandangan kalia dari hasil praktikum dan pembelajaran yang didapat[1].

## Referensi
[1] I. Holm, Narrator, and J. Fullerton-Smith, Producer, How to Build a Human [DVD]. London: BBC; 2002.
