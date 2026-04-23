#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int base,exponent,result;

    cout<<"Enter base value : ";
    cin>>base;

    cout<<"Enter exponent value : ";
    cin>>exponent;

    result = pow(base,exponent);

    cout<<"Result of base "<<base<<" raised to the power of "<<exponent<<" is "<<result;
}