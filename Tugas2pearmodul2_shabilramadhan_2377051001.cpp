#include <iostream>
using namespace std;

int main(){
    char repeat = 'y';
    int counter = 0;

    while(repeat == 'y'){
        cout << "Apakah kamu sayang dia ?:";
        cin >> repeat;
        counter ++;
    }
    cout << "----------"<< endl;
    cout << "kamu masih punya harapan" << endl;
    cout << "setidaknya kamu sudah mencoba sebanyak" << counter << "kali" << endl;;
    return 0;
}