#include <iostream>
using namespace std;

void cetakData(string nama, string nisn, string jurusan, int tinggiBadan)
{
    cout << "nama :" << nama << endl;
    cout << "nisn :" << nisn << endl; 
    cout << "jurusan :" << jurusan << endl;
    cout << "tinggi badan :" << tinggiBadan << endl;
    
}
int main() {
    string nama;
    string nisn;
    string jurusan;
    int tinggiBadan;

    cout << "Masukkan nama: ";
    cin >> nama;
    cout << "Masukan nisn: ";
    cin >> nisn;
    cout << "Masukan jurusan: ";
    cin >> jurusan;
    cout << "Masukan tinggiBadan : ";
    cin >> tinggiBadan;

    cetakData(nama, nisn, jurusan, tinggiBadan);

    return 0;
}