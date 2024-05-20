#include<iostream>
#include<string.h>
struct quanlisinhvien
{
    int ma;
    
    char ten[50];
    char gioitinh[50];
  //  bool gioitinh=true;
    int age;
   double diemtoan,diemly,diemhoa;
    double diemtrungbinh;
  // double hocluc;
   char hocluc1[10];


};
void *timkiemsinhvien( char *&a, quanlisinhvien arr[], int n);
void themsinhvien(quanlisinhvien  arr[], int n);
double diemtrungbinh(quanlisinhvien arr[], int n);
void hocluc( quanlisinhvien arr[],int n);
//void nhapthongtinsv(quanlisinhvien *&str, int n);
void nhapthongtinsv(quanlisinhvien arr[], int n);
void xuatthongtinsv(quanlisinhvien arr[],int n);
using namespace std;
int main(){                                                                                                    

    //quanlisinhvien hocluc1;
    int n;
    cout <<"Nhap so luong sinh vien ban muon nhap: ";
    cin>>n;   
    cout <<endl;
    //quanlisinhvien *str= new quanlisinhvien;
    quanlisinhvien arr[100];
    //nhapthongtinsv(str,n);
    nhapthongtinsv(arr,n);
    diemtrungbinh(arr,n);
    hocluc(arr,n);
    xuatthongtinsv(arr,n);

    return 0;
}

void nhapthongtinsv(quanlisinhvien arr[], int n){ 
   //quanlisinhvien sinhvien;
    for (int i =1; i<=n;i++){
     cin.ignore();    
       
    cout <<"Nhap ho va ten sinh vien thu "<<i<<" :";
   
    gets(arr[i].ten);
  cin.ignore();
    cout <<"\nNhap gioi tinh :";  
   
     gets(arr[i].gioitinh);
    cin.ignore();
    cout <<"\nNhap tuoi: ";
    cin>>arr[i].age;
    
    cout <<"\nNhap ma sinh vien: "
    ;
    cin>>arr[i].ma;
    cout <<endl;
   cout <<"Nhap diem toan: ";
    cin>>arr[i].diemtoan;
    cout <<"\nNhap diem vat ly: ";
    cin>>arr[i].diemly;
    cout <<"\nNhap diem hoa hoc: ";
    cin >>arr[i].diemhoa;
    cin.ignore();

    cout <<endl<<endl;
    }
}
void xuatthongtinsv(quanlisinhvien arr[],int n){
    for (int i= 1; i<= n; i++){
        cout <<"Ten:\t"<<arr[i].ten<<"\t| gioi tinh: "<<arr[i].gioitinh<<" | ma: "<<arr[i].ma<<" | diem toan: "<<arr[i].diemtoan<<" | diem ly: "<<arr[i].diemly<<" | diem hoa: "<<arr[i].diemhoa<<" | diem trung binh: "<<arr[i].diemtrungbinh<<" | xep loai : "<<arr[i].hocluc1<<endl;
    }
}
void  hocluc(quanlisinhvien arr[], int n){
  
    for (int i =1; i<=n; i++){

    if (arr[i].diemtrungbinh>=8){
        strcpy(arr[i].hocluc1,"Gioi");
       // cout <<"Gioi"<<endl;
    }
    else if (arr[i].diemtrungbinh<8 && arr[i].diemtrungbinh>= 6.5){
       // cout <<"Kha"<<endl;
        strcpy(arr[i].hocluc1,"kha");
       
    }
    else if (arr[i].diemtrungbinh<6.5 &&  arr[i].diemtrungbinh>= 5){
        //cout <<"Trung binh"<<endl;
         strcpy(arr[i].hocluc1,"Trung binh");
    }
    else {
       // cout <<"yeu"<<endl;
        strcpy(arr[i].hocluc1,"Yeu");
    }
}}
double diemtrungbinh(quanlisinhvien arr[], int n){
    for (int i =1; i<=n; i++ ){


    arr[i].diemtrungbinh = (arr[i].diemtoan+arr[i].diemhoa+arr[i].diemly)/3;

    }
    for (int i =1; i<=n; i++){
        cout <<arr[i].diemtrungbinh<<endl;
    }

}
/*void nhapthongtinsv(quanlisinhvien *&str, int n){ 
   //quanlisinhvien sinhvien;
    for (int i =1; i<=n;i++){
   //  cin.ignore();    
       
    cout <<"Nhap ho va ten sinh vien thu "<<i<<" :";
  cin.ignore();
    gets(str->ten);
  
    cout <<"\nNhap gioi tinh :";  

     gets(str->gioitinh);
    cin.ignore();
    cout <<"\nNhap tuoi: ";
    cin>>str->age;
    cin.ignore();
    cout <<"\nNhap ma sinh vien: "
    ;
    cin>>str->ma;
    cout <<endl;
   cout <<"Nhap diem toan: ";
    cin>>str->diemtoan;
    cout <<"\nNhap diem vat ly: ";
    cin>>str->diemly;
    cout <<"\nNhap diem hoa hoc: ";
    cin >>str->diemhoa;
    //cin.ignore();

    cout <<endl<<endl;
    }
}
*/
void themsinhvien(quanlisinhvien arr[], int n){
    cout <<"Ban can them bao nhieu sinh vien :"<<endl;
    cin>>n;
    for (int i =0; i<n ; i++){
        for (int i =1; i<=n;i++){
     cin.ignore();    
       
    cout <<"Nhap ho va ten sinh vien thu "<<i<<" :";
   
    gets(arr[i].ten);
  cin.ignore();
    cout <<"\nNhap gioi tinh :";  
   
     gets(arr[i].gioitinh);
    cin.ignore();
    cout <<"\nNhap tuoi: ";
    cin>>arr[i].age;
    
    cout <<"\nNhap ma sinh vien: "
    ;
    cin>>arr[i].ma;
    cout <<endl;
   cout <<"Nhap diem toan: ";
    cin>>arr[i].diemtoan;
    cout <<"\nNhap diem vat ly: ";
    cin>>arr[i].diemly;
    cout <<"\nNhap diem hoa hoc: ";
    cin >>arr[i].diemhoa;
    cin.ignore();

    cout <<endl<<endl;
        }}

}
void *timkiemsinhvien( char *&a, quanlisinhvien arr[], int n){
   int k =0;
        char timten[50];
        gets(timten);
       for (int i=1; i<=n; i++){
    a = strstr(arr[i].ten,timten);
    k = a-arr[i].ten;
    break;
       }
                     
    if (a==NULL){
        cout <<"Khong tim thay"<<endl;
    }
    for (int i =1; i<=n; i++){
       if (arr[i]==arr[k]){
        
       }
    }

}



