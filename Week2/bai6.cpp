#include<iostream>
using namespace std;

void print_matrix(int n);
int main(){
    int n;
    cin >>n;
    print_matrix(n);
}
void print_matrix(int n){
    int matrix [n+10][n+10];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           matrix[i][j]=(i+j)%n +1;
        }
    }

    //in
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << matrix[i][j]<<" ";
        }
        cout << endl;
    }
}
