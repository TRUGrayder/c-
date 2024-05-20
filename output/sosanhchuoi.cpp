#include <iostream>
#include<string.h>
using namespace std;
int main(){
    char s1[100],s2[100];
    strcpy(s1,"TRUNG DEP TRAI");
    strcpy(s2,"TIEP DEP TRAI");

    int ret = strcmp (s1,s2);
    cout <<"Ket qua : "<<ret<<endl;

    if (ret == 0 ){
        cout <<"Hai thang bang nhau "<<endl;

    }else if(ret>0){
        cout <<"Thang s1 dep trai hon thang s2"<<endl;

    }
    else{
        cout <<"Thang s2 dep trai hon thang s1"<<endl;
    }

    char s3[100],s4[100];
    strcpy(s3,"Trung hay khoc nhe ");
    strcpy(s4,"Trung hoc truong trung hoc pho thong Le Quy Don ");

    int ret2 = strncmp(s3,s4,100);
    cout <<"Ket qua :"<<ret2<<endl;
    if (ret2==0){
        cout <<"s3=s4"<<endl;
    }
    else if(ret2>0){
        cout <<"s3>s4"<<endl;

    }
    else{
        cout <<"s3<s4"<<endl;
    }
    return 0;


}