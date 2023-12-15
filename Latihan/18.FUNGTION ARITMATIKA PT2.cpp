#include <iostream>
#include <conio.h>

//MEMPELAJARI FUNGSI PART 2
using namespace std;
double penjumlahan(int A, int B);

main() 
{
	int x,y;
	double hasiljumlah;
	cout << "masukan nilai x : ";
	cin>>x;
	cout << "masukan nilai y : ";
	cin>>y;
	hasiljumlah = penjumlahan(x,y);
	cout<<endl;
	cout<<"hasil penjumlahanya = ";
	cout <<x<<" + "<<y<< " = "<< hasiljumlah;
	
}
double penjumlahan(int A, int B) //Membuat garis pemisah
{
	return(A+B);
}


