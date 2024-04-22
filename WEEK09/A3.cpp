#include <iostream>
using namespace std;

int main(){
    char* a = new char[10];
char* c = a + 3;
for (int i = 0; i < 9; i++) a[i] = 'a'; 
a[9] = '\0';
cerr <<"a: " << "-" << a << "-" << endl;
cerr <<"c: " << "-" << c << "-" << endl;
delete c; // loi
cerr << "a after deleting c:" << "-" << a << "-" << endl;
// loi xay ra vi con tro c khong duoc cap phat bo nho dong ma lai su dung lenh delete, dieu nay se dan den hanh vi khong xac dinh
}