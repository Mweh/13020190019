#include <iostream>
#include <fstream>

using namespace std;

int main(){
   
    ofstream mhsFile;
    
    mhsFile.open("datamhs.txt",ios::out);
    mhsFile << "stambuk = 13020190019\nnama mahasiswa= Muhammad Fahmi\nkelas = A1";
   
    mhsFile.close();
    
}
