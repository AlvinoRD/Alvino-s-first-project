#include <iostream>
#include <stdio.h>
/*
Nama Alvino Radyo Danisworo
NIM A11.2022.14600
kelompok 4116
Teknik Informatika
*/

using namespace std;

int main()
{
    /* INI YANG AWAL AWAL HEHE */
    int a = 18;
    int b = 21;
    int c = 17;
    float t = 178.2;
    float s = 42.5;
    char u = 'L';
    char d = 'L';
    cout << "Umur Saya: " << a;
    cout << endl;
    cout << "Umur Kakak Saya: " << b;
    cout << endl;
    cout << "Umur Adik Saya: " << c;
    cout << endl;
    cout << "Tinggi Badan Saya: " << t;
    cout << endl;
    cout << "Ukuran Sepatu Saya: " << s;
    cout << "Ukuran Baju Saya: " << u;
    cout << endl;
    cout << "Ukuran Celana Saya: " << d;
    cout << endl;
    cout << "SEKIAN TERIMA KASIH" << endl;

    /* INI YANG KEREN */
    int e;
    cout << "masukkan angka anda: ";
    cin >> e;
    cout << "angka anda + c: " << e + c;

    /* INI NYOBA DOANG */
    int pil, batas;
    cout<<"masukkan pilihan"<<endl;
    cout<<"1. bilangan ganjil"<<endl;
    cout<<"2. bilangan genap"<<endl;
    cin>>pil;
    cout<<"masukkan batas : ";
    cin>>batas;
    cout<<endl;

    if {pil==1} {
        cout<<"deret bilangan ganjil"<<endl

        for{int i=1,i<=batas,i++} {
            if{i%2!=0} {
                cout<<i<<" ";
            }
        }
    }else if{pil==2 {
    cout<<"deret bilangan genap"<<endl;
    for {int i=1;i<=batas,i++}{
        if{i%2==0} {
           cout<<i<<"";
        }
    }else {
    cout<<"salah memasukkan pilihan"<<endl;F
    }
    }
    return 0;
}
