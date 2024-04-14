#include <iostream>
using namespace std;

bool binary_search(int arr[],int n, int x){
    int left =0;
    int right = n-1;
    while(left<=right){
        int mid = (left +right)/2;
        if(x==arr[mid]){
            return true;
        }
        else if(x > arr[mid]){
            left = mid +1;
        }
        else{
            right = mid-1;
        }
    }
    return false;
}
int main(){
    int n;
    cin >>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >>arr[i];
    }
    int count =0;
    for(int i=0;i<n;i++){
        if(binary_search(arr,n,i)){
            cout <<i<<" ";
        }
    }
}
        /*else{
            count ++;
        }
    }
    if(count ==n){
        cout <<"None";
    }
}
*/