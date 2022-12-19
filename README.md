# UAS-Dasar-Pemrograman
Ujian Akhir Semester Dasar Pemrograman
<br>Mata Kuliah : Dasar Pemrograman
<br>Nama		    : Moch Rifky Aulia Adikusumah
<br>NIM		      :	1227050072
<br>Jurusan		  :[Teknik Informatika](http://if.uinsgd.ac.id/) [UIN Sunan Gunung Djati Bandung](https://uinsgd.ac.id/) 

## Deskripsi Umum
Array multidimensi adalah sebuah tipe data untuk menyimpan dan mengakses sekumpulan data yang terorganisir dalam bentuk baris dan kolom. Setiap elemen dalam array multidimensi memiliki indeks yang terdiri dari dua atau lebih nilai.

Contoh sederhana dari array multidimensi adalah tabel sederhana dengan baris dan kolom. Setiap baris dan kolom memiliki indeks yang unik, yang dapat digunakan untuk mengakses elemen dalam array multidimensi. Array multidimensi dapat juga disebut sebagai matriks.

Array multidimensi dapat digunakan dalam berbagai situasi, seperti untuk menyimpan data dari database, membuat game, atau menyimpan informasi geografis. Dalam banyak bahasa pemrograman, array multidimensi dapat dibuat dengan menggunakan tipe data array atau tipe data matriks.

## Source Code
1. Program Matriks Transpose

#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int arr[100][100], jumlahBaris, jumlahKolom, i, j, baris, kolom, menu;

    cout<<"       PROGRAM MATRIKS TRANSPOSE\n"
        <<"========================================\n"
	    <<"Nama : Moch Rifky Aulia Adikusumah\n"
	    <<"NIM  : 1227050072\n"
	    <<"========================================\n";

    cout<<"Input jumlah baris: "; cin>>jumlahBaris;
    cout<<"Input jumlah kolom: "; cin>>jumlahKolom;
    cout << endl;

    for(i = 0; i < jumlahBaris; i++){
        for(j = 0; j < jumlahKolom; j++){
            cout << "Baris " <<i+1<<", kolom "<<j+1<< " = ";
            cin >> arr[i][j];
        }
        cout << endl;
    }
    cout << "Hasil Matriks: " << endl;

    for(i = 0; i < jumlahBaris ; i++){
        for(j = 0; j < jumlahKolom; j++){
            cout << setw(3) << arr[i][j] << " ";
        }
        cout << endl;
    }

    baris = jumlahBaris;
    kolom = jumlahKolom;

    jumlahKolom = baris;
    jumlahBaris = kolom;

    cout << "\nMatriks Transpose: " << endl;

    for(i = 0; i < jumlahBaris ; i++){
        for(j = 0; j < jumlahKolom; j++){
            cout << setw(3) << arr[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}

2. Program Array Multidimensi Yang Menampilkan Bilangan Yang Habis dibagi 3, 5 dan 7

#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int arr[100][100], jumlahBaris, jumlahKolom, i, j, baris, kolom;

    cout<<"       PROGRAM BILANGAN ARRAY MULTIDIMENSI YANG MENAMPILKAN\n"
        <<"            BILANGAN YANG HABIS DIBAGI 3,5 DAN 7\n"
        <<"=================================================================\n"
	    <<"Nama : Moch Rifky Aulia Adikusumah\n"
	    <<"NIM  : 1227050072\n"
	    <<"=================================================================\n";

    cout<<"Input jumlah baris: "; cin>>jumlahBaris;
    cout<<"Input jumlah kolom: "; cin>>jumlahKolom;
    cout << endl;

    for(i = 0; i < jumlahBaris; i++){
        for(j = 0; j < jumlahKolom; j++){
            cout << "Baris " <<i+1<<", kolom "<<j+1<< " = ";
            cin >> arr[i][j];
        }
        cout << endl;
    }

    cout << "Hasil: " << endl;

    for(i = 0; i < jumlahBaris ; i++){
        for(j = 0; j < jumlahKolom; j++){
            cout << setw(3) << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nBilangan yang habis dibagi 3: " << endl;
    for(i = 0; i < jumlahBaris ; i++){
        for(j = 0; j < jumlahKolom; j++){
            if(arr[i][j] % 3 == 0){
                cout << arr[i][j] << " ";
            }
        }
        cout << endl;
    }

    cout << "\nBilangan yang habis dibagi 5: " << endl;
    for(i = 0; i < jumlahBaris ; i++){
        for(j = 0; j < jumlahKolom; j++){
            if(arr[i][j] % 5 == 0){
                cout << arr[i][j] << " ";
            }
        }
        cout << endl;
    }

    cout << "\nBilangan yang habis dibagi 7: " << endl;
    for(i = 0; i < jumlahBaris ; i++){
        for(j = 0; j < jumlahKolom; j++){
            if(arr[i][j] % 7 == 0){
                cout << arr[i][j] << " ";
            }
        }
        cout << endl;
    }
    
    cout << endl;
    return 0;
}

## Output

1. Program Matrisk Transpose

       PROGRAM MATRIKS TRANSPOSE
========================================
Nama : Moch Rifky Aulia Adikusumah
NIM  : 1227050072
========================================
Input jumlah baris: 2
Input jumlah kolom: 3

Baris 1, kolom 1 = 12
Baris 1, kolom 2 = 32
Baris 1, kolom 3 = 53

Baris 2, kolom 1 = 321
Baris 2, kolom 2 = 34
Baris 2, kolom 3 = 21

Hasil Matriks: 
 12  32  53 
321  34  21 

Matriks Transpose: 
 12 321 
 32  34 
 53  21
 
 2. Program Array Multidimensi Yang Menampilkan Bilangan Yang Habis dibagi 3, 5 dan 7
 
        PROGRAM BILANGAN ARRAY MULTIDIMENSI YANG MENAMPILKAN
            BILANGAN YANG HABIS DIBAGI 3,5 DAN 7
=================================================================
Nama : Moch Rifky Aulia Adikusumah
NIM  : 1227050072
=================================================================
Input jumlah baris: 2
Input jumlah kolom: 3

Baris 1, kolom 1 = 12
Baris 1, kolom 2 = 4
Baris 1, kolom 3 = 23

Baris 2, kolom 1 = 5
Baris 2, kolom 2 = 432
Baris 2, kolom 3 = 21

Hasil: 
 12   4  23 
  5 432  21 

Bilangan yang habis dibagi 3: 
12 
432 21 

Bilangan yang habis dibagi 5: 

5 

Bilangan yang habis dibagi 7: 

21 
