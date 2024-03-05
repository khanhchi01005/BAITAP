#include<iostream>
using namespace std;
int main(){
    int n;
    cin >>n;
    for(int i=n-1;i>=0;i--){
        for(int space=0;space<n-i-1;space++){
            cout <<" ";
        }
        for(int j= 2*i;j>=0;j--){
            cout <<"*";
        }
        cout <<endl;
    }
}
