#include <iostream>
using namespace std;

void pad_right(char a[], int n){
    int length= 0;
    int k=0;
     while (a[length]!='\0'){
        length++;
    }
    char *res = new char[length+1];
    int substract = n-length;
    if(substract >0){
        for(int j=0;j<substract;j++){
            res[j]='_';
        }
        for(int i=substract;i<length+substract;i++){
            res[i]=a[k];
            k++;
        }
    }
    res[substract+length]='\0';
    cout << res <<endl;
    delete [] res;
}

int main(){
    char a[100];
    cin >>a;
    int n;
    cin >> n;
    pad_right(a,n);
    cout <<a;
}