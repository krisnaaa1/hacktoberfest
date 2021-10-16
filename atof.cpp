#include <iostream>
#include <stdlib.h>
using namespace std;
main(){
	char jari[5];
	int hasil;
	
	cout << "Masukkan jari jari lingkaran : ";
	cin >> jari;
	hasil = atof(jari);
	cout << hasil*hasil*3.14;
	}

