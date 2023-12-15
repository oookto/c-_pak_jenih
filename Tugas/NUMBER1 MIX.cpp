#include<iostream>

using namespace std;
int main() 
{
	cout<<"==================================\n";
	cout<<"MENGHITUNG LUAS LINGKARAN";
	cout<<"\n=================================\n";
	float r, LuasL;
	cout<<"Rumus Luas Lingkaran : 1/2 * 3.14 * r*r\n";
	cout<<"Masukan r = ";
	cin>>r;
	cout<<"L = 1/2*3.14*"<<r<<"*"<<r;
	LuasL = 0.5*3.14*r*r;
	cout<<"\nL = "<<LuasL;
	
	cout<<"\n==================================\n";
	cout<<"MENGHITUNG LUAS PERSEGI PANJANG";
	cout<<"\n=================================\n";
	float P,L, LuasP;
	cout<<"Rumus Luas Persegi panjang = P*L\n";
	cout<<"Masukan p = ";
	cin>>P;
	cout<<"Masukan l = ";
	cin>>L;
	cout<<"L = "<<P<<"*"<<L;
	LuasP = P*L;
	cout<<"\nL = "<<LuasP;
	
	cout<<"\n==================================\n";
	cout<<"MENGHITUNG LUAS SEGITIGA";
	cout<<"\n=================================\n";
	float A,T, LuasS;
	cout<<"Rumus Luas Segitiga = 1/2*a*t\n";
	cout<<"Masukan a = ";
	cin>>A;
	cout<<"Masukan t = ";
	cin>>T;
	cout<<"L = 1/2*"<<A<<"*"<<T;
	LuasS = 0.5*A*T;
	cout<<"\nL = "<<LuasS;
}

