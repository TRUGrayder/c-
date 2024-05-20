#include <iostream>
#include <string.h>
using namespace std;
int main(){
    char s1[1000];
    cout <<"Moi ban nhap nhung gi minh suy nguy trong dau: "<<endl;
    cin.getline(s1,1000);
    int n1= strlen(s1);
    for (int i=0; i<n1;i++){
        char c = s1[i];
       putchar(toupper(c));// cout <<char (toupper(c));
    }
    cout <<endl;
    char s2[1000];
    strcpy(s2,"TruONG DAI Hoc cOnG nghIEP HA NoI ");
    int n2 =strlen(s2);
    for (int i=0; i<n2;i++){
        char d = s2[i];
        putchar(tolower(d));
    }


    return 0;
}
