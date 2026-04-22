#include <iostream>

using namespace std;

int factorsOfNumber(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
}

int main(){
    int n;

    cout<<"Enter a number to find it's factors : ";
    cin>>n;

    cout<<"Factors of"<<n<<" are:"<<endl;
    factorsOfNumber(n);
}