#include <iostream>

using namespace std;
int main(){
    int score,count,sum =0;
    while(true){
        cout<<"Nhap diem mon hoc "<<count+1<<": ";
        cin >>score;

        if(score<0){
            break;
        } 

        while(score>10){
            cout <<"Nhap lai diem mon "<<count+1<<":";
            cin >>score;
        }

        sum+=score;
        count ++;
    }

    if(count >0){
        float average = float(sum) /count;
        cout <<"Diem trung binh cua "<<count +1<<" mon hoc"<<average;
    }

}