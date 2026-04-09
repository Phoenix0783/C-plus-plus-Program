#include <iostream>

using namespace std;

int main(){
    int a,b,c;

    cout<<"Enter values below \n";

    cout<<"a = ";
    cin>>a;
    cout<<"\n";

    cout<<"b = ";
    cin>>b;
    cout<<"\n";

    cout<<"c = ";
    cin>>c;
    cout<<"\n";

    if(a>=b && a>=c){
        cout<<a<<" is largest among 3 numbers";
    }
    else if(b>=a && b>=c){
        cout<<b<<" is largest among 3 numbers";
    }
    else{
        cout<<c<<"is largest among 3 numbers";
    }
}