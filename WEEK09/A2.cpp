#include <iostream>
using namespace std;

int main(){
    int* p = new int;
    int* p2 = p;
    *p = 10;
    delete p; // loi
    *p2 = 100;
    cout << *p2;
    delete p2; // loi
 //loi vi van con con tro tro toi vung nho do 
 // loi giai phong bo nho qua som 
 

}