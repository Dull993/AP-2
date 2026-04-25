#include <iostream>
using namespace std;

string varglob = "ilmu";

void namaVariabel() {
    string varlok = "Komputer"; //contoh variabel lokal
    //coba akses 1
    cout << varlok << endl;

    //cova akses 3
    cout << varglob << endl;

}

int main () {
    namaVariabel();

    // coba akses 2
    // cout << varlok << endl; // error, varlok adalah var lokal

    // coba akses 4
    cout << varglob << endl; // varglob adalah var global
}