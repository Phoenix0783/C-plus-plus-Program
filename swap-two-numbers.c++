#include <iostream>

using namespace std;

int main(){
    int a,b;
    int temp;

    cout<<"Enter values for a and b \n";

    cout<<"a = ";
    cin>>a;

    cout<<"b = ";
    cin>>b;

    cout<<"Before swapping: a = "<<a<<" & b = "<<b;
    cout<<"\n";

    temp = a;
    a = b;
    b = temp;

    cout<<"After swapping: a = "<<a<<" & b = "<<b;
}