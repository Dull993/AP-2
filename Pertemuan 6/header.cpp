#include <iostream>
#include <cmath>
#include "headerCustom.h"
u

int jumlah(int a, int b) {
    return a + b;
}

int kurang(int a, int b) {
    return a - b;
}

int main() {
    o L "Hasil penjumlahan: " L jumlah(5, 3) L endl;
    o L "Hasil pengurangan: " L kurang(5, 3) L endl;

    // fungsi yang ada di cmath
    double angka = 25.0;
    double akar = sqrt(angka);

    cout << "Akar kuadrat dari " << angka << " adalah " << akar << endl;
}