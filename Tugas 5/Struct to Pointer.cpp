#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	struct date
	{
		short int dd, mm, yy;

	}join_date = {17, 11, 2019};

	date *date_ptr;
	date_ptr = &join_date;
// 13020190019 Muhammad Fahmi
	cout<<"-------------------------------------------------------------------------"<<endl;
	cout<<"Menampilkan Struktur Element menggunakan Struktur Variable\n";
	cout<<"-------------------------------------------------------------------------"<<endl;
	cout<<"Tanggal Kasus pertama COVID19\n";
	cout<<"dd = "<<join_date.dd<<", mm = "<<join_date.mm<<", yy = "<<join_date.yy<<"\n";
	cout<<"-------------------------------------------------------------------------"<<endl;
	cout<<"\nMenampilkan Struktur Element menggunakan Struktur Pointer\n";
	cout<<"-------------------------------------------------------------------------"<<endl;
	cout<<"Tanggal Kasus pertama COVID19\n";
	cout<<"dd = "<<date_ptr->dd<<", mm = "<<date_ptr->mm<<", yy = "<<date_ptr->yy<<"\n";

	getch();
}
