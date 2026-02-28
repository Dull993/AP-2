#include <iostream>
using namespace std;

int main() { 
    float r, luas, Luas_Permukaan_bola, Volume_bola;
    const float phi = 3.14;

    cout << "Masukkan jari-jari lingkaran: ";
    cin >> r;
    Luas_Permukaan_bola = 4 * phi * r * r;
    Volume_bola = (4/3.0) * phi * r * r * r;

    cout << "Luas Permukaan bola adalah: " << Luas_Permukaan_bola << endl;
    cout << "Volume bola adalah: " << Volume_bola << endl;


}