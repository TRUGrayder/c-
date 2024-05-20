#include<iostream>
#include<math.h>

struct diem 
{
    double a;
    double b;

};
void Nhaptoado (diem arr[],int n);
double khoangcachdiem(diem A, diem B);
double khoangcachcacdiem(diem arr[],int n);
void xuattoado(diem arr[],int n);
using namespace std;
int main(){
    diem c ;diem d;
    cout <<"Vui long nhap toa diem thu nhat la: "<<endl;
    cout <<"\nToa do x: \n";
    cin>>c.a;
    cout <<"\nToa do y: \n";

    cin >>c.b;
    cout <<"\nVui long nhap toa diem thu 2 la: "<<endl;
    cout <<"Toa do x: \n";

    cin >>d.a;
    cout <<"\nToa do y: \n";
    cin >>d.b;
    cout <<"Do dai cua hai diem A("<<c.a<<","<<c.b<<")"<<" ,B("<<d.a<<","<<d.b<<")"<<endl;

    double kc=khoangcachdiem(c,d);
    cout <<kc;
    int n; 
    cout<<"Mo ban nhap so diem : \n";
    cin>>n;
    diem arr1[n];
    Nhaptoado(arr1,n);
    xuattoado(arr1,n);
    double kc2 =khoangcachcacdiem(arr1,n);
    cout <<"Do dai cac diem: "<<kc2;

    
    return 0;
}
double khoangcachdiem(diem A , diem B){

        return sqrt( pow(B.a-A.a,2)+pow(B.b-A.b,2));
        
}
void Nhaptoado(diem arr[],int n){
    for (int i=0; i<n; i++){
        cout<<"Nhap toa do thu "<<i<<endl;
        cout<<"Nhap toa x: ";
        cin>>arr[i].a;
        cout<<"Nhap toa do y: ";
        cin>>arr[i].b;

    }



}
double khoangcachcacdiem(diem arr[],int n){
    double tongkc1=0;
    for (int i =0;i<n-1;i++){
       double kc1 = khoangcachdiem(arr[i],arr[i+1]);
            tongkc1+=kc1;
    }
    return tongkc1;

}
void xuattoado(diem arr[],int n)
{
    for (int i =0; i<n; i++){
        cout <<"Do dai cua hai diem "<<i<< " ("<<arr[i].a<<","<<arr[i].b<<")"<<endl;
        
    }
}


