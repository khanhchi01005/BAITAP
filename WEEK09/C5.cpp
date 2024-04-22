#include <iostream>
using namespace std;

void truncate(char a[], int n){
    int length =0;
    while (a[length]!='\0'){
        length++;
    }
    char *res = new char[length];
    if(length>n){
        for(int i=0;i<length;i++){
            res[i]=a[i];
        }
        for(int i=n;i<length;i++){
            res[i]=' ';
        }
    }
    res[length] ='\0';
    cout << res <<endl;
    delete [] res;
}
int main(){
    char a[100];
    cin >>a;
    int n;
    cin >>n;
    truncate(a,n);
    cout <<a;
}