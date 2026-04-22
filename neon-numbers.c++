#include <iostream>

using namespace std;

int checkNeon(int a){
    int sqaureOfNumber = a * a;
    int sum = 0;

    while(sqaureOfNumber!=0){
        sum = sum + sqaureOfNumber%10;
        sqaureOfNumber = sqaureOfNumber/10;
    }
    return(sum==a);
}

int main(){
    int n = 30000;
    for(int i=0;i<=n;i++){
        if(checkNeon(i)){
            cout<<i<<" ";
        }
    }
}