#include<iostream>
#include<string.h>
using namespace std;
    struct giadinh
    {
        char ten[255];
        int tuoi=43;
        bool gioitinh=false;
        int tuoibo=53;

    
    };

int main(){
    giadinh ha;
    
    cout <<"Ten cua me la:\n ";
    strcpy(ha.ten,"Duong thi ha\n");
    cout <<ha.ten;
    cout <<"Tuoi cua me la: \n";
    cout <<ha.tuoi;
    cout <<endl;
    cout <<"Gioi tinh cua me la:  \n";
    cout <<(ha.gioitinh==false ?"Nu":"Nam" );
    cout <<endl;

    giadinh *loc;
    loc =new giadinh;

    cout <<"Ten cua bo la: \n";
    strcpy(loc->ten,"Le Van Loc\n");
    cout <<loc->ten;
    cout <<"Tuoi cua bo la: \n";
    cout <<loc->tuoibo;
    cout <<endl;
    cout <<"Gio tinh bo la: \n";
    cout <<(loc->gioitinh==false?"Nam":"Nu")<<endl;

    giadinh *pme= &ha;
    cout <<"Ten me theo con tro:\n";
    cout <<pme->ten;
    cout <<"Tuoi me theo con tro:\n";
    cout<<pme->tuoi;
    cout <<"\nGioi tinh me theo con tro:\n";
    cout <<pme->gioitinh;

    pme->tuoi=67;
    strcpy(pme->ten,"\nLe Thi Anh\n");
    cout <<ha.ten<<"\t"<<ha.tuoi<<endl;

    ha.tuoi=44;
    strcpy(ha.ten,"Le Van Thanh");
    cout <<endl;
    cout <<pme->ten<<endl;
    cout<<pme->tuoi<<endl;

    giadinh *pha2=pme;
    pha2->tuoi=234;
    cout <<pme->tuoi<<endl;
    cout<<ha.tuoi;





    
      return 0;


    
    




}