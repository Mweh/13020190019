#include<iostream>
using namespace std;

struct PasienCOVID
{
              int Id;
              char Nama[25];
              int Umur;
              long Gaji;
};

int main()
{
    int i;
    PasienCOVID Emp[ 3 ];         //Statement   1

    for(i=0;i<3;i++)
    {

    cout << "\nInput info dari " << "PasienCOVID " << i+1;

    cout << "\n\tInput Id : ";
    cin >> Emp[i].Id;

    cout << "\n\tInput Nama : ";
    cin >> Emp[i].Nama;
// 13020190019 Muhammad Fahmi
    cout << "\n\tInput Umur : ";
    cin >> Emp[i].Umur;

    cout << "\n\tInput Gaji : ";
    cin >> Emp[i].Gaji;
    }

    cout << "\nInfo dari PasienCOVIDs";
    for(i=0;i<3;i++)
    cout << "\n"<< Emp[i].Id <<"\t"<< Emp[i].Nama <<"\t"
        << Emp[i].Umur <<"\t"<< Emp[i].Gaji;


}
