#include <iostream>
#include <vector>
using namespace std;

int main(){
     vector<string> nama_mhsw = {"Nadia", "Echa", "Carlos", "ilham", "alan"};
     cout << "Isis vector awal: " << endl;
     for (int i = 0; i < nama_mhsw.size(); i++) {
        cout << nama_mhsw[i] << endl;
    }

     nama_mhsw.push_back("Houra");
     nama_mhsw.pop_back();
     nama_mhsw.erase(nama_mhsw.begin() + 1);

     cout << "Isi vector setelah perubahan: " << endl;
     for (int i = 0; i < nama_mhsw.size(); i++) {
        cout << nama_mhsw[i] << endl;
    }

    cout << "Jumlah data dalam vector: " << nama_mhsw.size() << endl;
}
