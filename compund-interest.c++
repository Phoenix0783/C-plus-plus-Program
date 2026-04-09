#include <iostream>
#include <cmath>

using namespace std;

float compoundInterest(float P,float R,float T){
    float amount = P * ((pow((1 + R/100),T)));
    double compoundInterest = amount - P;
    return compoundInterest;
}

int main(){

    double principalAmount, rateOfInterest,time;

    cout<<"Enter principal amount = ";
    cin>>principalAmount;

    cout<<"Enter rate of interest = ";
    cin>>rateOfInterest;

    cout<<"Enter time (year) = ";
    cin>>time;

    double result = compoundInterest(principalAmount,rateOfInterest,time);
    
    cout<<"Compound interest generated = "<<result;
    
}