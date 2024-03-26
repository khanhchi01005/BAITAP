#include<iostream>
using namespace std;

int main(){
    char str[5];
    cin >> str;
    cout <<"_"<<str<<"_"<<endl;
}
/*
 input: abcd -> abcd
 intput: abcde -> abcde
 input: abcdef->abcdef
 // Because In C++, it allows you to input more caracters than the size of the array. But it can lead to  a buffer overflow 
*/