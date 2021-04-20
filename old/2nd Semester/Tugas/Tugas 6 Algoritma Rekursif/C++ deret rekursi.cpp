#include <iostream>

using namespace std;

int x = 2;
int i;

int func(int y);

int main(){
	
	int sum=0;
	
	for (i=1;i<=5;i++){
		sum = sum+func (i) ;
	}
	cout<<"Jadi S = 2+4+6+8+10 = "<<sum;
}

int func(int y){
	
	if (y==0||y==1){
		return (2);
	}else{
		return  (x+func(y-1));
	}
}
