#include <iostream>
#include <iomanip>

using namespace std;

float fahrenhietToCelsius(float n){
    return (n - 32.0) * 5.0 / 9.0;
}

int main(){
    float value;

    cout<<"Enter a fahrenhiet value = ";
    cin>>value;

    float celsius = fahrenhietToCelsius(value);

    cout<<"Value in celsius = "<<fixed<<setprecision(2) <<celsius;
}


