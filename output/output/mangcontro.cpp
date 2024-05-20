#include <iostream>
using namespace std;
int main(){
    int n;
    cin >>n;
    int *p[n];
    for (int i=0; i< n; i++){
        p[i] = new int; // Cấp phát bộ nhớ cho mảng con trỏ vì mảng con trỏ này ko trỏ tới một địa chỉ nào đó;
        *p[i] = i*2;
    }
    for (int i =0; i<n; i++){
        cout <<p[i]<<" ==> "<<*p[i]<<endl;


    }
    return 0;
}