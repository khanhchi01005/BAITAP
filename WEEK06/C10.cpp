#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

int main(){
    srand(time(0));
    vector <int> a;
    
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int x = rand()%50;
        a.push_back(x);
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                int sum =a[i]+a[j]+a[k];
                if(sum%25==0 ){
                    cout <<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;
                }
            }
        }
    }
}
