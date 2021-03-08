#include <iostream> 

using namespace std; 

void DataNilai(int Data[], int ukuran); 
void SelectionSorting(int Data[], int n);
void Tukar(int *xp, int *yp) ;

int main() 
{ 
int Data[] = {69, 3, 6, 55, 99, -5}; 
	int n = sizeof(Data)/sizeof(Data[0]); 

	printf("Data yang ingin di Descending: \n"); 
	DataNilai(Data, n); 
	
	cout << "\nJumlah Data: \n"<<n<<endl;

	SelectionSorting(Data, n);

	printf("\nData yang sudah di Descending: \n"); 
	DataNilai(Data, n); 
} 

void DataNilai(int Data[], int ukuran) 
{ 
	int i; 
	for (i=0; i < ukuran; i++) 
		cout << Data[i] << " "; 
	cout << endl; 
} 

void SelectionSorting(int Data[], int n) 
{ 
	int i, j, min_idx; 

	for (i = 0; i < n-1; i++) 
	{ 
		min_idx = i; 
		for (j = i+1; j < n; j++) 
		if (Data[j] > Data[min_idx]) 
			min_idx = j; 

		Tukar(&Data[min_idx], &Data[i]); 
	} 
} 

void Tukar(int *xp, int *yp) 
{ 
	int temp = *xp; 
	*xp = *yp; 
	*yp = temp; 
} 

