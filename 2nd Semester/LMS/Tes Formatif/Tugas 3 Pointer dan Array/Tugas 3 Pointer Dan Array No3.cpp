#include <stdio.h>
#include <iostream>
int main()
{
    int f=0; //Deklarasi Variabel
    int g=0;
    int h=1;
    int a[3][3] = {{2,4,6}, {8,10,12}, {14,16,18}}; //Deklarasi Dan Pengisian Array
    int *p = &a[f][g]; //Deklarasi Pointer
    //Looping Untuk Output Array
   	for (f = 0; f < 3; f++){
    	for(g=0;g<3;g++){
    		printf("Isi Dos Ke %d : ",h); //Output Dos
    		h++;
       		printf("%d",*p); //Output Pointer
       		printf("\n");
       		p++; 
    	}
	}
}

