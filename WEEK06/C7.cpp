#include <iostream>
using namespace std;

void print(int m,int n){
    for(int i=0;i<m;i++){
        cout<<" ";
    }
    for(int j=0;j<n;j++){
        cout <<"*";
    }
}
int main(){
    int m,n;
    cin >> m >>n;
    int k = n-1;
    for(int i=0;i<n;i++){
        print(k,2*i+1);
        cout<<endl;
        k--;
    }
}