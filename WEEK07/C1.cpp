#include <iostream>
using namespace std;
void reverse( char *a){
    int len =0;
    while(a[len]!='\0'){
        len++;
    }
    int left =0;
    int right = len -1;
    char temp=' ';
    while(left <= right){
        temp = a[right];
        a[right]=a[left];
        a[left]=temp;
    }
}
int main(){
    char a[100];
    reverse(a);
    cout <<a;
}