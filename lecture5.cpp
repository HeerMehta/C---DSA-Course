#include <iostream>

using namespace std;

int main()
{
    int a = 8;
    int b = 1;

    cout << (a&b) << endl; //0
    cout << (a|b) << endl; //9
    cout << (~a) << endl; //-9
    cout << (a^b) << endl; //9

    cout << (17<<2) << endl; //68
    cout << (30>>3) << endl; //3

    int i = 10;

    //10+1 = 11 --> 11
    cout << ++i << endl;
    //11 --> 11+1=12
    cout << i++ << endl;
    //12-1=11 --> 11
    cout << --i << endl;
    //11 --> 11-1=10
    cout << i-- << endl;
    //10
    cout << i << endl;


    return 0;
}
 