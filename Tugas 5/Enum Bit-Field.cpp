#include <iostream>
#include <conio.h>

using namespace std;

enum bulan{Januari, Februari, Maret, April, Mei, Juni,
Juli, Agustus, September, Oktober, November, Desember};

struct databit
{
      unsigned db0 : 1;
      unsigned db1 : 1;
      unsigned db2 : 1;
      unsigned db3 : 1;
      unsigned db4 : 1;
      unsigned db5 : 1;
      unsigned db6 : 1;
      unsigned db7 : 1;
};

int main()
{
      union ub // byte pada union
      {
            unsigned char byte;
            databit bit;
      };

      ub ascii;
      int n; //n = nilai
      
      cout<<"----------------------------------------------------"<<endl;
	  cout<<"Bit-Field"<<endl;
      cout<<"----------------------------------------------------"<<endl;
      
	  cout<<"Input ASCII 0 sampai 255 : ";
      cin>>n;

      ascii.byte = n;
      cout<<"\n7 6 5 4 3 2 1 0 << Letak bit"<<endl;
      cout<<ascii.bit.db7<<" "<<ascii.bit.db6<<" "
            <<ascii.bit.db5<<" "<<ascii.bit.db4<<" "
            <<ascii.bit.db3<<" "<<ascii.bit.db2<<" "
            <<ascii.bit.db1<<" "<<ascii.bit.db0<<" "<<endl;

// 13020190019 Muhammad Fahmi	  
	  bulan b1,b2;
      int selisih_bulan;

      b1 = April;
      b2 = Maret;

      cout<<"----------------------------------------------------"<<endl;
      cout<<"Enum"<<endl;
      cout<<"----------------------------------------------------"<<endl;
      cout<<"Bulan pertama = April"<<endl; 
      cout<<"Bulan kedua = Maret"<<endl; 
      cout<<"\nSelisih kedua bulan di atas selama terjadinya COVID19 di Indonesia adalah "<<b1-b2<<" bulan"<<endl;


      _getche();
}


