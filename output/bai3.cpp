#include<iostream>
#include<math.h>
using namespace std;
float Fxn(float x, int n)
{

	if(n==0)
		return 2017; 
	else
	{
		return pow(x,n) +Fxn(x,n-1);
	}	

} 
main()
{
	int n;
    float x;
	cout<<" nhap x,n: ";
	cin>>x>>n;
	cout<<"\n F(x,n)= "<<Fxn(x,n);
}
