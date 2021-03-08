#include<stdio.h>
#include<conio.h>
struct Vehicle
 {
 int roda;
 char nama[20];
 char warna[10];
} v1 = {4,"Lamborghini","Putih"};
int main ()
{
printf ("Jumlah Roda Kendaraan : %d\n",v1.roda);
printf("Nama Kendaraan : %s\n",v1.nama);
printf("Warna Kendaraan : %s\n",v1.warna);
getch();
}
