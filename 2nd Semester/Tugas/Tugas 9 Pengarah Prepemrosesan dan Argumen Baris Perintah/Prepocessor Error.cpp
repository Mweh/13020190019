#include <iostream>
#define phi 3.14 
#error //ini adalah program yang menggunakan preprocessor error

using namespace std;

int main(){
	
	float r, keliling;
	
	cout<<"Input Radius: ";
	cin>>r;
	keliling = 2*phi*r;
	
	cout<<"Keliling Lingkaran: "<<keliling;
	
}
