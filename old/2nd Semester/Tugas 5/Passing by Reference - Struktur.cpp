#include <iostream>

using namespace std;

void ValTest (int parm1, int parm2)
{
    parm1 = 33;
    parm2 = 44;
}

void PtrTest (int *parm1, int *parm2)
{
    *parm1 = 55;
    *parm2 = 66;
}

// Parameters are passed by reference
void RefTest (int &parm1, int &parm2)
{
    parm1 = 77;
    parm2 = 88;
}
// 13020190019 Muhammad Fahmi
int main ()
{
    int val1 = 0, val2 = 0;
    int val3 = 0, val4 = 0;
    int val5 = 0, val6 = 0;

    ValTest(val1, val2);
    cout << "val1 = " << val1 << ", val2 = " << val2 << endl;

    PtrTest(&val3, &val4);
    cout << "val3 = " << val3 << ", val4 = " << val4 << endl;

    RefTest(val5, val6);
    cout << "val5 = " << val5 << ", val6 = " << val6 << endl;

}

