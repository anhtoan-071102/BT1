#include <iostream>
using namespace std ;

int main()
{
    int N ; cin >> N;
    int i = N ;
    while (i >= 1)
    {
        for (int j = 1 ; j <= i ; j++)
        {
            cout << "*" ;
            if (j == i )
                cout << endl ;
        }
        i-- ;
    }
}
