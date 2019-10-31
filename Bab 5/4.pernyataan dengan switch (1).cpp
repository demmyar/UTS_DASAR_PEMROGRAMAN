//Contoh Switch 1
#include <iostream>
using namespace std;

int main()
{
    int pilihan;

    cout << "Staf Pengajar Pemrograman C++ :" << endl;
    cout << "======================================" << endl;
    cout << " 1. Nur Alamsyah                    \n" << endl;
    cout << " 2. Hadi Budiman                    \n" << endl;
    cout << " 3. Yusri Ikhwani                    \n" << endl;
    cout << " 4. Desy Wundandari                    \n" << endl;
    cout << " 5. Rais Fathony                    \n" << endl;
    cout << " 6. Aulia Rahman                    \n" << endl;
    cout << " 7. Zainuddin                    \n" << endl;
    cout << " 8. Wagino                    \n" << endl;
    cout << " 9. Rasyidan                    \n" << endl;
    cout << " 10. Ramadhani                    \n" << endl;

    cout << "Staf Pengajar Pemrograman C++ :" << endl;
    cin >> pilihan;
    cout << endl;

    switch (pilihan)

    {
        case 1:
           cout << "Pilihan Anda Benar \n" << endl;
           break;
        case 2:
           cout << "Pilihan Anda Benar \n" << endl;
           break;
        case 3:
           cout << "Pilihan Anda Salah \n" << endl;
           break;
        case 4:
           cout << "Pilihan Anda Salah \n" << endl;
           break;
        case 5:
           cout << "Pilihan Anda Benar \n" << endl;
           break;
        case 6:
           cout << "Pilihan Anda Salah \n" << endl;
           break;
        case 7:
           cout << "Pilihan Anda Benar \n" << endl;
           break;
        case 8:
           cout << "Pilihan Anda Benar \n" << endl;
           break;
        case 9:
           cout << "Pilihan Anda Salah \n" << endl;
           break;
        case 10:
           cout << "Pilihan Anda Benar \n" << endl;
           break;
        default:
           cout << "Pilihan Anda Tidak Ada Dalam Daftar Ini \n \n" << endl;
    }
    return 0;
}
