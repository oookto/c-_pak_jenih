#include<iostream>

using namespace std;

int main() 
{
    int I;
    int J;

    I = 1;

    cout << "Masukan Jumlah Pengulangan = ";
    cin >> J;

    while (I <= J)
    {
        if (I % 2 ==0)
        {
            cout << I << ". JAKARTA\n";
        }

        I = I + 1;
    }

}

