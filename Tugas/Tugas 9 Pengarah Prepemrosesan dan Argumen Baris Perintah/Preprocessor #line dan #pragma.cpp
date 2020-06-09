#pragma mencari urutan baris
#include <iostream> // Baris 2
// Baris 3
using namespace std; // Baris 4
// Baris 5
int main(){	// Baris 6
// Baris 7
	cout<<"Baris ke: "<<__LINE__<<endl;	// Baris 8
	// Baris 9
	#line 68 // Baris 10
	// Baris 11 menjadi Baris 68 
	cout<<"Baris ke: "<<__LINE__<<endl;	// Baris 69
	// Baris 70
} // Baris 71
