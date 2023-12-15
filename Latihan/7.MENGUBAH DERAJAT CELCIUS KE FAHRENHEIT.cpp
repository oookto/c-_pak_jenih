#include<iostream>

using namespace std;
int main() 
{
	cout<<"==================================\n";
	cout<<"MENGUBAH DERAJAT CELCIUS KE FAHRENHEIT";
	cout<<"\n=================================";
	int c;
	float f;
	
	cout<<"\nMasukan Derajat = "; 
	cin >> c;
	
	cout<<"\nF = 9/5.0*"<<c<<"+32\n"; 
	f = 9/5.0 * c + 32;
	
	cout <<"F = "<< f;
	cout<<"\nHasil Konversi Celcius ke Fahrenheit = "<<f;
	
}

