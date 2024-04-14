#include <iostream>
using namespace std;

void delete_char(char a[],char c){
    int length = 0;
    while(a[length]!='\0'){
        length++;
    }
    for(int i=0;i<length;i++){
        if(a[i]==c){
            for(int j=i;j<length;j++){
                a[j]=a[j+1];
            }
        }
    }
}
int main(){
    char a[100];
    cin >>a;
    char c;
    cin >>c;
    delete_char(a,c);
    cout <<a;
}
// abcdcf