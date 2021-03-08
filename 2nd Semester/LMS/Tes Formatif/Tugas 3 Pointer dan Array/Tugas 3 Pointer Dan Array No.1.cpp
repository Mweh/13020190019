#include <stdio.h>

void swap (int *a, int *b); //Deklarasi Fungsi yang akan menukar 2 variabel
int main() {
  int x = 25; 		//Deklarasi Variabel Yang Akan Digunakan
  int y = 100;
  printf("x adalah %d, y adalah %d\n", x, y);  //Pengeluaran Isi Variabel
  
  swap(&x, &y); //Pemanggilan Fungsi Penukaran
  printf("x adalah %d, y adalah %d\n", x, y); //Pengeluaran Isi Variabel Setelah Pertukaran
  }
void swap (int *a, int *b) {
	/*Disini Kita Mendefinisikan Fungsi Yang Mengambil 2 Integer
	 Sebagai Parameter*/
  int temp; //Deklarasi Variabel Penympanan Sementara
  temp = *a;
  *a = *b;
  *b = temp;
  }
