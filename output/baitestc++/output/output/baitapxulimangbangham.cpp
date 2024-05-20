#include <iostream>
using namespace std;
void nhapmang (int M[], int n);
void xuatmang (int M[], int n);
int timkmang(int M[], int n,int k);
void sapxepmang(int M[], int n);
int main(){
    int n;
    cout << "So phan tu mang : "<<endl;
    cin >>n;
    int M[n];
    cout <<"\nNhap phan tu mang: "<<endl;
    nhapmang (M,n);
    cout <<"Mang sau khi duoc nhap: "<<endl;
    xuatmang (M,n);
    int k;
    cout <<"\nNhap phan tu ban muon kiem : "<<endl;
    cin >>k;
    int timk=timkmang (M,n,k);
    if (timk==-1){
        cout <<"Khong thay phan tu ban nhap trong mang!\n";
    }
    else {
        cout <<"Phan tu "<<k<<" co trong mang o vi tri thu "<<timk;
    }
    
    sapxepmang(M,n);
     
     cout <<"\nsap xep mang tang dan : "<<endl;
     
     xuatmang (M,n); 

    

    return 0;
}
void nhapmang (int M[], int n)
{
    for (int i=0 ; i<n;i++){
        cout <<"M ["<<i<<"] : "<<"  ";
        cin >> M[i] ;
    }

}
void xuatmang (int M[], int n)
{
    for (int i=0 ; i<n;i++){
        cout<< M[i] <<" ";
    }
}
int timkmang(int M[], int n,int k)
{
    for (int i=0; i<n;i++){

    
    if (M[i]==k)
        return i;
    
    }
        return -1;
    
    
}
void sapxepmang(int M[], int n)
{
    for (int i=0 ; i<n-1;i++){
        for (int j=i+1  ; j<n ; j++){
            if (M[i]>M[j]){
                int thay = M[i];
                M[i] = M[j];
                M[j] = thay;
            }

        }
}


}