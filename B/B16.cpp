#include<iostream>
using namespace std ;

int main()
{
    int a , b , c ;
    cin >> a >> b >> c ;
    bool check = false ;
    if (a == b && a == c && b == c)
        check = true ;
    cout << boolalpha << check ;
}
