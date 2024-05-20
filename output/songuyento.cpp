#include<iostream>
using namespace std;
int main(){
/*    int n;
    cin>>n; 
    
    for (int j =2; j<= n; j++){
       int dem=0;
    for (int i=2;i<j;i++){
        
if (j%i ==0) {  
     dem++;
     }
     }
    if (dem ==0){
        cout << j << " la so nguyen to "<<endl;
    }

    }
    return 0;
}
*/while(true){
int number;

cout <<"Nhap so de kiem tra: ";
cin >>number;
if (number<2)
{
    cout <<number <<" khong phai la so nguyen to!";
   return 0; // thoát chương trình
}

    for (int i =2; i<= number-1; i++){
        if (number% i== 0){
        cout << number<<" khong phai so nguyen to!";
        return 0; //thoát chương trình
        }
    }
   cout <<number<<" la so nguyen to!";
}

 return 0;
}