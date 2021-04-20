#include <iostream>
#define Minimum(a1,a2) ((a1)<(a2)?(a1):(a2)) // Preprocessor Macro Fungsi mencari nilai kecil

using namespace std;

int main(){

	float b1, b2;
	
	cout<<"Input Angka pertama utk Dibandingkan :\n";
	cin>>b1;
	cout<<"Input Angka kedua utk Dibandingkan :\n";
	cin>>b2;
	
	cout<<"Angka Yang Lebih Kecil: "<<Minimum(b1,b2);
	
}
