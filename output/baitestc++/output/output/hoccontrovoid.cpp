#include<iostream>
using namespace std;
int main(){
    int a=5;
    float b=8.9;
    int *pa =&a;
    float *pb =&b;
    cout <<"gia tri con tro den pa= "<<*pa<<endl;
     cout <<"gia tri con tro den pb= "<<*pb<<endl;
    void *p;
    p=&a;
    (*(int*)p)=10;
    cout <<"a= "<<a<<endl;
    p=&b;
    (*(float*)p)=5.8;
    cout <<"b= "<<b<<endl;

    int *y=new int;
    *y =10;
     
    cout <<"Gia tri cua o nho y quan ly = "<<*y<<endl;


    return 0;
}