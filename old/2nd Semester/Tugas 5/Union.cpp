#include <iostream>
 
using namespace std;
 
union SulSel 
{
    float Makassar, Jumlah; 
 
int main()
{
    SulSel JumlahCOVID; 
 
    JumlahCOVID.Makassar=69;
 // 13020190019 Muhammad Fahmi
    JumlahCOVID.Jumlah = JumlahCOVID.Makassar  ;
 
    cout << "Jumlah Pasien penderita COVID19 adalah = " << JumlahCOVID.Jumlah;
 
}
