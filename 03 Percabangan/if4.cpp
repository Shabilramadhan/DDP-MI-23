#include <iostream>
using namespace std;

int main()
{
    int value ;
    cin >> value;
    
    if (value % 2 == 1) {
        cout << "Ganjil";
    } else {
        cout << "Genap";
    }
}