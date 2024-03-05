#include<iostream>
using namespace std;

double calculate_celcius(double n);
double calculate_kevin(double celcius);
int main(){
    double input;
    cin >>input;
    double C_degree= calculate_celcius(input);
    double K_degree=calculate_kevin(C_degree);
    cout <<input <<" "<<C_degree<<" "<<K_degree<<endl;
}
double calculate_celcius(double n){
   double celcius= (n-32)*5/9.0;
   return celcius;
}
double calculate_kevin(double celcius){
    double kevin = celcius +273.15;
    return kevin;
}
