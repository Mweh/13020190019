#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	string line;
	ifstream myfile("13020190019MuhammadFahmi.txt"); 

while (getline(myfile,line)){
	cout << line << '\n';
}

myfile.close();

return 0;
	
}
