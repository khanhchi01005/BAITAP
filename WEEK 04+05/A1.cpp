#include<iostream>
using namespace std;

//storgae size of 'a1' isn't known
int a1[];
int a2[4]={1,2,3,4};
int a3[]={1,2,3,4,5};

int main(){
    int a1[];
    int a2[4]={1,2,3,4};
    int a3[]={1,2,3,4,5};
    for(int i:a1){
        cout <<i<<" ";
    }
    cout<<endl;
    for(int i:a2){
        cout <<i<<" ";
    }
    cout<<endl;
    
    for(int i:a3){
        cout <<i<<" ";
    }
    cout <<endl;
    
}