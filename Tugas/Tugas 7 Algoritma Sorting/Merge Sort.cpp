#include <iostream> 
#include<stdlib.h> 
#include<stdio.h>

using namespace std;  

void Gabung(int Data[], int l, int m, int r); 
void MergeSorting(int Data[], int l, int r);
void DataNilai(int A[], int ukuran); 
 
int main() 
{ 
	int Data[] = {69, 3, 6, 55, 99, -5}; 
	int n = sizeof(Data)/sizeof(Data[0]); 

	printf("Data yang ingin di Ascending: \n"); 
	DataNilai(Data, n); 
	
	cout << "\nJumlah Data: \n"<<n<<endl;

	MergeSorting(Data, 0, n - 1); 

	printf("\nData yang sudah di Ascending: \n"); 
	DataNilai(Data, n); 
} 

void DataNilai(int A[], int ukuran) 
{ 
	int i; 
	for (i=0; i < ukuran; i++) 
		printf("%d ", A[i]); 
	printf("\n"); 
} 

void MergeSorting(int Data[], int l, int r) 
{ 
	if (l < r) 
	{ 
		int m = l+(r-l)/2; 

		MergeSorting(Data, l, m); 
		MergeSorting(Data, m+1, r); 

		Gabung(Data, l, m, r); 
	} 
} 

void Gabung(int Data[], int l, int m, int r) 
{ 
	int i, j, k; 
	int n1 = m - l + 1; 
	int n2 = r - m; 

	int L[n1], R[n2]; 

	for (i = 0; i < n1; i++) 
		L[i] = Data[l + i]; 
	for (j = 0; j < n2; j++) 
		R[j] = Data[m + 1+ j]; 

	i = 0; j = 0; k = l; 
	while (i < n1 && j < n2) 
	{ 
		if (L[i] <= R[j]) 
		{ 
			Data[k] = L[i]; 
			i++; 
		} 
		else
		{ 
			Data[k] = R[j]; 
			j++; 
		} 
		k++; 
	} 

	while (i < n1) 
	{ 
		Data[k] = L[i]; 
		i++;k++; 
	} 

	while (j < n2) 
	{ 
		Data[k] = R[j]; 
		j++;k++; 
	} 
} 



