#include<iostream>                 
                                                                   
#include <string.h>   

using namespace std;  
  bool xemtraihaygai(char *str)
  {

// "sv1; Le Van Trung; male" 
    int n = strlen(str);
    int j=0;
    for (int i=n-1; i>=0 ;i--){
        if (str[i]==';'){
            j =i;
            break;
        } }
        int i2=0;
    char gioitinh[10];
        for (int i =j+1; i<n; i++){
          gioitinh[i2]  =str[i];
          i2++;

        }
        gioitinh[i2]='\0';

        if(strcmp(gioitinh,"male")==0){

        
            return false;

        }else{
            return true;
        }
       

}                        
int main (){                     
                                                   

    char **dssv;
    dssv = new char *[5];
    for (int i=0; i<5; i++){
        *(dssv+i)= new char[255];
        }
        strcpy(*(dssv+0),"sv1; Le Van Trung; male");               //cho mang chuoi: 
                                                                // "sv1; Le Van Trung; male" 
        strcpy(*(dssv+1), "sv2, Nguyen Thi Nhi, female");         // "sv2, Nguyen Thi Nhi, female"
        strcpy(*(dssv+2),"sv3, obama, male" );                      //"sv3, obama, male"   
        strcpy(*(dssv+3),"sv4, pham nhat vuong, male");            //"sv4, pham nhat vuong, male"
        strcpy(*(dssv+4),"sv5, Mess, female");                      //"sv5, Mess, female"  
    int sonam=0;
    int sonu=0;
    for (int i = 0; i<5; i++){
        cout <<*(dssv+i)<<endl;
        bool kq =xemtraihaygai(*(dssv+i));
        if (kq==false){
            sonam++; 
        }
        else{
            sonu++;
        }
    }
    cout <<"Co "<<sonam<<" so nam trong mang chuoi"<<endl;
     cout <<"Co "<<sonu<<" so nu trong mang chuoi"<<endl;
    return 0;
}
/*bool xemtraihaygai(char *str)
  {

// "sv1; Le Van Trung; male" 
    int n = strlen(str);
    int j=0;
    for (int i=n-1; i>=0 ;i--){
        if (str[i]==';'){
            j =i;
            break;
        } }
        int i2=0;
    char gioitinh[5];
        for (int i =j+1; i<n; i++){
          gioitinh[i2]  =str[i];
          i2++;

        }
        gioitinh[i2]='\0';

        if(strcmp(gioitinh,"male")==0){
            return false;
            return true;

        }    
        
       

}*/
