#include <iostream>
using namespace std;

void truncate(char a[], int n){
    int length =0;
    while (a[length]!='\0'){
        length++;
    }
    if(length>n){
        for(int i=n;i<length;i++){
            a[i]=' ';
        }
    }
    a[length] ='\0';
}
int main(){
    char a[100];
    cin >>a;
    int n;
    cin >>n;
    truncate(a,n);
    cout <<a;
}