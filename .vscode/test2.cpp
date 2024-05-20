#include <iostream >
#include <stdlib.h>
#include <ctime>
using namespace std;
int main (){
    cout <<"chao mung cac ban den game doan so may man cung minh nhe! "<< endl;
    int a;
    srand(time(NULL));
    int somay = rand()%100;
    int dem = 0;
    cout <<"\nMay da dua ra mot so do moi ban doan so cua minh nhe! "<< endl;
    bool b = false;
    while (true) {
    do {  
        dem ++;
        
        cout <<"\nNhap so du doan cua ban: "<<endl;
        cin >> a;
        if ( a== somay){
            cout <<"\nBan gioi ghe! Ban doan dung so cua may cua roi day hehe:"<< endl;
            b= true;
            break;
        

        }else if ( a< somay){
            cout << "\nBan sai roi! So ban doan nho hon so may nhe! "<< endl;
        }
        else {
            cout << "\nBan sai roi! So cua ban lon hon so may "<< endl;
        }
        if ( dem == 5 ){
            cout <<"\nBan thua that roi !"<< endl;
            break;
            
        }



    }while (true);
    if ( b==false ){
        cout <<"GAME OVER!"<< endl;
        cout <<"So cua may la: "<< somay<< endl;

    }
    cout << "Ban co muon choi lai hay ko "<< endl;
    char c;
    cin >>c;

    if (c=='c'){
     continue;
        
    }
    else{

        break;
    }
    };
    return 0;
    




}