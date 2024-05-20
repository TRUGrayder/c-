#include <iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;
void maydoan(int n);
int main(){
    int dem =0;
    string name;
    //string may; 
    cout <<"\nMOI BAN NHAP TEN: ";
    cin >>name;
    
 while (true){
    dem++;
    
  //  cout <<endl<<endl;

   
   string ten;
   cout <<endl;
   cout <<endl;
   cout <<"\nMOI EM BE "<<name<<" NHAP (keo, bua , giay) :";
   cin >>ten;
   
   cout <<endl;
   cout <<endl;
   cout <<"DAP AN CUA EM BE "<<name<<" : ";
   cout <<ten;
   cout <<endl;
    
    cout <<"\nDAP AN CUA EM BE TRUNG: ";
    srand(time(NULL));
    int may1=rand()%3;
    int n;
    
    if (ten =="keo"){
        n=1;
    }
    else if (ten=="bua"){
        n=2;
    }
    else if (ten=="giay"){
        n=3;
    }
    else {
        cout <<"Ban nhap sai! Vui long nhap lai :)"<<endl;
       
        
    }
   
    if (may1==0){
      cout <<"keo";
    }
    else if(may1 ==1){
      cout <<"bua";
    }
    else 
    {
       cout <<"giay";
    }
    cout <<endl;
    
    
    cout <<"\nKET QUA BE "<<name<<" " ;
    
   if (n==1){
    if (may1==0){
        cout<<"DRAW";
    }
    else if (may1==2){
        cout <<"WIN";
    }
    else {
        cout <<"LOSE";
    }
   }
   if (n==2){
    if (may1==0){
        cout <<"WIN";
    }
    else if (may1==1){
        cout <<"DRAW";
    }
    else{
        cout <<"LOSE";
    }
   }
   if(n==3){
    if(may1==0){
        cout <<"LOSE"<<endl;
    }
    else if (may1==1){
        cout <<"WIN";
    }
    else {
        cout <<"DRAW";
    }
        if (dem==3){
            break;
        
    }
   }
 }
    
return 0;
}



