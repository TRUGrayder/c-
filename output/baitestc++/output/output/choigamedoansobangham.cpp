#include<iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
void play();
void vonglap();
int main(){
    srand(time(NULL));
    vonglap();
    
    return 0;
}
void play()
{   
    int somay;
    int songuoi;
    int solandoan=0;
    somay= rand()%100+1;

    do
    {    
        solandoan++;

        cout <<"Chao mung ban den voi game doan so cung nguoi may cola: "<<endl;
        cout<<"\nBan doan lan thu: " <<solandoan<<endl;
        cout <<"\nMay da chon 1 so tu [1..100] roi, Gio den luot ban chon so:  \n";
        cin >>songuoi;
        if (songuoi==somay){
            cout<<"\nBan doan dung oi!Ban qua gioi hehe!\n";
            cout <<"So may: "<<somay;
            break;

        }
        else if(songuoi<somay){
            cout <<"\nBan doan sai roi!So cua ban nho hon so may huhu\n "<<endl;
        }
        else{
            cout <<"\nBan doan sai roi!So cua ban lon hon so may huhu \n"<<endl;
        }
        if (solandoan==5){
            cout <<"\nGAME OVER"<<endl;
            break;
        }
    } while (true);
    
}
void vonglap()
{
    while(true){
        play();
        char k;
       
        cout <<"\nBan co muon choi tiep khong(c/k): "<<endl;
         cin>>k;
        if (k=='c') { 
        
            continue;}
        
        else {
            break;
        }
        
    }
}