#include <iostream> 
using namespace std;
 int main() { 
 int N; 
 // Input jumlah bilangan 
 cout << "Masukkan jumlah bilangan: "; 
 cin >> N; 
 // Membuat array untuk menyimpan bilangan
 int bilangan[N];
  // Input bilangan dan mencari nilai terbesar 
  int terbesar;
   cout << "Masukkan bilangan ke-1: "; 
   cin >> terbesar;
    for (int i = 1; i < N; ++i) { 
    cout << "Masukkan bilangan ke-" << i + 1 << ": ";
     cin >> bilangan[i]; 
    // Membandingkan dengan nilai terbesar sebelumnya 
    if (bilangan[i] > terbesar) { terbesar = bilangan[i];
     }
      } 
      // Menampilkan bilangan terbesar 
      cout << "Bilangan terbesar adalah: " << terbesar << endl; 
      return 0;
       }