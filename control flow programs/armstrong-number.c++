#include <iostream>
#include <cmath>

using namespace std;

int countDigits(int n){
    int count = 0;
    while(n>0){
        count++;
        n = n/10;
     
    }
    return count;

}

int main(){
    int n,sum = 0,temp,count;

    cout<<"Enter a number to check if it's Armstrong number : ";
    cin>>n;

    temp = n;
    count = countDigits(n);

    temp = n;
    while(temp>0){
        int a = temp % 10;
        sum  = sum + round(pow(a,count));
        temp = temp / 10;
    }

    if(sum==n){
        cout<<"Number is Armstrong";
    }else{
        cout<<"Number is not Armstrong";
    }
}