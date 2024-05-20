#include <iostream>
#include <string.h>
using namespace std;
int main(){

    // Đảo ngược lại chuỗi đã viết  
    
    char str[1000];
    cout <<"Moi ban nhap chuoi: "<<endl;
    cin.getline(str,1000);
    int sodo= strlen(str)-1 ;
    for (int i = sodo; i>=0;i--){
        
        cout <<str[i];

    }

    return 0;

}