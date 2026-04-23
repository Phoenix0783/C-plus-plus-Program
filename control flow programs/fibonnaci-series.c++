#include <iostream>

using namespace std;

int findFibonacci(int n){
    if(n<=1){
        return n;
    }
    return findFibonacci(n-1) + findFibonacci(n-2);
}

// above function uses recursion, you can also do it using loops

int main(){
    int n;

    cout<<"Enter a nth number to find it's fibonnaci : ";
    cin>>n;

    cout<<findFibonacci(n);
}