#include <iostream>
using namespace std;

int main(){
	
	int sum, n, i;
	int I[n];
	
	cout << "jumlah bilangan = ";
	cin >> n;
	
	for (i=0;i<n;i++){
		cin >> I[i];
	}
	for (i=0;i<n;i++){
		sum = sum + I[i];
}
	cout << "Hasil Penjumlahan = "<<sum;
}
