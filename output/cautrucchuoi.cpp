#include<iostream>
using namespace std;
int main(){
    char *str="Hello";// tạo chuỗi bằng con trỏ
    cout <<str<<endl;
    char str2[]= "Trugng loc\0";
    cout <<str2<<endl;
    char  str3[]={'t','r','u','\0'};
    cout <<str3<<endl;
    char str4[10];
   // str4 = "Putin";// NHư này sẽ bị lỗi vì trong C++ ko đc gán bằng như này
    str4[0]='p';
    str4[1]='u';
    str4[2]='t';
    str4[3]='i';
    str4[4]='n';
    cout <<str4<<endl;
    return 0;
}