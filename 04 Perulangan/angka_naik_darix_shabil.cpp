#include <iostream>

using namespace std;

int main() {
    int c, d;
    cin >> c >> d;
    if (c <= d) {
        for (int i = c; i <= d; i++) {
            cout << i <<" ";
        }
    } else {
        for (int i = c; i <= d; i++) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
