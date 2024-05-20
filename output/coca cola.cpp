#include <iostream>
#include <math.h>
using namespace std;
int main(){
    double a, b, c;
    cout << "nhap so a = "<< endl;
    cin>>a;
    cout << "nhap so b = "<< endl;
    cin >>b;
    cout << "nhap so c = "<< endl;
    cin >>b;
    // ax^2 +bx+c =0
    if ( a==0){

        if ( b==0 && c==0){
            cout << " phuong trinh vo so nghiem"<<endl;
        }
        else if ( b==0 && c!=0){
            cout << " phuong trinh vo nghiem"<<endl;
        }
            else {
                double x= -c/b;
                cout << " phuong trinh co 1 nghiem x= " << x<<endl;

            }
        }
        else {
            double delta = pow(b,2) - 4*a*c;
            if (delta<0){
                cout << "Phuong trinh vo nghem\n";
            }
            else if(delta ==0){
                double nkep = -b/2*a;
                cout << " phuong trinh co ngiem kep x1,x2= "<<nkep<<endl;
            }
            else {
                double x1 = (-b+sqrt(delta))/2*a;
                double x2 = (-b-sqrt(delta))/2*a;
                cout << "Phuong trinh co hai ngiem :"<< "x1= "<<x1<<", x2= "<<x2<<endl;
            }



        }
        return 0;

}