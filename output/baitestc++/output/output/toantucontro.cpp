#include<iostream>
using namespace std;
int main(){
    int count =100;
    int *m =&count;
    cout <<"Dia chi cua bien count = "<<&count<<endl;
    cout <<"Gia chi cua bien count = "<<count<<endl;
    cout <<"Dia chi cua con tro m= "<<m<<endl;
    cout <<"Gia tri cua con tro m dang tro toi= "<<*m<<endl;
    int *x=m;
    *x=10;
    cout <<"Dia chi cua con tro x= "<<x<<endl;
    cout <<"Gia tri cua con tro x = "<<*x<<endl;
    cout <<"Dia chi cua con tro m= "<<m<<endl;
    cout <<"Gia tri cua con tro m dang tro toi = "<<*m<<endl;
    cout <<"Dia chi cua bien count = "<<&count<<endl;
    cout <<"Gia chi cua bien count = "<<count<<endl;
    return 0;
}