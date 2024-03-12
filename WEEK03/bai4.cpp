#include<iostream>

using namespace std;

struct Point{
    double x;
    double y;
};
struct Rect{
    double x,y,w,h;
    bool contains(const Point& point) {
        bool X =(point.x>=x)&&(x<=point.x+w);
        bool Y =(point.y>=y)&&(y<=point.y + h);
        return  X &&  Y;
        }

    
};
int main(){
    Point p1;
    cin >> p1.x>>p1.y;
    Rect rect1;
    cin >> rect1.x >>rect1.y >> rect1.w >> rect1.h;
    if(rect1.contains(p1)){
        cout <<"inside"<<endl;
    }
    else{
        cout <<"outside"<<endl;
    }
   

}