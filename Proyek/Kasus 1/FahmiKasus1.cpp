#include <iostream>
#include <string>
#include <cstring>
#include "FahmiKasus1.h"

using namespace std;

int SizeArray; 
string Ubah; string ke1,ke2; 
int temp[5]; int x,y,NilaiAkhir; 
bool flag;
int Flag; 

int Hitung(int Jumlah[]){

	int sum = 0;
	
	for(int itr = 1; itr < 6; itr++){
		if(itr == 1 || itr == 3 || itr == 4){
			sum += (Jumlah[itr] * 20/100);
		}
		if(itr == 2){
			sum += (Jumlah[itr] * 25/100);
		}
		if(itr == 5){
			sum += (Jumlah[itr] * 15/100);
		}
	}
	return sum;
}

int Huruf(int Final){

	if(Final > 85){
		cout<<"\nNilai Akhir : A (4.00)\n";
	}
	else if(Final >= 81 && Final <=85){
		cout<<"\nNilai Akhir : A- (3.75)\n";
	}
	else if(Final >= 76 && Final <=80){
		cout<<"\nNilai Akhir : B+ (3.50)\n";
	}
	else if(Final >= 71 && Final <=75){
		cout<<"\nNilai Akhir : B (3.00)\n";
	}
	else if(Final >= 66 && Final <=70){
		cout<<"\nNilai Akhir : B- (2.75)\n";
	}
	else if(Final >= 61 && Final <=65){
		cout<<"\nNilai Akhir : C+ (2.50)\n";
	}
	else if(Final >= 51 && Final <=60){
		cout<<"\nNilai Akhir : C (2.00)\n";
	}
	else if(Final >= 45 && Final <=50){
		cout<<"\nNilai Akhir : D (1.00)\n";
	}
	else{
		cout<<"\nNilai Akhir : E (0.00)\n";
	}
}

// Diatas Ini dalah File cpp dengan berisi implementasi fungsi dari file header dgn nama file "FahmiKasus1.cpp"

// ----------------------------------------------------------------------------------------------------------------------------------------------
