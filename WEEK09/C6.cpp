#include <iostream>
#include <cstring>
using namespace std;

void trim_left(char a[]){
    int length =0;
    int count =0;
    while (a[length]!='\0'){
        if(a[length]=='_'){ // thay ky tu trang bang '_'
            count ++;
        }
        length++;
    }
    char *res = new char[length];
    if(count>0){
        for(int i=0;i<length;i++){
            res[i]=a[i];
        }
        for(int i=0;i<length;i++){
            res[i]=res[i+count];
        }
        res[length-count]='\0';
    }
    cout << res <<endl;
    delete[] res;
}
int main(){
    char a[100];
    cin >>a;
    trim_left(a);
    cout <<a;
}