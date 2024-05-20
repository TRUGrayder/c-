#include<iostream>
#include<math.h>
using namespace std;
int dem( int n)
{
	if(n==0)
		return 0;
	else
		return 1+ dem(n/10);
} 
main()
{
	int n;
	cout<<"\n nhap n: ";
	cin>>n;
	cout<<"\n so cac chu so trong n: "<<dem(n);
}
