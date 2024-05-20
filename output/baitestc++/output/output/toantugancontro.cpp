#include<iostream>
using namespace std;
int main(){
    int a=20;
    int b=15;
    int *pa,*pb,temp;
    pa = &a;
    pb =&b;
    temp =  *pa;
    *pa = *pb;
    *pb = temp;
    cout <<"A: "<<*pa<<" B: "<<*pb<<endl;
    cout <<"Dia chi con tro pa: "<<pa<<endl;
    pa++;
    cout <<"Dia chi con tro pa: "<<pa<<endl;
    pa = pa +4;
    cout <<"Dia chi con tro pa: "<<pa<<endl;

    return 0;
}