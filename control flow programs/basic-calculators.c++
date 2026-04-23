#include <iostream>

using namespace std;

int main(){
    char op;
    int a,b,result;

    cout<<"Enter an operator ( + , - , * , / ): ";
    cin>>op;

    cout<<"Enter 2 numbers"<<endl;
    cout<<"a = ";
    cin>>a;

    cout<<"b = ";
    cin>>b;

    switch(op){
        case '+' :
        result = a+b;
        cout<<result;
        break;

        case '-' :
        result = a-b;
        cout<<result;
        break;

        case '*' :
        result = a*b;
        cout<<result;
        break;

        case '/' :
        result = a/b;
        cout<<result;
        break;

        default:
        cout<<"Entered operator is not in the list";
    }
}