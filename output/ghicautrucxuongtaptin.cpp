#include<iostream>
#include<string.h>
#include<fstream>// LƯU Ý PHẢI CẦN THƯ VIỆN NÀY
using namespace std;
struct Nhanvien
{
    int ma;
    char ten[50];
};
void xuatfile(Nhanvien arr[], int n){
    for (int i=0; i<n; i++){
        cout<<"Ma: "<<arr[i].ma<<"\t"<<arr[i].ten<<endl;

    }
}
// doc file
void docfile()
{
    ifstream infile("danhsachnhanvien.txt",ifstream::binary);
    infile.seekg(0,infile.end);
    long size = infile.tellg();
    infile.seekg(0);
    int real = size/ sizeof(Nhanvien);
    Nhanvien dsNV[real];
    infile.read((char*)dsNV, sizeof(dsNV));
    infile.close();
    xuatfile(dsNV, real);

}


int main(){
   /* Nhanvien dsNV[4];
    dsNV[0].ma= 1;
    strcpy(dsNV[0].ten,"Le Van Trung");
    dsNV[1].ma= 2;
    strcpy(dsNV[1].ten,"Le Van Thanh");
    dsNV[2].ma= 3;
    strcpy(dsNV[2].ten,"Le Thi Anh");
    dsNV[3].ma= 4;
    strcpy(dsNV[3].ten,"Le Thi Kim Oanh");

    ofstream outfile ("danhsachnhanvien.txt",ofstream::binary);
    outfile.write ((char*)dsNV, sizeof(dsNV));
    outfile.close();*/
    docfile();
    
    return 0;

}