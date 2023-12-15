#include <iostream>
#include <conio.h>

//PRINT BILANGAN GENAP BERDASARKAN ANGKA DIBAWAH INPUT
using namespace std;
int main() 
{
	int bil, n;
	cout << "Masukkan n = ";
	cin >> n;
	for (bil = 0; bil < n; bil++)
		{
			if (bil % 2 == 0) cout << bil << " ";
		}
}


