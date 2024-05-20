#include <iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;
void nhapmang( int *&a , int n);
void xuatmang( int *a, int n);
void sapxeptangdan(int *a , int n);
void sapxepgiamdan(int*&a, int n);
int main(){
    int *a;
    int n =10;
    cout <<"Mang con tro ngau nhien: "<<endl;
     nhapmang(a,n);
     xuatmang(a,n);
     cout <<endl;
    cout <<"Mang duoc sap xep lai theo chieu giam dan: "<<endl;
     sapxeptangdan(a,n); 
     cout <<endl;
     cout <<"Mang duoc sap xep theo chieu tang dan: "<<endl;
     sapxepgiamdan(a,n);

     return 0;

}
void nhapmang( int *&a , int n){
    for (int i =0; i< n; i++){
       
        srand(time(NULL));
        a = new int[n];
        for (int i =0 ;i<n;i++){ 
        *(a+i)= rand()%101;
        }
    }
}
void xuatmang( int *a, int n){

for (int i=0; i<n;i++){
    cout << *(a+i)<<"\t";
}
}
void sapxeptangdan(int *a , int n){

    for (int i=0 ; i<n-1; i++){
        for (int j =1; j<n; j++){
            if (*(a+i)>= *(a+j)){
                int temp = *(a+i);
                *(a+i)= *(a+j);
                *(a+j)= temp;
            }
        }
    }
    for (int i= 0; i<n; i++){
        cout <<*(a+i)<<"\t";
    }
}
void sapxepgiamdan(int*&a, int n){
      for (int i=0 ; i<n-1; i++){
        for (int j =1; j<n; j++){
            if (*(a+i)<= *(a+j)){
                int temp = *(a+i);
                *(a+i)= *(a+j);
                *(a+j)= temp;
            }
        }
    }
    for (int i= 0; i<n; i++){
        cout <<*(a+i)<<"\t";
    }

}
 
 
