#include<stdio.h>
 
struct orang
{
    char nama[20];
    int umur;
    char tl[10];
};
 
struct siswa
{
    struct orang info;
    long stambuk_no;
    float nilai;
};
 
int main()
{
    struct siswa s1;
 
    printf("Detail Siswa: \n\n");
 
    printf("Masukkan Nama: ");
    scanf("%s", s1.info.nama);
 
    printf("Masukkan Umur: ");
    scanf("%d", &s1.info.umur);
 
    printf("Masukkan Tanggal Lahir: ");
    scanf("%s", s1.info.tl);
 
    printf("Masukkan Stambuk: ");
    scanf("%d", &s1.stambuk_no);
 
    printf("Masukkan Nilai: ");
    scanf("%f", &s1.nilai);
 
    printf("\n*******************************\n\n");
 
    printf("Nama: %s\n", s1.info.nama);
    printf("Umur: %d\n", s1.info.umur);
    printf("Tanggal Lahir: %s\n", s1.info.tl);
    printf("Stambuk: %d\n", s1.stambuk_no);
    printf("Nilai: %.2f\n", s1.nilai);
 
    return 0;
}
