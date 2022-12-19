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