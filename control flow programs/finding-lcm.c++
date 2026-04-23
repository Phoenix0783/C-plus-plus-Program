#include <iostream>

using namespace std;

int main(){
    int a,b,c,flag = 1;

    cout<<"FINDING LCM\n";

    cout<<"Enter 2 numbers";
    cin>>a;
    cin>>b;

    c = max(a,b);

    while(flag){
        if(c%a==0 && c%b==0){
            cout<<"LCM of "<<a<<" & "<<b<<" = "<<c;
            break;
        }++c;
    }
}