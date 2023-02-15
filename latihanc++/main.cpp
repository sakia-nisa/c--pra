#include <iostream>

using namespace std;

int main()
{
    string nama;
    int umur;
    char jk;

    cout << "Siapa namamu" << endl;
    cout << "Jawab :";
    cin >> nama;

    cout << "Berapa Umurmu ?" << endl;
    cout << "Jawab :";
    cin >> umur;

    cout << "Apa Jenis Kelaminmu ?" << endl;
    cout << "Jawab :";
    cin >> jk;

    cout << "Salam Kenal! " << nama << " Umur Kamu " << umur;
    cout << " Dan Kamu berjenis kelamin " << jk;
    return 0;
}
