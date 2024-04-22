#include <iostream>
using namespace std;

int x=5;
int main(){
    int *ptr = new int;
    ptr = &x;
    delete ptr; // Loi: giai phong vung nho cua bien toan cuc
}
// Khi bien toan cuc duoc giai phong thi vung nho ma con tro tro toi khong con hop le nua
// Viec su dung lenh delete dan den loi 
