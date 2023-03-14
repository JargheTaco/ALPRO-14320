# ALPRO-14320
#include<iostream>
using namespace std;

//judul:tugas alpro KALISAL AGUSFAJAR G. NIM: A11.2022.14320 KELOMPOK: 4211


//kamus
float a,b;
float hasil;
int pilihan;

int tambah(int a,int b){
    int q = a + b;
    return q;
}

int kurang(int a,int b){
    int q = a - b;
    return q;
}

int totalarr(int v) {
    int q = 0 ;
    int p;
    int array[p];
    for (int i = 1; i <= v; i++)
    {
        cout << "masukkan angka  " << i << " = " ;
        cin >> array[i] ;
        q = q + array[i] ;
    }
    return q ;
}

float rata(int p) {
    float q = 0 ;
    int array[p];
    for (int i = 1; i <=p; i++)
    {
        cout << "masukkan angka  " << i << " = " ;
        cin >> array[i] ;
        q = q + array[i] ;
    }
    q = q / p ;
    return q ;
}

//algroitma
int main()
{
    cout << "\t Progam Aritmatika " << endl ;
    cout << "Pilih angka  " << endl ;
    cout << "1. Penjumlahan " << endl ;
    cout << "2. Pengurangan " << endl ;
    cout << "3. jumlah array "         << endl ;
    cout << "4. rata_rata array "       << endl ;
    int pilihan ;
    cout << "masukkan kode = ";
    cin >> pilihan ;

    cout << endl << endl ;

        switch (pilihan)
        {
        case 1:
            cout << "masukkan angka = " ;
            cin >> a ;
            cout << "masukkan angka = " ;
            cin >> b ;
            hasil = tambah(a,b) ;
            cout << "hasil penjumlahan di atas adalah " << hasil ;
            break;

        case 2:
            cout << "masukkan angka = " ;
            cin >> a ;
            cout << "masukkan angka = " ;
            cin >> b ;
            hasil = kurang(a,b) ;
            cout << "hasil Pengurangan di atas adalah " << hasil ;
            break;

        case 3:
            cout << "barapa angka yang akan di jumlahkan  = " ;
            cin >> a ;
            hasil = totalarr(a) ;
            cout << "hasil semua penjumlahan di atas adalah " << hasil ;
            break;

        case 4:
            cout << "barapa angka yang akan di jumlahkan  = " ;
            cin >> a ;
            hasil = rata(a) ;
            cout << "hasil rata-rata di atas adalah " << hasil ;
            break;

        default:
            cout << "Tidak ada pilihan" ;
            break;
        }

}
