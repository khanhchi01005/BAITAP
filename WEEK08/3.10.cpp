#include <iostream>
using namespace std;

struct Point{
    int x,y;
};
struct Rectangle{
    Point topLeft;
    Point bottomRight;
};

Rectangle r1;
r1.topLeft.x = 0;
r1.topLeft.y=0;
r1.bottomRight.x =1;
r1.bottomRight.y =1;

Rectangle r2= r1;
r2.topLeft.x =2; //Thay doi gia tri cua topLeft x torng r2
cout << r1.topLeft.x; //0
cout << r2.topLeft.x; //2
// Vi phep gan tren chi sao chep gia tri tu r1 sang r2
// Khi gia tri cua truong r2 thay doi thi r1 van giu nguyen

