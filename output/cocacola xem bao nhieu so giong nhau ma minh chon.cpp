#include <iostream>
using namespace std;
int main (){
    int n,k;
    cout << " Tong so ban nhap la: "<< endl;
    cin >> n;
    int arr[n];
     cout << " nhap cac con so ban muon nhap la: "<< endl;
    for ( int i = 0 ; i < n ; i++ ){
       
        cin >>  arr[i];


    }
    int count = 0;
    cout << " Nhap so ban muon xem co bao nhieu so ban chon giong nhau la: "<< endl;
    cin >> k;
    for (int i = 0 ; i < n ; i++){
        if ( arr [i] == k){
            count ++;

        }
    }
    cout << " Tong con so giong nhau ma ban chon la : "<< endl;
    cout << count ;
    return 0;




}