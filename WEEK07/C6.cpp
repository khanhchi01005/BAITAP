#include <iostream>
using namespace std;

bool is_palidrome (char a[]){
    int length =0;
    while(a[length]!=0){
        length++;
    }
    for(int i=0;i<length/2;i++){
        if(a[i]!=a[length-i-1]){
            return false;
        }
    }
    return true;
}
int main(){
    char a[100];
    cin >>a;
    if(is_palidrome(a)){
        cout << "YES";
    }
    else{
        cout <<"NO";
    }
}