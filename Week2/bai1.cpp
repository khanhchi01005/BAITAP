#include<iostream>
using namespace std;

bool check_prime(int n);
int main(){
    int n;
    cin >>n;
    if(check_prime(n)){
        cout <<"yes"<<endl;
    }
    else{
        cout <<"no"<<endl;
    }
}
bool check_prime(int n){
    int count =0;
    if(n<2){
        return false;
    }
    else if(n==2){
        return true;
    }
    else{
        for(int i=2;i<n;i++){
            if(n%i==0){
                count++;
                
            }
        }
        if(count ==0){
            return true;
        }
        else{
            return false;
        }
    }
}
