#include<iostream>
using namespace std;

struct Point{
    int x,y;
};
void print(Point p){
    cout <<p.x<<" "<<p.y;
}
int main(){
    int x,y;
    Point p;
    cin >>p.x>>p.y;
    print( p);
    cout << &(p.x)<< endl << &(p.y) << endl << &p;
// Dia chi cua bien x trung voi dia chi cua bien p (point)
// Dia chi cua bien y cach bien x 4 byte
// Cac truong cua cau truc du lieu duoc luu tru lien tiep 
}
