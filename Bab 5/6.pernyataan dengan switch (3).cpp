//Contoh Switch 3
#include <iostream>
using namespace std;

int main() {
    int kode;

    cout << "1 = Senin   2 = Selasa   3 = Rabu   4 = Kamis" << endl;
    cout << "5 = Jumat   6 = Sabtu    7 = Minggu" << endl;
    cout << "Masukkan kode hari (1-7) : ";
    cin >> kode;

    switch (kode) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        cout << "Hari Kerja"<< endl;
        break;
    case 6:
    case 7:
        cout << "Hari Libur"<< endl;
        break;
    default:
        cout << "KODE HARI TIDAK VALID"<< endl;
    }
    return 0;
}
