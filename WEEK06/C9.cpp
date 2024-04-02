#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int random(int n){
    return rand()%n;
}

int main(){
    srand(time(NULL));

    int n;
    cin >>n;

    int random_number = random(n);
    cout << random_number;
}