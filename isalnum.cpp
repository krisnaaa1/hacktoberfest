#include <iostream>
#include <ctype.h>
using namespace std;
main(){
	char x;
	cout << "Masukkan Karakter ";
	cin >> x;
	if (isalnum(x)){
		cout << "Merupakan alphanumerik";
	}else{
		cout << "Bukan alphanumerik";
	}
}
