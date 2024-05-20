#include <iostream >
using namespace std;
int main (){
    int n; 
    cout << " Nhap so phan tu cua mang : "<< endl;
    cin >> n;
    int arr[n];
    for (int i=0; i<n ; i++){
        cout << " Nhap vao phan tu a[ " << i << "]: ";
        cin >> arr[i];
    }
   for (int i=0; i<= n-1 ; i++){
    for (int j = i + 1 ; j <= n; j++){
        if ( arr[i]> arr[j]){
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
       
   }
         cout << arr[i] <<"\t";
   }
    return 0;

}