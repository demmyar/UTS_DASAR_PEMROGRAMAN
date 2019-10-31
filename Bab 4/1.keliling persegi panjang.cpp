// Program cin.vpp
#include <iostream>
using namespace std;

int main()  {
    double panjang, lebar, keliling;

    cout << "Menghitung Keliling Persegi Panjang" << endl;

    cout << "Panjang : ";
    cin >> panjang;

    cout << "Lebar : ";
    cin >> lebar;

    keliling = 2 * (panjang + lebar);

    cout << "Keliling = " << keliling << endl;

    return 0;
}
