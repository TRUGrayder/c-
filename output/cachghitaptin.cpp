#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    FILE *file=fopen("dulieu.txt","w");
    fputs("Nguyen Thi Nhi Xinh Gai Nhat Tren Doi\n",file);
    fputs("Yeu em be nhi rat nhieu va thuong em be nhi nua\n",file);
    fputs("Sau nay trung se co gang lam that nhieu tien de giau hon be nhi va lay be nhi lam vo sau do nuoi be nhi suot doi luon\n",file);
    fclose(file);
    return 0;
}