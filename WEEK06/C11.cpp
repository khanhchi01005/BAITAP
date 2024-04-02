#include <iostream>
#include <vector>
#include <cstring>
#include <cmath>
using namespace std;

// Tu he thap phan sang he nhi phan 
string DetoBi(int n){
    string s=" ";
    while (n>0){
        s = to_string(n%2)+s;
        n/=2;
    }
    return s;
}
//Tu he thap phan sang he nhi phan
int BitoDe(int n){
    string s = to_string(n);
    int sum =0;
    int len = s.length();
    int k=0;
    for(int i=len-1;i>=0;i--){
        sum = (s[k]-'0')*pow(2,i)+sum;
        k++;
    }
    return sum;

}

int main(){
   int n;
   cin >>n;
    string output = DetoBi(n);
    cout <<output<<endl;

    int x;
    cin >>x;
    int Dec = BitoDe(x);
    cout << Dec << endl;
}