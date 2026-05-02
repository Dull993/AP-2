#include <iostream>
using namespace std;

// Fungsi untuk pointer sebagai parameter
void ubahnilai(int *p) { // p menerima alamat x isi nya adalah 5
    *p = 20;  // *p = 20 --> ubah isi alamat
}

int main() {
    // 1, Pointer dalam pointer
    cout << "=== Pointer dalam Pointer ===" << endl; 
    int a = 64;
    int *p = &a; // p1 menyimpan alamat a
    int **pp = &p; // pp menyimpan alamat p

    cout << "Nilai a : " << a << endl;
    cout << "Nilai *p : " << *p << endl;
    cout << "Nilai **pp : " << **pp << endl;

    // 2. Pointer dalam array
    cout << "\n=== Pointer dalam Array ===" << endl;
    int arr[] = {1, 2, 3};
    int *ptr = arr;

    cout << "Elemen 1 : " << *ptr << endl; // arr[0]
    cout << "Elemen 2 : " << *(ptr + 1) << endl; // arr[1]
    cout << "Elemen 3 : " << *(ptr + 2) << endl; // arr[2]

    // 3. Pointer dalam string
    cout << "\n=== Pointer dalam String ===" << endl;
    char *organisasi = "Ilmu Komputer Labratory Center";

    cout << "Awal : " << organisasi << endl;
    organisasi += 5; // Geser pointer
    cout << "Geser : " << organisasi << endl; // setelah +5 --> Mulai dari K

    // 4. Pointer sebagai parameter
    cout << "\n=== Pointer sebagai Parameter ===" << endl;
    int x = 5;
    cout << "sebelum : " << x << endl;
    
    ubahnilai(&x);
    cout << "sesudah : " << x << endl;
}
