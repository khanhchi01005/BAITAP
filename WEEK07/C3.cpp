#include <iostream>
using namespace std;

void pad_right(char a[], int n){
    int length= 0;
     while (a[length]!='\0'){
        length++;
    }
    int substract = n-length;
    if(substract >0){
    for(int i=length-1;i>=0;i--){
        a[i+substract]=a[i];
    }
    for(int i=0;i<substract;i++){
        a[i]='_';
    }
    a[n]='\0';
    }
}

int main(){
    char a[100];
    cin >>a;
    int n;
    cin >> n;
    pad_right(a,n);
    cout <<a;
}