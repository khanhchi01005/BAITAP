#include <iostream>
using namespace std;

void reverse (const char*a){
    int len =0;
    while(a[len]!='\0'){
        len++;
    }
     char* reverse = new char[len+1];
     for(int i=0;i<len;i++){
        reverse[i]=a[len-1-i];
     }
     reverse[len]='\0';
     cout << reverse;
     delete[] reverse;
}
int main(){
    char a[1000];
    cin >>a;
    reverse (a);
    cout <<endl;
    cout << a;


}