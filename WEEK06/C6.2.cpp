#include<iostream>

using namespace std;

bool prime(int n){
    if(n==2){
        return true;
    }
    else{
        for(int i=2;i<n;i++){
            if(n%i==0){
                return false;
            }
        }
    }
    return true;
}
int gcd(int a,int b){
    if(b==0){
        return a;
    }
    else{
        return gcd(b,a%b);
    }
}
int main(){
    int x,y;
    cin >> x>>y;
    int output = gcd(x,y);
    if(prime(x) && prime(y) && output ==1){
        cout <<"YES";
    }
    else{
        cout <<"NO";
    }
}