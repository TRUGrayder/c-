#include <iostream>
using namespace std;
int giaithua(int n){
    int n1= n+1;
    int sum =1;
    for (int i =1; i<n1; i++){
        sum*=i;
    }
    return sum;
}

int main(){
    int n; 
    cout <<"Nhap n: ";
    n=8;

    cout <<"Gia tri la: "<<double((giaithua(n)/(n+1))+1)/ giaithua(n);
    return 0;
}