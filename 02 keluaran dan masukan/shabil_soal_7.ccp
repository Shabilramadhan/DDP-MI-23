#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    
    string nomor[12];
    
    cin >> nomor[0] >> nomor[1] >> nomor[2];
    cin >> nomor[3] >> nomor[4] >> nomor[5];
    cin >> nomor[6] >> nomor[7] >> nomor[8];
    cin >> nomor[9] >> nomor[10] >> nomor[11];
    
    cout << nomor[0] << " " << nomor[3] << " " << nomor[6] << " " << nomor[9] << endl;
    cout << nomor[1] << " " << nomor[4] << " " << nomor[7] << " " << nomor[10] << endl;
    cout << nomor[2] << " " << nomor[5] << " " << nomor[8] << " " << nomor[11] << endl;
    
    return 0;
}    