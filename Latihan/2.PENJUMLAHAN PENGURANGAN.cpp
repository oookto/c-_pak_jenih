#include<iostream>
#include<conio.h>

using namespace std;
int main() //Ini adalah fungsi utama dari program C++. Eksekusi program dimulai dari sini.
{
	
	int A, B, T, K; //Mendeklarasikan Variable 
	cout<<"Masukan nilai A :";
	cin>>A; // cin artinya C INPUT || Meminta input value untuk variable A
	cout<<"Masukan nilai B :";
	cin>>B; 
	cout<<"=================================";
	
	T = A + B; // Menjumlahkan nilai A dan B dan hasilnya disimpan dalam variabel T.
	cout<< "\nHasil Penjumlahan "<<A<<"+"<<B<<" = "<<T; //Menampilkan hasil dalam variable T ke layar.
		
	K = A - B; // Menjumlahkan nilai A dan B dan hasilnya disimpan dalam variabel T.
	cout<< "\nHasil Pengurangan "<<A<<"-"<<B<<" = "<<K; //Menampilkan hasil dalam variable T ke layar.
	getch(); //Menunggu pengguna menekan tombol sebelum menutup program. Fungsi ini termasuk dalam header file <conio.h>.
}

