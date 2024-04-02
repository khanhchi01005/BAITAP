#include <iostream>
using namespace std;

int main(){
    int a[3]={1,2,3};
    char b[3]={'a','b','c'};

    for(int i=0;i<3;i++){
        cout << &a[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<3;i++){
        cout << (void*)&b[i]<<" ";
    }
}
// Dia chi cua cac bien kieu int tang dan 
// Dia chi cua cac bien kieu char tang dan 