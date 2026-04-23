#include <iostream>

using namespace std;

int main(){
    int rows;
    cout<<"Enter number of rows in pyramid : ";
    cin>>rows;

    for(int i=rows;i>0;i--){
        for(int j=0;j<=rows;j++){
            if(j>=i){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}