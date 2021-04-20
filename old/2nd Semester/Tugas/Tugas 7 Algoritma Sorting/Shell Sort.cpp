#include <iostream> 

using namespace std; 

void DataNilai(int Data[], int n);
int ShellSorting(int Data[], int n);

int main() 
{ 
	int Data[] = {69, 3, 6, 55, 99, -5}, i; 
	int n = sizeof(Data)/sizeof(Data[0]); 
	

	cout << "Data yang ingin di Ascending: \n"; 
	DataNilai(Data, n); 
	
	cout << endl<<"\nJumlah Data: \n"<<n<<endl;

	ShellSorting(Data, n); 
	cout << "\nData yang sudah di Ascending: \n"; 
	DataNilai(Data, n); 
	
} 

void DataNilai(int Data[], int n) 
{ 
	for (int i=0; i<n; i++) 
		cout << Data[i] << " "; 
} 

int ShellSorting(int Data[], int n) 
{ 
	for (int Jarak = n/2; Jarak > 0; Jarak /= 2) 
	{ 
		for (int i = Jarak; i < n; i += 1) 
		{ 
			int temp = Data[i]; 
			int j;			 
			for (j = i; j >= Jarak && Data[j - Jarak] > temp; j -= Jarak) 
				Data[j] = Data[j - Jarak]; 
			Data[j] = temp; 
		} 
	} 
} 
