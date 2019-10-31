#include <iostream>
using namespace std;

int main()
{
    cout << "KELULUSAN SISWA \n \n";

    double Nilai_Ujian;
    cout << "Masukkan Nilai Ujian : ";
    cin >> Nilai_Ujian;
    cout << endl;

    if (Nilai_Ujian >= 60)
    {
        cout << ("Hasil Ujian = LULUS");
        cout << endl << endl;
    } else {
        cout << ("Hasil Ujian = TIDAK LULUS");
        cout << endl << endl;
    }

    return 0;
}
