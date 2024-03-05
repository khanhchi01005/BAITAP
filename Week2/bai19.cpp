#include<iostream>

using namespace std;

float average(int n,int m);
int main(){
    int count;
    cout <<"Nhap so mon hoc: ";
    cin >>count;
    int arr[count];
    int times[count];
    float sum,average,sum_times;
    for(int i=0;i<count;i++){
        cout <<"Nhap diem mon hoc so "<<i+1<<": ";
        cin >>arr[i];
        cout <<"Nhap he so cua mon hoc: ";
        cin >>times[i];
        sum+=arr[i]*times[i];
        sum_times+=times[i];
    }
    average=sum/sum_times;
    cout <<"So mon hoc: "<<count<<endl;
    cout <<"Tong he so: "<<sum_times<<endl;
    cout <<"Diem trung binh cua "<<count<< " mon hoc: "<<average;

}
