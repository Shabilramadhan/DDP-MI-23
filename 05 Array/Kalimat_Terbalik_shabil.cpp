#include <iostream>

using namespace std;

int main() {
    string kalimat;;
    getline(cin, kalimat);
    
    for (int i = kalimat.length() - 1; i >= 0; i--) {
        cout << kalimat[i];
    }
    
    return 0;
}
