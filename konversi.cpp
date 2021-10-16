#include <iostream>  
using namespace std;  
int main()  
{  
int a[10], n, i;    
cout<<"masukkan nilai desimal: ";    
cin>>n;    
for(i=0; n>0; i++)    
{    
a=n%2;    
n= n/2;  
}    
cout<<"kode biner = ";    
for(i=i-1 ;i>=0 ;i--)    
{    
cout<<a[i];    
}
cout << endl;
    
}  
