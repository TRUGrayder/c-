#include <iostream>
using namespace std;
int main(){
    int arr[8] = {3,324,13,12,23,3,311,313};
    for (int i=0 ; i<8; i++)  {                                            
        cout <<arr[i]<<"\t";
    }
    cout <<endl;
    int *p;
    p=arr;// Vì mảng thực chất là một địa chỉ rồi nên chúng ta không cần đến toán tử & nẵ
    for (int i =0 ; i<8;i++ ){
        cin >>*(p+i);//<<"\t";// *(p+i) ngĩa là con trỏ p trỏ đến địa chỉ thứ i nó cũng giống arr[i];


    }
    cout <<endl;
    *(p+4) = 688;// nghĩa là con trỏ này thay đổi phần tử thứ tư thành 688 vì nó quản lí mảng arr[] nên phần tử arr[]cũng bị thay đổi theo luôn
    // Đây mình sẽ ví dụ cho bạn xem
     for (int i=0 ; i<8; i++)  {                                            
        cout <<arr[i]<<"\t";
    };
    cout <<endl;
     for (int i =0 ; i<8;i++ ){
        cout <<*(p+i)<<"\t";

     }
}