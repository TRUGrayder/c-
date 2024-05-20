#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
void nhapmatran( int **&a, int n);
void xuatmatran(int **a, int n);
void Maxmatran(int **a, int n);
void Minmatran(int **a, int n);
int main(){
    int **a;
    int n ;
    cout << "Ban hay nhap kich thuoc ban mong muon: "<<endl;
    cin >>n;
    cout <<"Ma tran hinh vuong ngau nhien la: "<<endl;
    nhapmatran(a,n);
    xuatmatran(a,n);
    cout <<endl;
    cout <<"Phan tu be nhat trong ma tran la: "<<endl;
    Maxmatran(a,n);
    cout << endl;
    cout <<"Phan tu lon nhat trong mang la: "<<endl;
    Minmatran(a,n);




    return 0;
}
void nhapmatran( int **&a, int n){
    srand(time(NULL));
    a = new int *[n];
    for (int i = 0 ; i<n ; i++){
        *(a+i)= new int [n] ;

           }

    for (int i =0; i<n; i++){
    for (int j =0; j<n; j++){
        *((*a+i)+j)= -50 +rand()%151;
            }
           }
}
void xuatmatran(int **a, int n){
    for (int i =0; i<n; i++){
    for (int j =0; j<n; j++){
        cout << *((*a+i)+j)<<"\t";
    }
    cout <<endl;
    
    }


}
void Maxmatran(int **a, int n){
    int m = *((*a+0)+0);

     for (int i =0; i<n; i++){
    for (int j =0; j<n; j++){

    if (m >= *((*a+i)+j) ){

        m = *((*a+i)+j);

    }

    }
    }
    cout <<m<<endl;
    


}
void Minmatran(int **a, int n){
    int m = *(*(a+0)+0);
     for (int i =0; i<n; i++){
    for (int j =0; j<n; j++){
        if (m<= *((*a+i)+j)){
            m = *((*a+i)+j);
        }

    }
}
cout <<m;
}