#include <iostream>
#include <math.h>
using namespace std;


void nhap(float &x){
    cin>>x;
}
void nhapt(int &n){
    cin>>n;
}
int tangg(int n){
  return n+=1;
}
int giamm(int n){
    return n-=1;

}
float tinhbt(float x, int n){
    if(n==1){
        return 0;
    }
    
    else{
        return (pow(x,n))/pow(3,n-1) + tinhbt(x, n-1);
    }
}
int tinhtongchan(int n, int m){
    int sum=0;                                                                                          
    for(int i =n; i<=m; i++){
        if(i>5&& i%2==0){
          sum+=i;
        }
    
    }
    return sum;
}
int main(){
    float x;
    int n,m1;
    cout <<"Nhap x: ";
    nhap(x);
    cout <<"\nNhap n: ";
    nhapt(n);
    cout <<"\nNhap m: ";
    nhapt(m1);
    cout<<"\nGia tri n sau khi tang len 1 don vi:"<<tangg(n);
    cout<<"\nGia tri m sau khi giam xuong 1 don vi:"<<tangg(m1);
    float result = 2018*pow(x,n);
    cout<<"\nGia tri cua bieu thuc P la: "<<tinhbt(x,n)+result;
    cout<<"\nTong cac so chan lon hon 5 trong [n,..m] la "<<tinhtongchan(n,m1);

}