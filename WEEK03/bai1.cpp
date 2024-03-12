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
}
