#include <iostream>

using namespace std;

float simpleInterest(float P,float R,float T){
    return (P * R * T) / 100;
}

int main(){

    float principalAmount, rateOfInterest,time;

    cout<<"Enter principal amount = ";
    cin>>principalAmount;

    cout<<"Enter rate of interest = ";
    cin>>rateOfInterest;

    cout<<"Enter time (year) = ";
    cin>>time;

    float result = simpleInterest(principalAmount,rateOfInterest,time);
    
    cout<<"Simple interest generated = "<<result;
    
}