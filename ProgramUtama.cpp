#include <iostream>
using namespace std;

int main()
{ // begin
    // numeric luas, panjang, lebar
    double luas;
    double panjang;
    double lebar; // declare var local

    // display "Masukkan panjangnya"
    cout << "Masukkan panjangnya:";
    // accept panjang
    cin >> panjang;
    // Masukkan lebarnya
    cout << "Masukkan lebarnya:";
    // accept lebar
    cin >> lebar;

    // compute luas = panjang *lebar
    luas = panjang * lebar;

    // display 'Luas persegi panjang', luas
    cout << "Luas persegi panjang" << luas << endl;
}