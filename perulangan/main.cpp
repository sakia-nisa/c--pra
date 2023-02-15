#include <iostream>

using namespace std;

int main()
{
    int i;


  for (i = 0; i < 10; i++) {
    cout << "Perulangan Ke " << i << endl;
  }
  int j = 0;
  char tambah = 'y';
  while(tambah == 'y'){
        cout << "Apakah Ingin Tambah? (y/n)";
  cin >> tambah;
  j++;
    cout << "Perulangan Ke " << j;
  }
    return 0;
}
