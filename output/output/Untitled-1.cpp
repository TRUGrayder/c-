#include <iostream >
#include <cmath>
using namespace std ;
int main (){
    double a, b, c;
    double X1 , X2;
    double delta;
    cin >> a >> b >> c ;
    // ax2 + bx + c =0
    delta = b*b - 4*a*c;
    if (delta <0){
        cout << "Phuong trinh vo nghiem " << endl;

    }
    
        else if (delta == 0){
            X1 = -b / 2*a;
        cout << "phuong trinh co mot nghiem duy nhat la :" << X1<< endl;
    
     }

   else{
        X1 = (-b + sqrt(delta))/(2*a);
         X2 = (-b - sqrt(delta))/(2*a);
    cout << "phuong trinh co hai nghiem phan biet la : " <<"X1 = " << X1   << ", X2 = "<< X2<< endl;
        
   }

    return 0;
}