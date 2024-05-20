#include <iostream>
#include<string.h>
using namespace std;

struct Sinhvien
{
    int maSV;
    char tenSV[243];
};
void Nhapmang( Sinhvien dsSV[], int siso);
void Xuatmang(Sinhvien dsSV[], int siso);
int main(){
    Sinhvien dsSV[3];
    int siso =3;
    Nhapmang( dsSV,siso);
    Xuatmang(dsSV,siso);

}
void Nhapmang( Sinhvien dsSV[], int siso){
    for (int i=0; i<siso; i++){
        cout <<"Nhap sinh vien thu "<<i<<" ";
        cout <<"\nNhap ma sinh vien: ";
        cin >>dsSV[i].maSV;
      
        cout <<"\nNhap ten: "; 
         cin.ignore();
        gets(dsSV[i].tenSV);
        
    }
}
void Xuatmang(Sinhvien dsSV[], int siso){
    for (int i =0; i<siso;i++){
        cout<<dsSV[i].maSV<<"\t"<<(dsSV[i].tenSV);
    }

}