#include <iostream>
#include <fstream>

using namespace std;

int main(){

	ofstream datamhs;

	datamhs.open("datamhs.txt",ios::out);
	datamhs << "stambuk = \nnama mahasiswa = \nkelas = \nipk = ";
	
	datamhs.close();

}
