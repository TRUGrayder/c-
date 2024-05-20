#include<iostream>
using namespace std;
int main(){
    int *p;
     p = new int;//cấp  phat bo nho cho con tro p
    *p=10;//gan gia tri =10 tai o nho ma p dang tro toi
    cout <<"Dia chi con tro p:"<<p<<endl;
    cout <<"Gia tri cua p: "<<*p<<endl;
    delete p;//Bi loi memory leak neu khong thu hoi bo nho
    return 0;
}