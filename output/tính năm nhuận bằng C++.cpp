#include <iostream>
using namespace std;
int main() {

int years;
cout << " Vui long nhap so nam = " ;
cin >> years;


if ( years % 4 == 0 && years % 100 != 0 || years % 400 == 0  ){
    cout << "Nam "<< years <<" la nam nhuan!" << endl;
    cout << "Trong nam nay, thang 2 co 29 ngay thay cho 28 ngay!" << endl;
}

else
{
    cout << "Nam "<< years << " khong phai la nam nhuan!" << endl;
}
return 0;


}

