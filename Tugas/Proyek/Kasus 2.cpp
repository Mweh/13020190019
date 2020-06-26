// SEBELUM DIJALANKAN PASTIKAN LANG: STANDARD (-std)NYA ADALAH GNU C++ 11 DI CODE GENERATIONS - COMPILER OPTIONS
//KASUS KEDUA
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int SOA; //ukuran Array
string val; // temp input
bool flag; // Variabel Check
int x,y,Flag; // Variabel Iterator
int temp, temp2,TotalGaji;
string Gol1 = "1", Gol2 = "2", Gol3 ="3", Gol4 = "4";
string Str1, Str2, Str3;

int CalculateSalaryOG(int par1, int par2){
	
	int sum;
	
	switch(par1){
		case 1:
			sum = 3000 * par2;
			break;
			
		case 2:
			sum = 3500 * par2;
			break;
			
		case 3:
			sum = 4000 * par2;
			break;
			
		case 4:
			sum = 5000 * par2;
			break;
			
		default:
			cout<<"null\n";
	}
	
	return sum;
	
}

int CalculateSalaryOT(int par1, int par2){
	
	int sum;
	
	switch(par1){
		case 1:
			sum = 3000 * par2 * 1.5;
			break;
			
		case 2:
			sum = 3500 * par2 * 1.5;
			break;
			
		case 3:
			sum = 4000 * par2 * 1.5;
			break;
			
		case 4:
			sum = 5000 * par2 * 1.5;
			break;
			
		default:
			cout<<"null\n";
	}
	
	return sum;
	
}

int main(){
	
	cout<<"Input Jumlah Karyawan : ";
	cin>>SOA;
	string Karyawan [SOA][4];
	cout<<"Silahkan Masukkan Data Dengan Urutan: \nNIK, Nama, Golongan, Jam Kerja\n";
	
	for(int i = 0; i < SOA; i++){
		for(int j = 0; j < 4; j++){
		cin>> val;
		Karyawan[i][j] = val;
		}
	}
	
	label:
		// search data
		cout<<"Masukkan NIK Yang Ingin Ditampilkan : ";
		cin>> Str2;
		for(x = 0; x < SOA; x++){
			Str1 = Karyawan[x][0];
			if(Str1.compare(Str2) == 0){
				flag = true;
				break;
			}
		}
	
		if(flag == true){
			for(x = 0; x < SOA; x++){
				Str3 = Karyawan[x][2];
				if(Str3 == Gol1){
					temp = stoi(Gol1);
					temp2 = stoi(Karyawan[x][3]);
				}
				else if(Str3 == Gol2){
					temp = stoi(Gol2);
					temp2 = stoi(Karyawan[x][3]);
				}
				else if(Str3 == Gol3){
					temp = stoi(Gol3);
					temp2 = stoi(Karyawan[x][3]);
				}
				else if(Str3 == Gol4){
					temp = stoi(Gol4);
					temp2 = stoi(Karyawan[x][3]);
				}
				else{
					cout<<"Error";
				}
			}	
		}
		
		if(temp2 <= 40){
			TotalGaji = CalculateSalaryOG(temp, temp2);
		}
		else{
			TotalGaji = CalculateSalaryOT(temp, temp2);
		}
		
		cout<<"Total Gaji = "<< TotalGaji;

	cout<<"\nApakah Anda Ingin Menampilkan Data Karyawan Lain :\n1.Iya\n2.Tidak\n";
	cin>> Flag;
	
	if(Flag == 1){
		goto label;
	}
	else {
		return 0;
	}
	
}
