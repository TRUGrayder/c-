#include<iostream>
#include<math.h>
using namespace std;
float GT( int n)
{
	if(n==1)
		return 1;
	else
		return n * GT(n-1);
}
main()
{
	int a,b;
	cout<<"\n nhap 2 so nguyen a,b: ";
	cin>>a>>b;
	float q= (GT(a)+GT(b))/GT(a+b);
	cout<<"\n (a!+b!)/(a+b)!= "<<q;
}
