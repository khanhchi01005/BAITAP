#include <iostream>
using namespace std;

void pad_left(char a[], int n){
    int length =0;
    while(a[length]!='\0'){
        length++;
    }
     int substract = n-length;
    if(substract>0){
        for(int i=length;i<n;i++){
            a[i]='_';
        }
    }
    a[n]='\0';

}
int main(){
    char a[100];
    cin >>a;
    int n;
    cin >>n;
    pad_left(a,n);
    cout <<a;
}