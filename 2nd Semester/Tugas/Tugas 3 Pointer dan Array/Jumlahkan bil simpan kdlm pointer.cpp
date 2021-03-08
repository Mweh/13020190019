#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *ptr;	//Deklarasi Pointer
	int n;   	//Batas Array
	int i;		//Variabel Looping
	int sum;	//Variabel Penyimpan Hasil

	printf("Masukkan Batas Array : ");
	scanf("%d",&n);

	//Deklarasi Memori Dinamis
	ptr=(int*)malloc(n*sizeof(int));

	//Input Elemen Array
	for(i=0;i<n;i++)
	{
		printf("Masukkan Elemen %02d: ",i+1);
		scanf("%d",(ptr+i));
	}

	//Output Elemen Array
	printf("\nElemen Array Yang Dimasukkan:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",*(ptr+i));
	}
	
	//Kalkulasi Nilai Hasil
	sum=0;	//Mengosongkan Nilai Sum
	for(i=0;i<n;i++)
	{
		sum+=*(ptr+i);
	}
	printf("Hasil Akhir Penjumlahan Array: %d\n",sum);
}
