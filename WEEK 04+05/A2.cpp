#include<iostream>
#include<string.h>
using namespace std;

char a[6];
char b1[5]="abcd"; // abcd
char b2[3]="abcd" // initializer-string for ‘char [3]’ is too long;
char b3[4]="abcd" //initializer-string for ‘char [4]’ is too long;
char s[]="abcd"// abcd and size is 5;

int main(){
    char a[6];
    char b1[5]="abcd";
    char b2[3]="abcd";
    char b3[4]="abcd";
    char s[]="abcd";
    for(int i:a){ cout <<i<< " ";}
    cout <<endl;
    cout <<a;
    for(int i:b1){cout <<i<<" ";}
    cout <<endl;
    cout <<b1;
    for(int i:b2){cout <<i<<" ";}
    cout <<endl;
    cout <<b2;
    for(int i:b3){cout <<i<<" ";}
    cout <<endl;
    cout <<b3;
    for(int i:s){cout <<s<<" ";}
    cout <<endl;
    cout <<s;
    cout <<sizeof(s);


}