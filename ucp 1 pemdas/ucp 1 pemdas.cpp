// ucp 1 pemdas.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct Kandidat
{
    string nama;
    int mtk;
    int bing;
    float r;
    string status;
};

void display() {
    Kandidat a[20];
    for (int i = 0; i < 3; i++) {
        cout << "Peserta Ke - " << i + 1 << endl;
        cout << "Masukan Nama Peserta : ";
        cin >> a[i].nama;
        cout << "Masukan Nilai Matematika : ";
        cin >> a[i].mtk;
        cout << "Masukan Nilai Bahasa Inggris : ";
        cin >> a[i].bing;
        a[i].r = (a[i].mtk + a[i].bing) / 2;

    }
    cout << "Nama Kandidat\t status\n :";
    for (int i = 0; i < 3; i++) {
        if (a[i].r > 70 || a[i].mtk > 80) {
            a[i].status = "\nLulus\t";
            cout << a[i].nama << a[i].status;
        }
        else {
            a[i].status = "\nTidak Lulus\t";
            cout << a[i].nama << a[i].status;
        }
    }
}

int main()
{
    char pilihan;
    do {
        display();
        cout << "\nApakah Anda Ingin Mengulangang ? (y/Y) = ";
        cin >> pilihan;
    } while (pilihan == 'y' || pilihan == 'Y');

}


// 1. tiga deklarasi variable dengan tipe data yang berbeda
// a. String nama; b. int c. float
// 
// 2. conditional statement
//
// 
// 3. struct
// struct Mahasiswa {
// string nim;
// string nama;
// int umur;
// };
// 
// 4. a. prosedur
// void input()
// b. fungsi
// int bilA, bilB;
// 
// 5. looping
//  for (i = 150; i > 100; i -= 10) {
// cout << i << ". " << "SELAMAT PUASA" << endl;
// }
// cout << "Nilai i terakhir: " << i << endl;
// 
// for (i = 0; i < 5; i++) {
// cout << "Nama ke-" << i << ": " << nama[i] << endl;
// }
//