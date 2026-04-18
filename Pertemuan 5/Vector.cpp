#include <iostream>
#include <vector>
using namespace std;

int main() {
    //vector declaration & initialization
    vector<string> nama_karyawan = {"Andi", "Budi", "Citra", "Dewi", "Eko"};

    //Menampilkan data ascending
    // for (int i = 0; i < nama_karyawan.size(); i++) {
    //     cout << nama_karyawan[i] << endl;
    // }

    //menampilkan data descending
    // for (int i = 4; i >= 0; i--) {
    // cout << nama_karyawan[i] << endl;
    // }

    // Add data to vector
    nama_karyawan.push_back("Bunga");

    //Menampilkan data ascending
    // for (int i = 0; i < nama_karyawan.size(); i++) {
    //     cout << nama_karyawan[i] << endl;
    // }

    //Delete data from
    // nama_karyawan.pop_back();
    // nama_karyawan.erase(nama_karyawan.begin() + 3);

    // for (int i = 0; i < nama_karyawan.size(); i++) {
    //     cout << nama_karyawan[i] << endl;
    // }
}