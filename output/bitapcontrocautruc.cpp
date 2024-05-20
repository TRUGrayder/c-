#include<iostream>
#include<string.h>
    struct diachi
    {
            char tenduong[255];
            char quan[255];
            char tinhthanh[255];
    };
    struct nhanvien
    {
        int ma;
        char ten[255];
        int tuoi;
        diachi coquan;
        diachi nharieng;

    };
using namespace std;
int main(){
    nhanvien trung;
    trung.ma=27;
    trung.tuoi=18;
    strcpy(trung.ten,"Le Van Trung");
    cout <<"Ten : "<<trung.ten<<endl;
    cout <<"Tuoi : "<<trung.tuoi<<endl;
    cout <<"Ma : "<<trung.ma<<endl;

    strcpy(trung.coquan.tenduong,"Xom Phai Dong");
    strcpy(trung.coquan.quan,"Xa Tan Lam Huong");
    strcpy(trung.coquan.tinhthanh,"tinh Ha Tinh");
    strcpy(trung.nharieng.tenduong,"so 47");
    strcpy(trung.nharieng.quan,"Le Van trung heehhe");
    strcpy(trung.nharieng.tinhthanh,"Ha Tinh");
    cout <<"Thong tin dia chi co quan cua trung la: "<<trung.coquan.tenduong<<","<<trung.coquan.quan<<","<<trung.coquan.tinhthanh<<endl;
    cout <<"Thong tin dia chi nha rieng cua trung la: "<<trung.nharieng.tenduong<<","<<trung.nharieng.quan<<","<<trung.nharieng.tinhthanh<<endl;
    cout <<"---------------------------------"<<endl;
    nhanvien *thanh;
    thanh = new nhanvien;
    thanh->tuoi =16;
    thanh->ma=10;
    strcpy(thanh->ten,"Le Van Thanh");

    cout <<"Ten: "<<thanh->ten<<endl;
     cout <<"Tuoi: "<<thanh->tuoi<<endl;
      cout <<"Ma: "<<thanh->ma<<endl;
    strcpy(thanh->coquan.tenduong,"Xom Phai Dong 2");
    strcpy(thanh->coquan.quan,"Xa Tan Lam Huong 2");
    strcpy(thanh->coquan.tinhthanh,"tinh Ha Tinh 2");
    strcpy(thanh->nharieng.tenduong,"so 10");
    strcpy(thanh->nharieng.quan,"Le Van Thanh heehhe");
    strcpy(thanh->nharieng.tinhthanh,"Ha Tinh2");

     cout <<"Thong tin dia chi co quan cua thanhla: "<<thanh->coquan.tenduong<<","<<thanh->coquan.quan<<","<<thanh->coquan.tinhthanh<<endl;
    cout <<"Thong tin dia chi nha rieng cua thanh la: "<<thanh->nharieng.tenduong<<","<<thanh->nharieng.quan<<","<<thanh-> nharieng.tinhthanh<<endl;
    
    

    return 0;
}
