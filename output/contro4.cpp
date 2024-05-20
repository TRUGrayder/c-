#include <iostream>
using namespace std;
int main(){
    int  a =3;
    float b = 3.21;
    int *pa = &a;
    float *pb = &b;
    void *px;// con trỏ void là 1 loại đăc biệt nó có thẻ trỏ đến bất kì kiểu dữ liệu nào

    px =&a;
    cout << "dia chi cua a la"<<px<<endl;
    (*(int*)pa) =10;
    cout <<a;
    int *c;//con trỏ NULL nó ko có bất kì giá trị nào
    // vì vậy chúng ta cần cung cấp cho nó giá trị
    c = new int ;
    *c =100;//gan gia tri cho con tro c 100
    





    return 0;


}