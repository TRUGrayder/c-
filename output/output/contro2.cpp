#include <iostream>
using namespace std;
int main(){
int m =1000;
    int*p = &m;
    cout << "Gia tri cua cua bien m ="<<m<<endl;

    cout << "dia chi cua bien m = "<< &m<<endl;
    cout << "Gia tri cua cua con tro p ="<<*p<<endl;
    cout << "Dia chi cua cua con tro p ="<<p<<endl;
    *p =10;
    int *k=p;
    *k=2342;
    cout<< "gia tri cua con tro p = "<< *p<<endl;
    cout << "Gia tri cua cua bien m ="<<m<<endl;
}