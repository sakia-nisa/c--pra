#include <iostream>

using namespace std;

int main()
{
    int nilai;
    string grade;

    cout << "Masukan Nilai Terakhir Kamu : " << endl;
    cin >> nilai;

    if (nilai >= 91 && nilai < 100) {
        grade = "A";
    } else if (nilai >= 81 && nilai < 90) {
        grade = "B";
    } else if (nilai >= 71 && nilai < 80){
        grade = "C";
    }  else if (nilai >= 61 && nilai < 70){
        grade = "D";
    } else if (nilai >= 0 && nilai < 60){
        grade = "E";
    } else {
    cout << "Nilai Tidak Valid" << endl;
    }
    cout << "Grade Yang Kamu Peroleh : " << grade <<  endl;
    return 0;
}
