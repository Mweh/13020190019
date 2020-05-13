#include <iostream> 

using namespace std; 

void DataNilai(int Data[], int n); 
void InsertionSorting(int Data[], int n) ;

int main() 
{ 
	int Data[] = {69, 3, 6, 55, 99, -5}, i; 
	int n = sizeof(Data)/sizeof(Data[0]); 
	

	cout << "Data yang ingin di Ascending: \n"; 
	DataNilai(Data, n); 
	
	cout << "\nJumlah Data: \n"<<n<<endl;

	InsertionSorting(Data, n);  
	cout << "\nData yang sudah di Ascending: \n"; 
	DataNilai(Data, n); 
	
} 

void DataNilai(int Data[], int n) 
{ 
	int i; 
	for (i = 0; i < n; i++) 
		cout << Data[i] << " "; 
	cout << endl; 
} 

void InsertionSorting(int Data[], int n) 
{ 
	int i, Kunci, j; 
	for (i = 1; i < n; i++) 
	{ 
		Kunci = Data[i]; 
		j = i - 1; 

		while (j >= 0 && Data[j] > Kunci) 
		{ 
			Data[j + 1] = Data[j]; 
			j = j - 1; 
		} 
		Data[j + 1] = Kunci; 
	} 
} 
