#include<iostream>
#include<math.h>
using namespace std;
float Fxn( float x, int n)
{
	if(n==0)
		return 1;
	else
		return (x/n) * Fxn(x, n-1);
}
main()
{
	int n;
	float x;
	cout<<"nhap x= ";
	cin>>x;
	cout<<"\n nhap n= ";
	cin>>n;
	cout<<"\n gia tri F(x,n)=x^n/n! la: "<<Fxn(x,n);
}
