#include <iostream>

using namespace std;

int main(){
    int a,b;
    cout<<"FINDING GCD";

    cout<<"Enter 2 numbers";
    cin>>a;
    cin>>b;

    int c = min(a,b);
    while(c>1){
        if(a % c == 0 && b % c ==0){
            break;
        }
        c--;
    }
    cout<<"GCD of "<<a<<" "<<b<<" = "<<c;
}