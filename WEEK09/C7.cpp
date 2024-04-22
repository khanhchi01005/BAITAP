#include <iostream>
#include <cstring>
using namespace std;

void trim_right(char a[]){
    int length =0;
    int count =0;
    while (a[length]!='\0'){
        if(a[length]=='_'){
            count ++;
        }
        length++;
    }
    char *res = new char[length];
    if(count>0){
        for(int i=0;i<length-count;i++){
            res[i]=a[i];
        }
        res[length-count]='\0';
    }
    cout << res<<endl;
    delete[] res;
}
int main(){
    char a[100];
    cin >>a;
    trim_right(a);
    cout <<a;
}