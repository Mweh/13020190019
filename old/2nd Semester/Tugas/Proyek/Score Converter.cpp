// SEBELUM DIJALANKAN PASTIKAN LANG: STANDARD (-std)NYA ADALAH GNU C++ 11 DI CODE GENERATIONS - COMPILER OPTIONS
//KASUS PERTAMA
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int SOA; // ukuran array
string val; // temp input
string Str1,Str2; // comparer
int temp[5]; // tampung nilai akhir
int x,y,NilaiAkhir; //Variabel Loop Tampung Nilai Akhir
bool flag; // Variabel Check
int Flag; 

// Fungsi Konversi Nilai Akhir
int Convert(int ConvertScore){
	if(ConvertScore > 85){
		cout<<"\nNilai Akhir : A (4.00)\n";
	}
	else if(ConvertScore >= 81 && ConvertScore <=85){
		cout<<"\nNilai Akhir : A- (3.75)\n";
	}
	else if(ConvertScore >= 76 && ConvertScore <=80){
		cout<<"\nNilai Akhir : B+ (3.50)\n";
	}
	else if(ConvertScore >= 71 && ConvertScore <=75){
		cout<<"\nNilai Akhir : B (3.00)\n";
	}
	else if(ConvertScore >= 66 && ConvertScore <=70){
		cout<<"\nNilai Akhir : B- (2.75)\n";
	}
	else if(ConvertScore >= 61 && ConvertScore <=65){
		cout<<"\nNilai Akhir : C+ (2.50)\n";
	}
	else if(ConvertScore >= 51 && ConvertScore <=60){
		cout<<"\nNilai Akhir : C (2.00)\n";
	}
	else if(ConvertScore >= 45 && ConvertScore <=50){
		cout<<"\nNilai Akhir : D (1.00)\n";
	}
	else{
		cout<<"\nNilai Akhir : E (0.00)\n";
	}
}

// Fungsi Penghitung Nilai Akhir
int Process(int CalculateSum[]){
	int sum = 0;
	
	for(int itr = 1; itr < 6; itr++){
		if(itr == 1 || itr == 3 || itr == 4){
			sum += (CalculateSum[itr] * 20/100);
		}
		if(itr == 2){
			sum += (CalculateSum[itr] * 25/100);
		}
		if(itr == 5){
			sum += (CalculateSum[itr] * 15/100);
		}
	}
	return sum;
}

int main (){
	
	cout<<"Input Jumlah Mahasiswa : ";
	cin>>SOA;
	string Mahasiswa [SOA][6];
	cout<<"Silahkan Masukkan Data Dengan Urutan: \nStambuk, Nilai UTS, Nilai UAS, Nilai Tugas Mandiri, Nilai Tugas Proyek, Kehadiran\n";
	
	// Loop input
	for(int i = 0; i < SOA; i++){
		for(int j = 0; j < 6; j++){
			cin>> val;
			Mahasiswa[i][j] = val;
		}
	}
	//system("cls");
	label:
		// search data
		cout<<"Masukkan Stambuk Yang Ingin Ditampilkan : ";
		cin>> Str2;
		for(x = 0; x < SOA; x++){
			Str1 = Mahasiswa[x][0];
			if(Str1.compare(Str2) == 0){
				flag = true;
				break;
			}
		}
	
		
		if(flag == true){
		for(y = 1; y < 6; y++){
			temp[y] = stoi(Mahasiswa[x][y]);
		}
		printf("\nNilai UAS = %d, Nilai UTS = %d, Nilai Tugas Mandiri = %d, Nilai Tugas Proyek = %d, Kehadiran = %d", temp[1],temp[2],temp[3],temp[4],temp[5]);
		NilaiAkhir = Process(temp);
		cout<<"\nNilai Akhir = " << NilaiAkhir;
		Convert(NilaiAkhir);
		}
		else{
			cout<<"Data Mahasiswa Tidak Ditemukan\n";
		}
	
	cout<<"Apakah Anda Ingin Menampilkan Data Mahasiswa Lain :\n1.Iya\n2.Tidak\n";
	cin>> Flag;
	
	if(Flag == 1){
		goto label;
	}
	else {
		return 0;
	}	
}
