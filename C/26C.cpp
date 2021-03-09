#include <iostream>
using namespace std ;

int main()
{
    int N, tong = 0 , Max = 0  , Min; cin >> N ;
    int arr[N] ;
    for (int i = 0 ; i < N ;i++){
        cin >> arr[i] ;
        Min = arr[0] ;
        tong += arr[i] ;
        if (arr[i] >= Max)
            Max = arr[i] ;
        if (arr[i] <= Min)
            Min = arr[i] ;
    }
    cout << "Mean : " << float(tong*1.00/N) << endl ;
    cout << "Max : " << Max << endl ;
    cout << "Min : " << Min ;
}
