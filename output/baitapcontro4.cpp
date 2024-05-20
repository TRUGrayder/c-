#include <iostream>
using namespace std;

 int *caphatbonho(int n);
void nhapdulieu(int *&pa, int n);
void xuatmang(int  *pa, int n);
int  *DanhsachMax(int *pa, int n   );
void sapgiam(int *&pa, int n);
int main(){
    
    int n;
    cout <<"Nhap so gia tri mang: "<<endl;
    cin >>n;
    
    int *pa= caphatbonho(n);
    cout <<"Vui long nhap mang: "<<endl;
    nhapdulieu(pa,n);
    cout <<"Mang ban vua nhap: "<<endl;
    xuatmang(pa,n);
    cout <<"Ba so dau max la: "<<endl;
   int *px = DanhsachMax(pa,n);
    xuatmang(pa,3);

}
int *caphatbonho(int n){
    int *pa = new int [n];
   
    return pa;
}
void nhapdulieu(int *&pa, int n){
  for (int i =0; i<n; i++){
    cin>> *(pa+i);
  }

}
void xuatmang(int  *pa, int n){
    for (int i = 0; i<n;i++){
        cout <<*(pa+i)<<"\t";
    }
}
int  *DanhsachMax(int *pa, int n){
    int m= n > 3?3:n;//Nếu n >3 thì ta lấy 3 còn không ta lấy n;
    int *px = caphatbonho(m);
    sapgiam(pa,n);
    for (int i= 0; i<m; i++){
        *(px+i)=*(pa+i);
        
    }
    return px;
}
void sapgiam(int *&pa, int n){

    for (int i= 0; i<n-1; i++){
        for (int j=i+1; j<n;j++){
            
            if(*(pa+i)<=*(pa+j)){
                int temp = *(pa+i);
                *(pa+i)= *(pa+j);
                *(pa+j)= temp;

            }
        }
        
    }
}

