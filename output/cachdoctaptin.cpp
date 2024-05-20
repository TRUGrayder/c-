#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    FILE *file = fopen ("dulieu.txt","r");
    char *s =NULL;
    do
    {
        char line[255];
        s= fgets(line,255,file);
        cout <<s;
        if(s==NULL){
            break;
        }
    } while (true);
    fclose(file);
    
    return 0;
}