#include <iostream>
using namespace std;

int main () {

    int hours , minutes , seconds, total  ;

    cin >> total ;
    hours = total / 3600;
    total = total % 3600;
    minutes = total /  60;
    seconds = total % 60;
    
    

    
    cout << "hours ="<< hours<< endl; 
    cout <<"minutes = "<< minutes << endl;
     cout << " seconds=" << seconds << endl;

     return 0;

}