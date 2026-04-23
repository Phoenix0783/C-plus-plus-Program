#include <iostream>

using namespace std;

int reverseNumber(int n,int result){
    while(n>0){
        result = result * 10 + n % 10;
        n = n / 10;
    }
    return result;
}

int main(){
    int n, result = 0;

    cout<<"Enter a number to reverse: ";
    cin>>n;
    cout<<endl;

    

    cout<<"Reverse of "<<n<<" = "<<reverseNumber(n,result);
}