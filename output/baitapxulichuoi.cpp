#include <iostream>
#include<string.h>
using namespace std;
int main(){
    char *str;
    str =new char[225];
    gets(str);
    int n= strlen(str);
    for (int i=0; i<n; i++){
        char c = *(str+i);
        int ASCII= (int)c;
        cout <<"ASCII la "<<c<<"=>"<<ASCII<<endl;
    }
}