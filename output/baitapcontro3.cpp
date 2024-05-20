#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

/*void Nhapmatran(int **&a , int n);
void Xuatmatran( int **a, int n);
int **Congmatran(int **M1 ,int **M2,int n);
int main(){
    
    int **M1,**M2;
    int n;
    cout <<"Nhap kich thuoc ma ban muon: "<< endl;
    cin >>n;
    cout <<"Ma tran M1: "<<endl;
    Nhapmatran(M1,n);
    Xuatmatran(M1,n);
    cout <<endl;
    cout <<"Ma tran M2: "<<endl;
    Nhapmatran(M2,n);
    Xuatmatran(M2,n);
    cout <<endl;
    cout <<"Hai ma tran cong lai co ket qua la: "<<endl;
    int **M3 = Congmatran(M1,M2,n);
    
    Xuatmatran(M3,n);
    return 0;



}
void Nhapmatran(int **&a , int n){
    a = new int*[n];
    srand(time(NULL));
    for (int i =0; i<n ; i++){


        *(a+i) = new int [n];

    }
    for (int i = 0; i<n; i++){
        for (int j =0; j<n;j++){
            *(*(a+i)+j) = rand()%10;
            
                  }
    }


}
void Xuatmatran( int **a, int n){
    
    for (int i = 0; i<n; i++){
        for (int j =0; j<n;j++){
                cout <<  *(*(a+i)+j)<< "\t";

        }
        cout << endl;
        }



}
int **Congmatran(int **M1 ,int **M2,int n){

   int  **M3 = new int *[n];

    for (int i =0 ; i<n; i++){
        *(M3+i)= new int [n];
    }

    for(int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            *(*(M3+i)+j)= *(*(M1+i)+j) + *(*(M2+i)+j);
        }
    }

    return M3;


}*/
void nhapmang (int **&pa, int n);
void xuatmang (int **pa, int n);
int **conghaimatran(int **M1, int **M2, int n);
int main(){
    int n;
    int **M1,**M2; 
    cout <<"Ban muon mang co may hang may cot: ";
    cin >>n;
    cout <<endl;
    cout <<"Do dai cua mang 1 la: "<<endl;
    nhapmang(M1,n);
    xuatmang(M1,n);
    cout <<endl;
    cout <<"Do dai mang 2 la: "<<endl;
    nhapmang(M2, n);
    xuatmang(M2,n);
    cout <<endl;
    cout <<"Hai ma tran duoc cong lai co ket qua la:"<<endl;
    int **M3;
    M3 = conghaimatran(M1,M2,n);
    
    
    xuatmang(M3,n);


    return 0;
}
void nhapmang (int **&pa, int n){
    pa = new int *[n];
    srand(time(NULL));


    for (int i=0; i<n; i++){
        *(pa+i)=new int [n];
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){

        *(*(pa+i)+j)=rand()%10;//*((*pa+i)+j) giống như một mảng hai chiều arr[i][j] vậy
        
        }
    }

}

void xuatmang (int **pa, int n){
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout <<*(*(pa+i)+j)<<"\t";
        }
        cout <<endl;
        }



}
int **conghaimatran(int **M1, int **M2, int n){
    int **M3 = new int*[n];
    for (int i=0; i<n; i++){
        *(M3+i)= new int [n];
    }
    for (int i=0;i<n;i++){
        for (int j=0; j<n;j++){
            *(*(M3+i)+j)= *(*(M1+i)+j) + *(*(M2+i)+j);
        }
    }
    return M3;


}