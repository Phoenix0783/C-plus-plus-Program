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

int checkArmstrong(int n){
     int temp = n;
     int count = countDigits(n);
     int sum = 0;

    temp = n;
    while(temp>0){
        int a = temp % 10;
        sum  = sum + round(pow(a,count));
        temp = temp / 10;
    }

     if(sum==n){
        return true;
    }else{
        return false;
    }
}

int main(){
    int lb,ub;

    cout<<"Enter lower bound of range : ";
    cin>>lb;
    cout<<"Enter upper bound of range : ";
    cin>>ub;
    
    for(int i=lb;i<=ub;i++){
        if(checkArmstrong(i)){
            cout<<i<<" ";
        }
    }
}