#include<iostream>
//ni adalah direktif preprosesor yang memungkinkan Anda menggunakan input/output standar C++ seperti cin dan cout.
#include<conio.h>
// Ini adalah direktif preprosesor yang mengandung fungsi-fungsi yang memungkinkan penggunaan fungsi getch() 
// untuk menunggu hingga pengguna menekan tombol sebelum menutup program.
using namespace std;
// Mendeklarasikan bahwa kita akan menggunakan namespace std, yang berisi definisi dari cin, cout, dan sebagainya.
int main() //Ini adalah fungsi utama dari program C++. Eksekusi program dimulai dari sini.
{
	int A, B, T; //Mendeklarasikan Variable 
	cin>>A; // cin artinya C INPUT || Meminta input value untuk variable A
	cin>>B; 	
	T = A + B; // Menjumlahkan nilai A dan B dan hasilnya disimpan dalam variabel T.
	cout<< "Hasil Penjumlahan = " << T; //Menampilkan hasil dalam variable T ke layar.
	getch(); //Menunggu pengguna menekan tombol sebelum menutup program. Fungsi ini termasuk dalam header file <conio.h>.
}

