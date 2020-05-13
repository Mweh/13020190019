#include <iostream> 

using namespace std; 

int Cari(int Data[], int n, int x);

int x;

int main() 
{ 
	int Data[] = {69, -2, 5, 0 }; 
	
	cout<<"Datanya yang terdaftar adalah " <<Data[0]<<", "<<Data[1]<<", "<<Data[2]<<", "<<Data[3];
	cout<<"\nInput Data yang ingin dicari: ";
	cin>>x; 
	int n = sizeof(Data) / sizeof(Data[0]); 
	int Hasil = Cari(Data, n, x); 
(Hasil == -1)? cout<<"Datanya tidak ditemukan"
				:cout<<"Datanya terdapat pada urutan ke - " <<Hasil+1; 
} 

int Cari(int Data[], int n, int x) 
{ 
	int i; 
	for (i = 0; i < n; i++) 
		if (Data[i] == x) 
			return i; 
	return -1; 
} 
