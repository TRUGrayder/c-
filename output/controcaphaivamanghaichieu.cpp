#include <bits/stdc++.h>
using namespace std;
int main(){
  int **p = new int*[6];
  for (int i =0; i<6; i++){
    p[i] = new int [8]; // *(p+i)= new int[8];
  
}
    for (int i = 0; i<6; i++){
      for (int j=0 ; j<8; j++){
        p[i][j]=i*j; // *(*(p+i)+j) = i+j
      }
    }
    for (int i = 0; i<6; i++){
      for (int j=0 ; j<8; j++){
        cout <<p[i][j]<<"\t";
    
      }
      cout <<endl;
      
      }
      // HUY BO NHO
      for (int i = 0; i<6; i++){
        delete *(p+i);
        *(p+i)= NULL;
      }
      delete *p;

    return 0;
}
