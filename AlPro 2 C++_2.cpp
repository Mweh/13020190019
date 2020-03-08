#include <iostream>
using namespace std;
int main(){
	int i,j,k;
	int dus[3][3]={(2,4,6),(8,10,12),(14,16,18)};
	
	cout<<"jumlah dus = 9"<<endl;
	
	cout<<"nomor dus ";
	for(i=0;i<9;i++){
		cout<<(i+1)*2<<" ";
	}
	cout<<"\n";
	j=1;
	for(i=0;i<3;i++){
		k=(i+1)*2;
		dus[i][0]=k;
		cout<<"nomor dus "<<j++<<" : "<<dus[i][0]<<"\n";
	}
	j=4;
	for(i=0;i<3;i++){
		k=(i+4)*2;
		dus[i][1]=k;
		cout<<"nomor dus "<<j++<<" : "<<dus[i][1]<<"\n";
	}
	j=7;
	for(i=0;i<3;i++){
		k=(i+7)*2;
		dus[i][2]=k;
		cout<<"nomor dus "<<j++<<" : "<<dus[i][2]<<"\n";
	}
}
