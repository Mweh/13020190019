#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ofstream myfile;
    myfile.open("13020190019MuhammadFahmi.txt",ios::app);
    myfile << "saya belajar membuat file";
    myfile.close();

return 0;

}
