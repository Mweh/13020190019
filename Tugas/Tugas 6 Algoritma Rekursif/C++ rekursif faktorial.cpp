#include <iostream>

using namespace std;

int x;

int factorial(int y);

int main(){
	
	int sum;
	
	cin>>x;
	sum = factorial(x);
	cout<<"Jadi Faktorial dari "<<x<<"! = "<<sum;
}

int factorial(int y){
	
	if (y==0||y==1){
		return (1);
	}else{
		return (y*factorial(y-1));
	}
}


