   #include<iostream>
   #include<string.h>
   using namespace std;
    //khai bao cau truc 
    struct Diachi
    {
        char sonha[10];
        char Tenduong[255];
        char xa[255];
        char tinhthanh[255];
    };
    struct Sinhvien
    {
        char MaSV[10];
        char TenSV[255]="le kim oanh";
        bool GioiTInh;
        Diachi diachinha;
        Diachi diachiduong;

    }oanh,anh,thanh;


   int main(){
  //  strcpy(oanh.TenSV,"Le van trung");
     oanh.GioiTInh=true;
strcpy(oanh.MaSV,"2023606423");
  
    cout <<"-----------------------\n";
     cin.ignore();
    cout<<"MaSv= "<<oanh.MaSV<<endl;
   
    cout<<"Ten= "<<oanh.TenSV<<endl;
    cout<<"Gioi tinh= "<<(oanh.GioiTInh==false?"Nam":"Nu")<<endl;

    Sinhvien trung;
    strcpy(trung.TenSV,"Le Van trung");
    cout<<trung.TenSV;

    return 0;
   }