#include<iostream>
#include<string.h>
using namespace std;
int main(){
    /*char str1[100],str2[100];
    strcpy(str1,"Hello trung loc");
    strcpy(str2," chao buoi sang nhe!");
    cout <<"Chuoi 2 noi vao chuoi 1 se co hinh dang sau: "<<endl;
    strcat(str1,str2);// Nối chuỗi s2 vào chuỗi s1
    puts(str1);
    cout <<endl;
    strncat(str1,str2,8);// Nối n kí tự đầu tiên cua chuỗi s2 vào chuỗi s1
    cout <<str1;*/
    char ho[20],ten[20];
    cout <<"Moi ban nhap ho cua minh: ";
    gets(ho);
    cout <<"\nMoi ban nhap ten cua minh: ";
    cin.getline(ten,20);
    cout <<"Ban da nhap ten ban thanh cong! ";
    strcat(ho,ten);
    cout <<ho;




    
   

    return 0;
}