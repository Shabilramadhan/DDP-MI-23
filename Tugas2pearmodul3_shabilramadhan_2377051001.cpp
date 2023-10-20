#include <iostream>
using namespace std;

int main(){
    int matrix[8][8];
    for (int i = 0; i < 8; i++) {
     for (int j = 0; j < 8; j++) {
        cout << "Baris" << i + 1 <<", Kolom " << j + 1 << "=";
        cin >> matrix[i][j];
     }
     cout << endl;
    }
    cout << "Hasil Matriks:" << endl;
    for (int i = 0; i < 8; i++) {
     for (int j = 0; j < 8; j++) {
        cout << matrix[i][j] << " ";
}
cout << endl;
}
return 0;
}