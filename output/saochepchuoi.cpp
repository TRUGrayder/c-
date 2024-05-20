#include<iostream>
#include <string.h>
using namespace std;
int main(){
    char *str;
    str= new char[50];
    char str2[50];
    cout <<"Moi ban nhap chuoi 1: "<<endl;
    cin.getline(str,50);
    cout <<endl;
    cout <<"Chuoi 2 duoc copy tu chuoi 1 la: "<<endl;
    strcpy(str2,str);// Nằm trong thư viện string.h
    puts(str2);
    cout <<endl;

    char str3[50];
    cout <<"Chuoi 2 sao chep vao chuoi 3 chi duoc 10 ki tu: "<<endl;
    strncpy(str3,str2,10);//copy từ chuỗi nguồn vào chuỗi đích và quy định bao nhieu kí tự mình muốn// Nằm trong thư viện string.h
    cout <<"Chuoi 3 sau khi duoc quy dinh: "<<endl;
    cout <<str3;
    
}