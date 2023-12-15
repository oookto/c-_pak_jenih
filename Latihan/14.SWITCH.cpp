#include<iostream>
#include<conio.h>

using namespace std;
int main() 
{
	int bulan;
	cout << "Masukan angka untuk mewakili nama bulan : ";
	cin >> bulan;
	switch	 (bulan)
	{
		case 1 : cout << "Anda memasukan bulan, januari";
				break;
		case 2 : cout << "Anda memasukan bulan, febuari";
				break;
		case 3 : cout << "Anda memasukan bulan, maret";
				break;
		case 4 : cout << "Anda memasukan bulan, april";
				break;
		case 5 : cout << "Anda memasukan bulan, mei";
				break;
		case 6 : cout << "Anda memasukan bulan, juni";
				break;
		case 7 : cout << "Anda memasukan bulan, july";
				break;
		case 8 : cout << "Anda memasukan bulan, agustus";
				break;
		case 9 : cout << "Anda memasukan bulan, september";
				break;
		case 10 : cout << "Anda memasukan bulan, oktober";
				break;
		case 11 : cout << "Anda memasukan bulan, november";
				break;
		case 12 : cout << "Anda memasukan bulan, desember";
				break;
				
		default : cout << "Anda memasukan bulan selain januari,febuari,maret,april,mei,juni,july,agustus,september,oktober,november,desember";
			    break;
				
	}
}

