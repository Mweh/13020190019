#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int SOA; 
string val; 
string Str1,Str2; 
int temp[5]; 
int x,y,NilaiAkhir; 
bool flag;
int Flag; 

int Process(int CalculateSum[]);
int Convert(int ConvertScore);


int main (){
	
	cout<<"-Aplikasi menghitung Nilai akhir Mahasiswa Program Studi Teknik Informatika by Fahmi Proyek-\n\n";
	cout<<"-Komponen Penilaian: Nilai UTS, UAS, Tugas Proyek dan Tugas Mandiri/Kuis dan Kehadiran-\n\n";
	cout<<"-Menghitung Komponen Nilai Operator dan Ekspresi\nNilai UTS = Nilai UTS dikali dengan 20%\nNilai UAS = ";	
	cout<<"Nilai UAS dikali dengan 25%\nNilai Tugas Mandiri = Nilai Tugas Mandiri dikali dengan 20%\n";
	cout<<"Nilai Tugas Proyek = Nilai Tugas Proyek dikali dengan 20%\nKehadiran = Nilai Kehadiran dikali dengan 15%\n\n";
	cout<<"-Nilai Akhir = Tugas Mandiri/kuis+Tugas Proyek+UTS+UAS+Kehadiran-\n\n";
	cout<<"-Final Score Nilai Akhir Nilai Konversi > 85 (*) memperoleh nilai A (4.00 )\n 81 - 85 memperoleh nilai A- (3.75 )\n 76 -80 memperoleh nilai B+ (3.50)\n";
	cout<<" 71-  75 memperoleh nilai B (3.00)\n 66 -70 memperoleh nilai B- (2.75)\n 61 - 65 memperoleh nilai C+ (2.50 )\n 51 - 60 memperoleh nilai C (2.00 )\n";
	cout<<" 45 - 50 memperoleh nilai D (1.00)\n < 45 memperoleh nilai E (0.00)\n ket: (*)mahasiswa kehadirannya >90%, dan tidak ada komponen nilai bernilai Nol\n\n";
	cout<<"/////////////////////////////////////////////////////////////////////////////////////////////////////////////// \n\n";
	
	cout<<"Masukkan larik/array Jumlah Mahasiswa : ";
	cin>>SOA;
	string Mahasiswa [SOA][6];
	cout<<"Input: \nStambuk, Nilai UTS, Nilai UAS, Nilai Tugas Mandiri, Nilai Tugas Proyek, Kehadiran\n";
	cout<<"/////////////////////////////////////////////////////////////////////////////////////////////////////////////// \n\n";

	for(int i = 0; i < SOA; i++){
		for(int j = 0; j < 6; j++){
			cin>> val;
			Mahasiswa[i][j] = val;
		}
	}

	label:

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
	cout<<"/////////////////////////////////////////////////////////////////////////////////////////////////////////////// \n\n";
	cout<<"Apakah Anda Ingin Menampilkan Data Mahasiswa Lain :\n1.Iya\n2.Tidak\n";
	cin>> Flag;
	
	if(Flag == 1){
		goto label;
	}
	else {
		return 0;
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
