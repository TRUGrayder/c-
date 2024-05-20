#include <iostream>
using namespace std;
 void swap(double *&pa, double *&pb);
int main(){
    double a= 2.5;
    double b=4.2;
     swap(a,b);
     cout << "a= "<<a<<endl;
     cout <<"b= "<<b;



}
    void swap(double *&pa, double *&pb){
        double temp = *pa;
        *pa = *pb;
        *pb = temp;

  
   
}