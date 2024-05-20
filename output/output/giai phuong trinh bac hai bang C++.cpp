#include <iostream >
#include <math.h>
using namespace std ;
int main (){
    double a, b, c;
    double X1 , X2;
    double delta;
    cout << "Nhap so a = " <<endl;
    cin >> a ;
    cout << "Nhap so b = " <<endl;
    cout << "Nhap so c = " <<endl;
    cin >> c ;
    // ax2 + bx + c =0
    cout << "phuong trinh co dang la : ";
    cout << a<<"x^2 + " <<  b<< "x +" <<  c <<" = 0" << endl;
    delta = b*b - 4*a*c;
    if (delta <0){
        cout << "Phuong trinh tren vo nghiem " << endl;

    }
    
        else if (delta == 0){
         X2 = -b / 2*a;
        cout << "phuong trinh tren co mot nghiem duy nhat la : X1 = X2 = " << X1<< endl;
    
     }

   else{
        X1 = (-b + sqrt(delta))/(2*a);
         X2 = (-b - sqrt(delta))/(2*a);
    cout << "phuong trinh tren co hai nghiem phan biet la : " <<"X1 = " << X1   << ", X2 = "<< X2<< endl;
        
   }

    return 0;
}