#include<iostream>
#include<conio.h>

using namespace std;
int main() 
{
	int Detik, J, M, D, X, Y, Z;x`
	cout << "Masukan Detik : ";
	cin >> Detik;
	J = Detik/3600;
	X = J*3600;
	Y = Detik - X;
	M = Y/60;
	Z = M*60;
	D = Y-Z;
	
	cout << J << "Jam";
	cout << M << "Menit";
	cout << D << "Detik";
	
}

