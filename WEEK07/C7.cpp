#include <iostream>
#include <cstring>
using namespace std;

void trim_left(char a[]){
    int length =0;
    int count =0;
    while (a[length]!='\0'){
        if(a[length]=='_'){
            count ++;
        }
        length++;
        
    }
    if(count>0){
        for(int i=0;i<length;i++){
            a[i]=a[i+count];
        }
        a[length-count]='\0';
    }
}
int main(){
    char a[100];
    cin >>a;
    trim_left(a);
    cout <<a;
}