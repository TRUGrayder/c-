#include <iostream>
using namespace std;
int main(){
    int a=23;
    int b=433 ;
    int *p,*x;
    p= &a;
    x=&b;
    int temp = *p;
    *p = *x;
    *x = temp;
    cout << "gia tri cua a la : "<<a<<endl;
    cout <<" gia tri cua b la: "<<b;
    return 0;
    
}