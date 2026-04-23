#include <iostream>

using namespace std;

int calculateEvenFibonnaci(int n){
    if(n<=1){
     return n;   
    }
    
    int prev1=1,prev2=0;
    int curr;
    int arr[n];
    int sum=0;

    for(int i =2;i<=n;i++){
        curr = prev1 + prev2;
        prev2= prev1;
        prev1=curr;

        arr[i]=curr;
    }

    cout<<"Even fibonnaci series :"<<endl;
    for(int j=0;j<n;j++){
        if(j%2==0){
            cout<<arr[j]<<" ";
            sum = sum + arr[j];
        }
    }
    cout<<endl<<"Summation of even fibonacci series = "<<sum;

}

int main(){
    int n;

    cout<<"Enter Fibonnaci range : ";
    cin>>n;

    calculateEvenFibonnaci(n);
}