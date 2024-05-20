#include <iostream>
using namespace std;
int main(){
    int *p;
    p = new int;// cấp phát bộ nhớ cho con trỏ
    *p =100; //gắn giá trị 100 tại ô nhớ mà con trỏ p trỏ tới
    cout <<"dia chi tai con tro p :"<<p<<endl;
    cout <<"Gia tri ma con tro p tro den: "<< *p;
    delete p;
    return 0;




}