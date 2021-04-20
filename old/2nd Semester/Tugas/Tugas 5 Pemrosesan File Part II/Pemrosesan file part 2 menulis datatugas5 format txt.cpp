#include <iostream>
#include <fstream>

using namespace std;

int main(){

	ofstream myfile;
	myfile.open("datatugas5.txt",ios::out);
	
	myfile << "STAY AT HOME, COVID STILL OUT THERE - Fahmi 13020190019 ";
	
	myfile.close();
	
}
