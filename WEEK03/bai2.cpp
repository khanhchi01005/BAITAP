#include<iostream>
using namespace std;

struct Point{
    int x,y;
};
void passbyvalue(Point p){
    p.x =24;
    p.y=36;
}
void passbyreference(Point& p){
    p.x =54;
    p.y=36;
}
int main(){
    Point point;
    int x,y;
    cin>>point.x>>point.y;
    passbyvalue(point);
    cout <<point.x<<" "<<point.y<<endl;
    passbyreference(point);
    cout <<point.x<<" "<<point.y;
}
