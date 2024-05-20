#include <Iostream>
using namespace std;
int main(){
    cout <<"Hang ngang: "<<endl;
    int n; cin>>n;
    cout <<"Hang doc: "<<endl;
    int k;
    cin >>k;
    cout <<endl;
    int arr[n][k];
    for (int i=0; i<n; i++){
        for (int j=0; j<k;j++){
            cin>>arr[i][j];
            
            
        }
        
    }
     for (int i=0; i<n; i++){
        for (int j=0; j<k;j++){
            cout <<arr[i][j]<<"\t";
        }
cout <<endl;

     }
     return 0;
}
