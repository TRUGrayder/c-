#include<iostream>
#include <string.h>
using namespace std;
char nhaptu(char *&str,int n);
/*int main(){
    
    int n=100;
    char *str;
    str = new char[n];
    gets(str);
    cout <<"Xuat chuoi: ";
    puts(str);
    cout <<"Kich thuoc ban nhap la:  "<<strlen(str)<<endl;
    cout <<endl;

   nhaptu(str,n);


}
char nhaptu(char *&str,int n){
    str = new char[n];
    cin.getline(str,n);
    cout <<str<<endl;

    cout <<"Kich thuoc thuc su ban nhap la: "<<strlen(str);// Hàm strlen(char *s) nằm trong thu viện string.h

}*/


int main(){
    
    char *str;
    str = new char[1000];
    cout <<"Moi ban nhap ho ten cua minh: "<<endl;
    cin.getline(str,1000);
    cout <<"Du lieu sau khi ban nhap la: "<<endl;
    cout <<str<<endl;
    cout <<"Kich thuoc ban nhap la: "<<strlen(str)<<endl;

    char str2[1000];
    cout <<"Moi ban nhap dia chi que quan cua minh: "<<endl;
    gets(str2);
    cout <<"Du lieu sau khi nhap la: "<<endl;
    puts(str2);
    cout <<"Kich thuoc that su khi ban nhap la: "<<strlen(str2);

    return 0;
    


    
}