#include <iostream>
#include <cstring>
using namespace std;

main()
{
    string f0 = "a" , f1 = "b" , f2;
    cout << "f(0) = " << f0 <<"    " << "f(1) = " << f1 << "   " ;
    for (int i = 2 ; i  <= 12 ; i++)
    {
        f2 = f1 + f0 ;
        cout << "f( "<< i << ")" << '=' << f2 << "   " ;
        f0  = f1 ;
        f1 = f2 ;
    }

}
