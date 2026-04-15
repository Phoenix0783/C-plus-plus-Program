#include <iostream>

using namespace std;

int main(){
    int n;

    cout<<"Enter a number to check for palindrome = ";
    cin>>n;

    int t = n;
    int reverse = 0;

    while(t>0){
        int a = t % 10;
        reverse = reverse * 10 + a;
        t = t/10;
    }

    if(n == reverse){
        cout<<n<<" is palindrome";
    }else{
        cout<<n<<" is not palindrome";
    }
}