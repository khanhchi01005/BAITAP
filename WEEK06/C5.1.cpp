#include <iostream>

using namespace std;

bool prime(int n){
    if(n==2){
        return true;
    }
    else{
        for(int i=2;i<n;i++){
            if(n%i==0){ return false;}
        }
    }
    return true;
}
int main(){
    int n;
    cin >>n;
    if(prime(n)){
        cout <<"Yes";
    }
    else{
        cout<<"No";
    }
}