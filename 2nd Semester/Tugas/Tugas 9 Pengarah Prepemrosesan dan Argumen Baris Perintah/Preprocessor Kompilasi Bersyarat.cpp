#include <iostream>
#define XY 1

using namespace std;
 
int main(){
 
#ifdef XY
	cout << "ter define XY\n";
#else
    cout << "tdk ter define XY\n";
#endif
 
#ifndef XY
    cout << "tdk ter define XY\n";
#elif XY == 1
    cout << "ter define XY = 1\n";
#endif
 
#if !defined(YX) && (XY > 0)
    cout << "ter define selain YX dan define XY > 0";
#else
    cout << "Kondisi salah";
#endif

}
