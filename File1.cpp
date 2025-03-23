#include <iostream>
using namespace std;

int arr[20]; // Membuat Array dengan panjang data 20
int n; // Membuat Variable inputan n

void input()
{ // Procedure Input
    while (true)
{
    cout << "Masukan Jumlah Data pada Array : "; // Membuat Inputan jumlah element Array
    cin >> n; // memanggil variable inputan n

    if (n <= 20)
    {// Membuat Kondisi n tidak lebih dari 20
        break;
    }
    else
    {
        cout << "\nArray yang anda masukkan maksimal 20 Elemen.\n"; // Menampilkan pesan jika data lebih dari 20
    }
}
cout << endl; // Membuat jarak per baris program
cout << "===================" << endl; // Membuat tampilan susunan data elemen array
cout << "Masukan Element Array" << endl;
cout << "===================" << endl;

for (int i = 0; i < n; i++) // Menggunkan perulangan for untuk menyimpan data pada array
{
    cout << "Data ke-" << (i + 1) << ": "; // Memasukan atau menginputkan nilai data n
    cin>> arr[i]; // Menyimpan nilai data n kedalam array arr
}
}

void insertionSort()
{// procedure Insertionsort
   
int temp; // Membuat variable data temporer atau penyimpan sementara
int j, i; // membuat variable j sebagai penanda
}