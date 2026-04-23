#include <iostream>

using namespace std;

int main(){
     
     int rows;
     int i,j,k;
    cout<<"Enter number of rows in pyramid : ";
    cin>>rows;
     k=rows;

    for(int i=0;i<=rows;i++){
        for(int j=0;j<=rows;j++){
            if(j>=k){
                cout<<"* ";
            }else{
                cout<<" ";
            }
        }
        k--;
        cout<<endl;
    }
return 0;
}