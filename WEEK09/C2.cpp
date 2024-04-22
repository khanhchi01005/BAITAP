#include <iostream>
using namespace std;

void delete_char( const char *a, char c){
    int len =0;
    int j=0;
    while (a[len]!='\0'){
        len ++;
    }
    char *res = new char[len+1];
    for(int i=0;i<len;i++){
        if(a[i]!=c){
            res[j]=a[i];
            j++;
        }
    }
    res[j]='\0';
    cout << res;
    delete [] res;

}
int main(){
    char a[1000];
    cin >>a;
    char c;
    cin >>c;
    delete_char (a,c);
    cout<<endl<<a;
}