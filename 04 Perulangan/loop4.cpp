#include <iostream>
using namespace std;
int main()
{
    char ulangi = 'y';
    int counter = 0;

    // perulangan while
    while(ulangi == 'y'){
        cout<<"Apakah kamu sayang aku?"<<endl;
        cout<<"jawab (y/t): ";
        cin >> ulangi;
        
        // increment counter
        counter++;
    }

    cout<<"\n\n---------\n";
    cout<<"Anda kurang beruntung!"<<endl;
    cout<<"Kamu berusaha sebanyak"<<counter<< "kali"<<endl;

    return 0;
 }
