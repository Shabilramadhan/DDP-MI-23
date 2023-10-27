#include <iostream>
using namespace std;

// Create a function
void myFunction() {
    cout << "I just got executed!";
}
void myFunction2(string name = "Shabil", int umur = 22) {
    cout << "Nama saya : " << name << " umur saya: " << umur << endl;
}
int myFunction3(int x) {
    return 5 + x;
}

int main(){
    myFunction();
    myFunction();
    myFunction();
    myFunction();

    myFunction2("Bowo");
    myFunction2("Shabil", 17);
    myFunction2("Nugraha", 20);
    myFunction2("Farhan", 18);
    
    
   int value1 = myFunction3(22); // 27
   cout << value1 << endl;
    
    return 0;
}

