#include <iostream>
using namespace std ;

int main()
{
    int N ;cin >> N ;
    int i = 1 ;
    while (i<=N)
    {
        for (int j = 0 ; j < i ; j++)
        {
            cout << "*" ;
            if (j ==  i - 1)
                cout << endl ;
        }
        i++ ;
    }
}
