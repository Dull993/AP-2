#include <iostream>
using namespace std;

int main() {

    float berat, tinggi;
    cout << "Masukkan berat badan Anda (kg): ";
    cin >> berat;
    cout << "Masukkan tinggi badan Anda (m): ";
    cin >> tinggi;
    float bmi = berat / (tinggi * tinggi);
    cout << "BMI Anda adalah: " << bmi << endl;
    if (bmi < 18.5) {
        cout << "Anda termasuk dalam kategori: Berat badan kurang" << endl;
    } else if (bmi >= 18.5 && bmi < 25) {
        cout << "Anda termasuk dalam kategori: Berat badan normal" << endl;
    } else if (bmi >= 25 && bmi < 30) {
        cout << "Anda termasuk dalam kategori: Berat badan berlebih" << endl;
    } else if (bmi >= 30) {
        cout << "Anda termasuk dalam kategori: Obesitas" << endl;
    } else {
        cout << "Input tidak valid" << endl;
    }

}