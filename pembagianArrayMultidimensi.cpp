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