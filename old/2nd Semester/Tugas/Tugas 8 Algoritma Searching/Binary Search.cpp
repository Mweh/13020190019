#include <iostream> 

using namespace std; 

int CariBinary(int Data[], int l, int r, int x);

int x;

int main() 
{ 
	int Data[] = {-2, 0, 5, 69 }; //harus berurut kyk Ascending
	cout<<"Datanya yang terdaftar adalah " <<Data[0]<<", "<<Data[1]<<", "<<Data[2]<<", "<<Data[3];
	cout<<"\nInput Data yang ingin dicari: ";
	cin>>x; 
	int n = sizeof(Data) / sizeof(Data[0]); 
	int hasil = CariBinary(Data, 0, n - 1, x); 
(hasil == -1)? cout<<"Datanya tidak ditemukan"
				:cout<<"Datanya terdapat pada urutan ke - " <<hasil+1;
} 

int CariBinary(int Data[], int l, int r, int x) 
{ 
	while (l <= r) { 
		int m = l + (r - l) / 2; 

		if (Data[m] == x) 
			return m; 

		if (Data[m] < x) 
			l = m + 1; 

		else
			r = m - 1; 
	} 
	return -1; 
}
