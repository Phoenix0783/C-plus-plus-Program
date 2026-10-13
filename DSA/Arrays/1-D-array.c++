#include <iostream>

using namespace std;

int main(){
    int arr1[9];
    //above prints random number

    int arr2[9]={};
    int arr3[9]={0};
    //above prints value 0 for every array value

    int arr4[9]={1};
    //above prints only first value 1 and rest of the value 0

    int arr5[]={};
    //above prints nothing

    int arr6[]={1,2,3};
    //above prints 1 2 3 as the value is initialized in an empty array

    // int arr7[4] = {1,2,3,4,5,6};
    //above will give an error as the initialized values exceeds the array size

    int arr8[9]={};
    arr8[5]=56;
    arr8[2]=454;
    //above prints one for initialized array index value and rest of them are 0

    // for(int num:arr8){
    //     cout<<num<<" ";
    // }

    char chr1[9];
    //above prints random characters

    char chr2[]={'d','w','e'};
    //above prints the initialized values

    char chr3[3]={'e','t'};
    /*above prints the first2 initialized value but for the third value it automaically gives it a 
    null character \0 which is not printed and remains invisible*/

    // char chr4[2]={'f','e','e'};
    //above will give error because value exceeds declared array size

    char chr5[3]={'ed','defef'};
    //above will give compiler error because value intialized are string not characters of single value

    for(char c:chr5){
        cout<<c<<" ";
    }

    cout<<"fenkhf"<<"\0"<<"fekefk";
}