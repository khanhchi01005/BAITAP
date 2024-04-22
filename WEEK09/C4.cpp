#include <iostream>
using namespace std;

void pad_left(char a[], int n){
    int length =0;
    while(a[length]!='\0'){
        length++;
    }
    char *res = new char[length];
     int substract = n-length;
    if(substract>0){
        for(int i=0;i<length;i++){
            res[i]=a[i];
        }
        for(int i=length;i<n;i++){
            res[i]='_';
        }
    }
    res[n]='\0';
    cout << res<< endl;
    delete[] res;

}
int main(){
    char a[100];
    cin >>a;
    int n;
    cin >>n;
    pad_left(a,n);
    cout <<a;
}