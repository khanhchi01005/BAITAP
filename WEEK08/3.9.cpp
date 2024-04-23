#include <iostream>
using namespace std;

struct Point{
    int x;
    int y;
};

void p1(Point point){
    cout << &point<<endl; // khac dia chi
}
void p2(Point &point){
    cout << &point<<endl; // cung dia chi
}
int main(){
    Point p;
    p.x =1;
    p.y=2;
    cout << &p<<endl;
    p1(p);
    p2(p);

}