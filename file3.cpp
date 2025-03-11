#include <iostream>

using namespace std;

float fungsiHitungLuasBerparameter(float a, float b){
    return a * b;
}

int main()
{//begin
    float Panjang, Lebar;
    cout << "Masukkan panjangnya = ";
    cin >> Panjang;
    cout << "Masukkan lebarnya = ";
    cin >> Lebar;
    cout << "Luas persegi panjang = " << fungsiHitungLuasBerparameter(Panjang, Lebar);
}//end