#include<iostream>
using namespace std;
struct Point{
    double x,y;
};
void mid_point(const Point& p1,const Point& p2){
    Point mid;
     mid.x = (p1.x + p2.x)/2;
     mid.y = (p1.y + p2.y)/2;
     cout <<"The midpoint is: "<<mid.x<<","<<mid.y;
}
int main(){
    Point p1;
    Point p2;
    cin >>p1.x>>p1.y;
    cin >>p2.x>>p2.y;
    mid_point(p1,p2);
}