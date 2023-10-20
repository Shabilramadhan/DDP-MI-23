#include <iostream>
using namespace std;


int main(){
    int angka;
    cin >> angka;
    
    if(angka<0){
        cout << "Negatif\n";
    } else if (angka%2==0) {
        cout << "Positif Genap\n";
    } else if (angka%2==1) {
        cout << "Positif Ganjil\n";
    }
    return 0;
}
