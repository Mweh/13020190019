#include <iostream>
#include <string>
#include "FahmiKasus1.h"
#include "FahmiKasus1.cpp"

using namespace std;

int main (){
	
	cout<<"-Aplikasi menghitung Nilai akhir Mahasiswa Program Studi Teknik Informatika by Fahmi Proyek-\n\n";
	cout<<"-Komponen Penilaian: Nilai UTS, UAS, Tugas Proyek dan Tugas Mandiri/Kuis dan Kehadiran-\n\n";
	cout<<"-Menghitung Komponen Nilai Operator dan Ekspresi\nNilai UTS = Nilai UTS dikali dengan 20%\nNilai UAS = ";	
	cout<<"Nilai UAS dikali dengan 25%\nNilai Tugas Mandiri = Nilai Tugas Mandiri dikali dengan 20%\n";
	cout<<"Nilai Tugas Proyek = Nilai Tugas Proyek dikali dengan 20%\nKehadiran = Nilai Kehadiran dikali dengan 15%\n\n";
	cout<<"-Nilai Akhir = Tugas Mandiri/kuis+Tugas Proyek+UTS+UAS+Kehadiran-\n\n";
	cout<<"-Final Score Nilai Akhir Nilai Konversi\n > 85 (*) memperoleh nilai A (4.00)\n 81 - 85 memperoleh nilai A - (3.75)\n 76 - 80 memperoleh nilai B+ (3.50)\n";
	cout<<" 71 - 75 memperoleh nilai B (3.00)\n 66 - 70 memperoleh nilai B- (2.75)\n 61 - 65 memperoleh nilai C+ (2.50)\n 51 - 60 memperoleh nilai C (2.00)\n";
	cout<<" 45 - 50 memperoleh nilai D (1.00)\n < 45 memperoleh nilai E (0.00)\n ket: (*)mahasiswa kehadirannya >90%, dan tidak ada komponen nilai bernilai Nol\n\n";
	cout<<"/////////////////////////////////////////////////////////////////////////////////////////////////////////////// \n\n";
	
	cout<<"Masukkan larik/array Jumlah Mahasiswa : ";
	cin>>SizeArray;
	string Mahasiswa [SizeArray][6];
	cout<<"Input: \n\n\nStambuk\nNilai UTS\nNilai UAS\nNilai Tugas Mandiri\nNilai Tugas Proyek\nKehadiran\n\n\n";

	for(int i = 0; i < SizeArray; i++){
		cout<<"Input data Ke-"<<i+1<<"\n";
		for(int j = 0; j < 6; j++){
			cin>> Ubah;
			Mahasiswa[i][j] = Ubah;
		}
	}

	label:

		cout<<"Input Stambuk Yang Ingin Dicari : ";
		cin>> ke2;
		for(x = 0; x < SizeArray; x++){
			ke1 = Mahasiswa[x][0];
			if(ke1.compare(ke2) == 0){
				flag = true;
				break;
			}
		}
	
		if(flag == true){
		for(y = 1; y < 6; y++){
			temp[y] = stoi(Mahasiswa[x][y]);
		}
		printf("\nNilai UAS = %d, Nilai UTS = %d, Nilai Tugas Mandiri = %d, Nilai Tugas Proyek = %d, Kehadiran = %d", temp[1],temp[2],temp[3],temp[4],temp[5]);
		NilaiAkhir = Hitung(temp);
		cout<<"\nNilai Akhir = " << NilaiAkhir;
		Huruf(NilaiAkhir);
		}
		else{
			cout<<"Data Mahasiswa Tidak Ada\n";
		}
	cout<<"\n/////////////////////////////////////////////////////////////////////////////////////////////////////////////// \n\n";
	cout<<"Lanjut atau akhiri :\n1.Ya\n2.Tdk\n";
	cin>> Flag;
	
	if(Flag == 1){
		goto label;
	}
	else {
		return 0;
	}	
}

// Diatas Ini adalah File cpp sebagai program utama untuk mengeksekusi fungsi tersebut dgn nama file "Main_Kasus1.cpp"

// ----------------------------------------------------------------------------------------------------------------------------------------------
