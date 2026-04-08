#include <iostream>

using namespace std;

int main(){

    int size;
    int arr[size];
    int sum = 0;

    cout<<"Enter number of values = ";
    cin>>size;
    cout<<"\n";

    cout<<"Enter value for each \n";

    for(int i = 1;i<=size; i++){
        cout<<"num"<<i<<" = ";
        cin>>arr[i];
    }

    for(int j = 1; j<=size; j++){
        sum = sum + arr[j];
    }

    cout<<"\n";
    cout<<"Addition of values of array = "<<sum;
}