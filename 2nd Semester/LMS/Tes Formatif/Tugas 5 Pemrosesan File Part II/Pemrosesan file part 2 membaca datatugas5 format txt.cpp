#include <iostream>
#include <fstream>

using namespace std;

int main(){

string line;

	ifstream myfile("datatugas5.txt"); 
while (getline(myfile,line)){
	cout << line << '\n';
}

myfile.close();
	
}
