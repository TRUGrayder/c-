#include<iostream>
#include<math.h>
using namespace std;
int ct(int n) 
{
	
	if(n<=2)
		return 1;
	else
	{
		int tong = 0;
 	 	for (int i = 0; i < n; i++) 
		{
    		tong= tong + ct(i) * ct(n - i - 1 );
		}
  		return tong;
	}
		
}
main()
{
	int n,i ;
	cout<<"\n nhap n: ";
	cin>>n;
	cout<<"\n so ctlan thu n: "<<ct(n);
}
