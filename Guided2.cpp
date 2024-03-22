#include <stdio.h>

//Struct
struct Mahasiswa
{
    const char *name;
    const char *address;
    int age;
};

int main()
{
    // Menggunakan Struct
    struct Mahasiswa mhs1, mhs2;
    // Mengisi nilai struct
    mhs1.name = "Budi";
    mhs1.address = "Purwokerto";
    mhs1.age = 20;

    mhs2.name = "Amerudin";
    mhs2.address = "Jambi";
    mhs2.age = 19;

    // Mencetak isi struct
    printf("## Mahasiswa 1 ##\n");
    printf("Nama: %s\n", mhs1.name);
    printf("Alamat: s%\n", mhs1.address);
    printf("Umur: %d\n", mhs1.age);
    printf("## Mahasiswa 2 ##\n");
    printf("Nama: %s\n", mhs2.name);
    printf("Alamat: s%\n", mhs2.address);
    printf("Umur: %d\n", mhs2.age);
    return 0;
}     
    
    
