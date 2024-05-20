#include<iostream>
#include<string.h>
using namespace std;
int demkhoangtrang(char *&str2);
void xoakhoangtrang(char *&str){
    int n2= strlen(str);
    int j =0;
    for (int i=0; i<n2; i++){
        if (str[i] !=' '){
            str[j++]=str[i];
        }
        else if (j>0 && str[i+1] != ' '){
            str[j++]=str[i];
        }
    }
    if (str[j-1]==' '){
        str[j-1]='\0';
    }
    else {
        str[j]='\0';
    }

}
void Noichuoi(char*&str, char *&str2);
void chuhoa(char *&str);
void chuthuong(char *&str);
void kitudauhoa(char *&atr);

int main(){
    char *str1 =new char[255];
    cout <<"Moi ban nhap chuoi: "<<endl;
    gets(str1); 
    cout <<"\nChuoi co do dai ban dau: "<<strlen(str1)<<endl;
    cout <<" \nChuoi co khoang trang ban dau: ";
    demkhoangtrang(str1);
    cout<<"\nChuoi cua ban da nhap: "; 
    xoakhoangtrang(str1);
    puts(str1);
    cout<<"\nChuoi co ki tu dau in hoa: ";
    kitudauhoa(str1);
    cout <<"\nChu thuong: ";
    chuthuong(str1);
    cout<<"\nChu hoa: ";
    chuhoa(str1);
    cout <<"\nchuoi co do dai la: "<<strlen(str1)<<endl;
    cout <<"\nChuoi co so khoang trang la: ";
    demkhoangtrang(str1);
    cout <<endl;
    char *str3= new char[255];
    char *str4 = new char[255];
    cout <<"Moi ban nhap chuoi  1: ";
    gets(str3);
    cout <<endl;
    cout <<"Moi ban nhap chuoi 2: ";
    gets(str4);
    cout <<endl;
    cout <<"Hai chuoi duoc noi lai voi nhau: ";
   Noichuoi(str3,str4);
    puts(str3);


  return 0;
}  //Le   Van Trung
int demkhoangtrang(char *&str2){
    int n = strlen(str2);
    int dem =0;
    for (int i =0; i<n; i++){
        if (str2[i]==' '){
            dem ++;
        }
    }
    cout <<dem;
    
}
void Noichuoi(char *&str, char*&str2){
   

    strcat(str,str2);
  
}
void chuhoa(char *&str){
    int n3 =strlen(str);
    for (int i = 0; i<n3; i++){
       char  c = *(str+i);
        putchar(toupper(c));
    }
}
void chuthuong(char *&str){
    int n4= strlen(str);
    for (int i=0; i<n4;i++){
        char d = *(str+i);
        putchar(tolower(d));
    }
}
// Chữ kí tự đầu in hoa.
void kitudauhoa(char *&str){
    int q= strlen(str);
    for (int i =0; i<q;i++)
   {
    if (*(str+i)==*(str+0)){

    char c= *(str+0);
  char k= toupper(c);
             
   *(str+0)=k;
    }
    
    
  // cout <<*(str+i);

}

int dodai = strlen (str);
char *p= new char [255];

for (int i=0; i<dodai;i++){
    if (*(str+i)==' '){
        p =strstr(str," ")+1;
        int k = p-str;
        char t =*(str+k);
        char x=toupper (t);
        *(str+k)=x;

    }
   // cout <<*(str+i);
}
for (int i =0; i<dodai; i++){
    cout <<*(str+i);
}


}