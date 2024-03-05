#include<iostream>

using namespace std;

int calculate_salary(int hour);
int main(){
    int hour; 
    cout <<"Working hours: ";
    cin >>hour;
    int output = calculate_salary(hour);
    cout <<"Salary: " <<output<<endl;

}
int calculate_salary(int hour){
    int salary;
    if (hour <=100){
        salary = 12000*hour;
    }
    else{
        int extra_hour = hour -100;
        if(extra_hour<=50){
            salary = 12000*100 + extra_hour*16000;
        }
        else if(extra_hour>=50 && extra_hour<=100){
           int extra_hour_actual = extra_hour-50;
            salary = 12000*100 + 16000*50 + extra_hour_actual*20000;
        }
        else{
            int extra_hour_actual = extra_hour -100;
            salary = 12000*100 + 16000*50 +20000*50 + extra_hour_actual*25000;
        }
    }
    return salary;
}
