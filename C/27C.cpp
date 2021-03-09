#include <iostream>
using namespace std ;

int main()
{
    int N, a = -1 ;
    while(1)
    {
        cin >> N ;
        cout << (N%5 == 0 && N > 0) ? N/5 : a ;
        if (N == -1)
        {
            cout << "bye" ;
            break ;
        }
    }
}
