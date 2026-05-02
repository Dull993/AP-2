#include <iostream>
using namespace std;

int main() {
    // 1. Operasi Penugasan
    cout << "=== Operasi Penugasan ===" << endl;
    int a = 10;
    int *p;
    p = &a; // Pointer simpan alamat a 

    cout << "Nilai a : " << a << endl;
    cout << "Alamat a (&a) : " << &a << endl;
    cout << "Nilai pointer p: " << p << endl;
    cout << "Nilai *p: " << *p << endl;

    // 2. Operasi Aritmatika
    cout << "\n=== Operasi Aritmatika ===" << endl;
    int nilai[3]; //array 3 angka
    int *oke;

    nilai[0] = 125;
    nilai[1] = 345;
    nilai[2] = 750;

    oke = &nilai[0]; //oke mmenyimpan alamat nilai[0]
    
    cout << "nilai " << *oke << " ada di alamat " << oke << endl;
    cout << "nilai " << *(oke + 1) << " ada di alamat " << (oke + 1) << endl;
    cout << "nilai " << *(oke + 2) << " ada di alamat " << (oke + 2) << endl;

    // 3. Operasi Logika
    cout << "\n=== Operasi Logika ===" << endl;
    int x = 5, y = 10;
    int *p1 = &x; // p1 --> menyimpan alamat x
    int *p2 = &y; // p2 --> menyimpan alamat y
    int *p3 = &x; // p3 --> menyimpan alamat x

    // Jadi : p1 dan p3 sama, dan p2 beda sendiri

    if (p1 == p3) {
        cout << "p1 dan p3 menunjuk ke alamat yang sama." << endl;
    }

    if (p1 != p2) {
        cout << "p1 dan p2 menunjuk ke alamat yang berbeda." << endl;
    }

    int *p4 = NULL; // Pointer tidak menunjuk ke mana-mana
    if (p4 == NULL) {
        cout << "p4 adalah pointer Null." << endl;
    }

    return 0;
}