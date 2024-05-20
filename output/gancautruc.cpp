#include<iostream>
#include<string.h>
using namespace std;
struct book
{
    char tentacgia[255];
    char tensach[233];
    double gia;
    int sotrang;
    
  
};
int main(){
    book b;
    cout<<"nhap Ten tac gia: ";
    gets(b.tentacgia);
    cout<<"\nNhap ten sach: ";
    gets(b.tensach);
    cout<<"\nhap so trang: ";
    cin>>b.sotrang;
    cout<<"\nNhap so gia: ";
    cin>>b.gia;

    book a =b;
   puts(a.tentacgia);
    cout<<"\nNhap ten sach: ";
    puts(a.tensach);
    cout<<"\nhap so trang: ";
   cout<<a.sotrang;
    cout<<"\nNhap so gia: ";
    cout<<a.gia;
    a.gia=534;
    cout <<"Gia sach b: "<<b.gia;



}