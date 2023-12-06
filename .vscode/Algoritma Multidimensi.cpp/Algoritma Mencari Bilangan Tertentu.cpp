#include <iostream> 
using namespace std; 

int main() {
	 int N, bilanganCari; 
	 // Input jumlah bilangan 
	 cout << "Masukkan jumlah bilangan: ";
	  cin >> N;
	   // Membuat array untuk menyimpan bilangan
	    int bilangan[N]; 
	    // Input bilangan
	     for (int i = 0; i < N; ++i) { cout << "Masukkan bilangan ke-" << i + 1 << ": ";
	      cin >> bilangan[i]; 
	      } 
	      // Input bilangan yang dicari 
	      cout << "Masukkan bilangan yang ingin dicari: "; 
	      cin >> bilanganCari; 
	      // Mencari bilangan dalam array 
	      bool ditemukan = false;
	       for (int i = 0; i < N; ++i) { 
	       if (bilangan[i] == bilanganCari) {
	       	 ditemukan = true; 
	       	 break; 
	       	 }
	       	  }
	       	   // Menampilkan hasil pencarian 
	       	   if (ditemukan) { 
	       	   cout << "Bilangan " << bilanganCari << " ditemukan dalam kumpulan angka." << endl; 
	       	   }
	       	    else { 
	       	    cout << "Bilangan " << bilanganCari << " tidak ditemukan dalam kumpulan angka." << endl;
	       	     } 
	       	     return 0;
	       	      }