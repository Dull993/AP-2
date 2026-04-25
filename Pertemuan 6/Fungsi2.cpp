#include <iostream>
using namespace std;

//Fungsi tanpa nilai balikan (void)
void tampilkanPesan() {
    cout << "======== Selamat datang di AP 2! ========" << endl;
}

//Fungsi dengan nilai balikan (int, double, float, dsb)
int tambah(int a, int b) {
    return a + b;
}

// Funsgi overload, fungsi dengan nama yang sama, tapi parameter beda, tipe beda
int kali(int a, int b) {
    return a * b;
}

double kali(double a, double b){
    return a * b;
}

//Fungsi rekursif, fungsi yang memanggil dirinya sendiri
int faktorial (int n) {
    if (n == 0 || n == 1) { // base case
        return 1; 
    } else {
        return n * faktorial(n - 1); // recursive case
    }
}


int main() {
    //memanggi fungsi tanpa nilai balikan
    tampilkanPesan();

    //memanggil fungsi dengan nilai balikan
    int x = 5, y = 3;
    int hasiltambah = tambah(x, y);
    cout << "Hasil penjumlahan :" << hasiltambah << endl;

    //menggunakan fungsi overload
    int hasilKaliInt =  kali(x, y);

    double n = 3, m = 5;
    double hasilKaliDouble = kali(n, m);
    
    cout << "Hasi Perkalian (int) :" << hasilKaliInt << endl;
    cout << "Hasil Perkalian (double) :" << hasilKaliDouble << endl;

    //menggunakan fungsi rekursif
    int angka = 5;
    cout << "Faktorial dari " << angka << " adalah " << faktorial(angka) << endl;

}