#include<iostream>
#include<math.h>
using namespace std;
struct phanso{
    int tu;// a là tử số
    int mau;// b là mẫu số

};
void nhapphanso(phanso arr[], int n);
void xuatphanso(phanso arr[], int n);
phanso *congps(phanso arr[], int n);


int main(){
    int n;
    cout <<"Ban muon nhap may phan so: "<<endl;
    cin >>n;
    phanso arr1[n];
    nhapphanso(arr1,n);
    xuatphanso(arr1,n);

    phanso *ps3= congps(arr1,n);
    cout<<ps3->tu<<"/"<<ps3->mau;
    

    
    return 0;
}// cong hai phan so

void nhapphanso(phanso arr[], int n){
    for (int i =1; i<=n; i++){
        cout <<"\nNhap phan so "<<i<<endl;
        cout <<"Nhap tu:";
        cin >>arr[i].tu;
        cout <<"Nhap mau: ";
        cin>>arr[i].mau;
        
    }


}
void xuatphanso(phanso arr[], int n){
    for (int i =1; i<=n;i++){
        cout <<"Phan so "<<i<<" : " <<"("<<arr[i].tu<<"/"<<arr[i].mau<<")"<<endl;

    }

}
phanso *congps(phanso arr[], int n){
    phanso *ps3=new phanso;

    for (int i=1; i<=n; i++){
         ps3->tu= ((arr[i].tu*arr[i+1].mau)+(arr[i+1].tu*arr[i].mau));
         ps3->mau =(arr[i].mau*arr[i+1].mau);
        //phepchia=chia;
    }
    return ps3;


}