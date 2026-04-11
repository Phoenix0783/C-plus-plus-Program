#include <iostream>

using namespace std;

int main(){
    int multiple,multipleTillNumber;

    cout<<"GENERATE MULTIPLE TABLE \n";
    cout<<"Enter a multiple number to generate table for: ";
    cin>>multiple;
    cout<<"multiples till? : ";
    cin>>multipleTillNumber;

    for(int i = 1; i<=multipleTillNumber ; ++i){
        cout<<multiple<<" X "<<i<<" = "<<multiple * i<<"\n";
    }

}