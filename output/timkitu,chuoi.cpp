#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char *p,str1[40],h;
    cout <<"Nhap chuoi: "<<endl;
    gets(str1);
    cout <<"Nhap ki tu muon tim: ";
    cin >>h;

    p = strchr(str1,h);// Hàm strchr(s1,ch)có ý nghĩa là trả về con trỏ đến vị trí xuất hiện đầu tiên của kí tự ch có trong chuỗi s1
    if (p != NULL){
        cout <<"Tim thay tai vi tri :"<<p-str1<<endl;// Vì con trỏ p trỏ đến vị trị kí tự đầu tiên muốn tìm str1 chỉ mặc định là vị trí đầu tiên trong chuỗi nên mới có phép toán trừ như vậy để tìm vị trị
    }
    else{
        cout <<"Khong tim thay!"<<endl;
    }

    // tìm ví trí chuỗi
    char str2[100];
   
    char *p2;
    strcpy(str2,"Trung dep trai yeu doi yeu em be nhi");

    p2 = strstr(str2,"yeu");
    
    if (p2==NULL){
        cout <<"Khong tim thay vi tri!"<<endl;

    }else{
        cout <<"Tim thay vi tri tai: "<<p2-str2<<endl;
    }
    

    

    
    return 0;
}