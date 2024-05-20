#include <iostream>
using namespace std;
int main(){
    int n;
    cout <<"Phan tu ban muon nhap trong day la: ";
    cin >> n;
    cout << "Nhap so day cua ban:"<< endl;
    int arr[n];
    for (int i= 0; i<n; i++){
        cin >> arr[i];
    }
    int count =0;
    int k;
    cout <<"So phan tu ban muon xem co giong nhau trong mang ko: "<<endl;
    cin>>k;
    for (int i= 0; i<n;i++){
        if (arr[i]==k){
            count ++;
        }
    }
    cout <<"Co "<<count<<" so giong nhau cua ban vua moi nhap"<<endl;
    return 0;

}