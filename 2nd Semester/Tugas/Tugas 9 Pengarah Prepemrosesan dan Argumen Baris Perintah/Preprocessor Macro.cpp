#include <iostream>
#define phi 3.14 //ini adalah program yang menggunakan preprocessor macro

using namespace std;

int main(){
	
	float r, keliling;
	
	cout<<"Input Radius: ";
	cin>>r;
	keliling = 2*phi*r;
	
	cout<<"Keliling Lingkaran: "<<keliling;
	
}
