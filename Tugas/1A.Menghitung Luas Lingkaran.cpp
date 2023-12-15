#include<iostream>

using namespace std;
int main() 
{
	cout<<"==================================\n";
	cout<<"MENGHITUNG LUAS LINGKARAN";
	cout<<"\n=================================\n";
	float r, Luas;
	cout<<"Rumus Luas Lingkaran : 1/2 * 3.14 * r*r\n";
	cout<<"Masukan r = ";
	cin>>r;
	cout<<"L = 1/2*3.14*"<<r<<"*"<<r;
	Luas = 0.5*3.14*r*r;
	cout<<"\nL = "<<Luas;
	
}

