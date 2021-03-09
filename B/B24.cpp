#include <iostream>
using namespace std ;

int main()
{
	int d , m , y , a , b ,c , s ;
	cin >> d >> m >> y ;
	a = y - (14-m)/12 ;
	b =  a + a/4 -a/100+a/400 ;
	c =  m + 12 *((14-m)/12) - 2 ;
	s =  (d+b+31*c/12)%7 ;
	switch (s){
	case 0:
		cout << "sunday" ;
		break;
	case 1:
		cout << "monday" ;
		break;
	case 2:
		cout << "tuesday" ;
		break;
	case 3:
		cout << "wednesday" ;
		break;
	case 4:
		cout << "thursday" ;
		break;
	case 5:
		cout << "friday" ;
		break;
	case 6:
		cout << "saturday" ;
		break;
	}
}
