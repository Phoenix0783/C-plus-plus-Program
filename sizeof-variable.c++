#include <iostream>

using namespace std;

int main(){
    int integertype;
    char charType;
    float floatType;
    double doubleType;
    int arr[10];
    string stringType = "Hello World";

    cout<<"Size of integer: "<< sizeof(integertype)<<"\n";
    cout<<"Size of character: "<< sizeof(charType)<<"\n";
    cout<<"Size of float: "<< sizeof(floatType)<<"\n";
    cout<<"Size of double: "<< sizeof(doubleType)<<"\n";
    cout<<"Size of array: "<< sizeof(arr)<<"\n";
    cout<<"Size of string: "<< sizeof(stringType)<<"\n";
}