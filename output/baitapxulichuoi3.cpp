#include<iostream>
#include<string.h>
using namespace std;
void tachlaytrai (char *strgoc, char*&strdau , char*&strcuoi);
void tachlayphai (char *strgoc, char*&strcuoi , char*&strtruoc);
int main(){
   
    char *strgoc=new char [255];
    char *strdau=new char[255];
    strcpy(strgoc,"Dinh Bo Linh");
    
     char *strcuoi=new char[255];
     
    tachlaytrai(strgoc,strdau,strcuoi);

    cout <<strdau<<endl;
    cout <<strcuoi<<endl;
    char *strtruoc = new char[255];
    char *strsau = new char[255];
    tachlayphai(strgoc,strsau,strtruoc);
    cout <<strsau<<endl;
    cout <<strtruoc<<endl;

 return 0;
}
void tachlaytrai (char *strgoc, char *&strdau , char *&strcuoi){
    char *p = strchr(strgoc,' ');
    int lspace = p-strgoc;
    strncpy (strdau,strgoc,lspace);
    p= p +1;
    strcuoi=p;
}
void tachlayphai (char *strgoc, char*&strsau , char*&strtruoc){
    int n1 = strlen(strgoc);
    int j = 0;
    // Le Van Trung
    for (int i = n1-1 ; i>=0; i--){
        if (strgoc[i]==' '){
            j = i+1;
            break;
            
        }}  
        int i2=0;
     for (int i = j ; i < n1 ; i++){
        strsau[i2] = strgoc[i];
        i2++;

    }
    strncpy(strtruoc, strgoc,j);


    


}