#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // Untuk menghasilkan angka acak yang berbeda setiap kali program dijalankan

    int secretNumber = rand() % 100 + 1; // Menghasilkan angka acak antara 1 dan 100
    int guess;
    int attempts = 0;

    cout << "Selamat datang di game Tebak Angka!" << endl;

    do {
        cout << "Masukkan tebakan Anda (1-100): ";
        cin >> guess;
        attempts++;

        if (guess > secretNumber) {
            cout << "Tebakan terlalu besar. Coba lagi." << endl;
        } else if (guess < secretNumber) {
            cout << "Tebakan terlalu kecil. Coba lagi." << endl;
        } else {
            cout << "Selamat! Anda berhasil menebak angka " << secretNumber << " dalam " << attempts << " percobaan." << endl;
        }
    } while (guess != secretNumber);

}