#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main(){
  string name;
  cout <<"Nhap ten cua ban de choi game" << endl;
  cin >> name;

  srand(time(NULL));

  int somay =1+rand() % 100;
  int solandoan=0;
  bool win = false;
  while(true) {
  do{
    
    
  int n;
  cout << "Chuong trinh choi game doan so cung nguoi may coca nhe !\n";
  cout <<"May da doan so tu [1..100]roi nhe, gio den luot ban!" << endl;
  cout <<"Moi "<<name<<" nhap so cua minh : \n";
  cin >>n;
solandoan++;
cout <<"Ban doan lan thu: " << solandoan << endl;
    
  
  if (n==somay){
    cout <<"What? " <<name<< " sao gioi the!\n" <<"So may coca= "<<somay<<endl;
    win = true;
    break;
  }
  else if (n >somay) {
    cout <<name<< "  Sai roi! So cua ban lon hon so may coca nhe!\n" << endl;
  }
    else{
      cout <<name<< " Sai roi ! So cua ban nho hon so may coca nhe!\n" << endl;
    }
    if (solandoan ==7){
      break;

    }
}while(true);
if (win!=true){
  cout << "GAME OVER\n" ;
  cout << "So cua may coca ="<<somay<<endl;
}
  
    cout << name<< " co muon choi tiep khong(c/k)\n";
    char c;
    cin >> c;
    if (c=='c'){
      continue;
    }
  else{
    cout <<"Cam on "<<name<< " da choi game cua trung loc tao"<<endl;
    break;
  }
  }
  
return 0;
}