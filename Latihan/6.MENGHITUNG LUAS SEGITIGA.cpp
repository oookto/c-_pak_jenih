#include<iostream>
#include<conio.h>

using namespace std;
int main() 
{
	cout<<"==========================\n";
	cout<<"MENGHITUNG Luas Segitiga";
	cout<<"\n==========================";
	float A, T, L; //mendeklarasikan float A, T dan L sebagai perwakilan dari bilangan Alas, Tinggi, Luas
	cout<<"\n\nMasukan Alas segitiga = "; 
	cin >> A; //Memberikan user sebuah input untuk variable Alas
	cout<<"Masukan Tinggi segitiga = ";
	cin >> T; //Memberikan user sebuah input untuk variable Tinggi
	L = A*T/2.0; //Operasi bilangan
	cout<<"Luas = "<<A<<"*"<<T<<"/2 = "<<L;
	
}

