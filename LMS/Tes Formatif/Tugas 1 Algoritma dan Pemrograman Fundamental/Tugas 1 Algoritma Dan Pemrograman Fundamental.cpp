#include <iostream>
using namespace std;

int main(){
	int x,sum,a;
	int X[x];
	cout<<"Jumlah Bilangan = ";cin>>x;
	for(a = 0;a<x;a++){
		cin>>X[a];
	}
	for(a = 0;a<x;a++){
		sum = sum + X[a];
	}
	cout<<"Hasil Penjumlahan Bilangan = "<<sum;
}
