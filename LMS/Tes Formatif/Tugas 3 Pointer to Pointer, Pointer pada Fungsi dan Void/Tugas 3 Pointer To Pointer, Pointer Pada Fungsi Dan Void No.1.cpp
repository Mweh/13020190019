#include <stdio.h>

int main () {
   int  var = 2304;
   int  *ptr;
   int  **pptr;

   // pointer pertama mengambil lokasi variabel
   ptr = &var;

   // pointer kedua mengambil lokasi pointer pertama
   pptr = &ptr;

   // output isi variabel dan pointer
   printf("Nilai dalam var : %d\n",var);
   printf("Nilai Yang Tersimpan Dalam *ptr : %d\n",*ptr);
   printf("Nilai Yang Tersimpan Dalam **pptr : %d\n",**pptr);
}
