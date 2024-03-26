#include<iostream>
using namespace std;
int main(){
    
    int a[5]={1,2,3,4,5};
    cout << a[-1]<<endl;
    //16060638
    cout <<a[5]<<endl;
    //53 (because the index starts at 0)
    cout <<a[6]<<endl;
    //12581744
    

   int a[4][3];
   for(int i=0;i<4;i++){
    for(int j=0;j<5;j++){
        cin >>a[i][j];
    }
   }

   for (int i=0;i<4;i++){
    for(int j=0;j<3;j++){
        cout <<a[i][j]<<" ";
    }
    cout <<endl;
   }
   //Mat gia tri

   

}