/*cho một mảng các số nguyên n phần tử arr.
 Bạn hãy viết chương trình sắp xếp các phần tử của mảng theo thứ tự tăng dần và hiển thị ra màn hình mảng sau khi đã sắp xếp.

Ví dụ nếu bạn nhập n = 6, arr = [5,3,2,6,7,7] như bên dưới:*/
#include <iostream>
using namespace std;
int main (){
    int n;
    cin >>n;
    int arr[n];
    for (int i = 0 ; i<n; i++){
        cin >> arr[i];
    }
    for (int i= 0 ; i< n ; i++){
        for ( int j = i + 1 ; j < n ; j++){
            if ( arr[j] < arr[i]){
                // Đổi vị trí arr[j] cho arr[i]
                int v = arr[j]; 
               arr[j] = arr[i];
                arr[i] = v;
            }
        }
    }
            
        
        for (int i= 0; i<n ; i++){
            cout << arr[i] << " ";
        }
            
        
    
    return 0;

}
// num1 >= num2 