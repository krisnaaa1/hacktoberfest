#include <iostream>
#include <stdlib.h>
using namespace std;
main (){
	int x,a;
	cout << "Masukkan bilangan: ";
	cin >> a;
	x=labs(a);
	cout << "Nilai mutlak dari "<< a << " adalah " << x;
}
