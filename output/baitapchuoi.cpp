#include<iostream>
#include <string.h>
using namespace std;
void laytendau(char *&pa);
void xoakhoangtrang (char *&space){
    int n = strlen(space);
   // space = new char[255];
        int j = 0;
    for (int i =0; i<n; i++){
        if (space[i]!=' '){
            space[j++]=space[i];
        }
        else if (j>0&& space[i+1]!=' '){
           space[j++]==space[i];

        }
        
   }
if (space[j-1]==' '){
        space[j-1]='\0';

    }
    else {
        space[j]='\0';

    
    }
}
int main(){
    char *str = new char[255
    ];
    cout <<"Moi ban nhap ten cua minh: "<<endl;
    gets(str);
    xoakhoangtrang(str);
    puts(str);
    cout <<endl;
    laytendau(str);
    return 0;

    

}// Le Van Trung 
void laytendau( char *&pa){
    int n1 = strlen(pa);
    int k=0;
    for (int i = n1-1; i>=0; i--){
        if (pa[i]==' '){
            k = i+1;
            break;
        }
        }
        for (int i = k;i<n1;i++ ){
            cout <<pa[i];
        }
    
}