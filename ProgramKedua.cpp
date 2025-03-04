#include <iostream>
using namespace std;

float luas, panjang, lebar; // var global

void inputData()
{
    cout << "Masukkan panjangnya: ";
    cin >> panjang;

    cout << "Masukkan lebarnya: ";
    cin >> lebar;
}

float hitunganLuas()
{
    luas = panjang * lebar;
    return luas;
}

float hitungLuasBerparameter(float a, float b)
{
    luas = a * b;
    return luas;
}

void tampilkanLuas()
{
    cout << "Luas Persegi Panjang: " << luas << endl;
}

int main()
{
    inputData();
    // hitungLuas();
    hitungLuasBerparameter(panjang, lebar);
    tampilkanLuas();
}