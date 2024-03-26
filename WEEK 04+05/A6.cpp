#include <iostream>
#include <cstdlib>
using namespace std;

void BubbleSort(int a[],int n){
    for(int i=0;i<n-1;i++){
        int check =0;
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                int temp =0;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }

    }
}
int main(){
    int a[30];
    srand(time(nullptr));
    for(int i=0;i<30;i++){
        a[i]= rand()% 2005;
    }
    BubbleSort(a,30);
    for(int i:a){
        cout <<i<<" ";
    }
}