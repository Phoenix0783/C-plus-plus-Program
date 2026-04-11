#include <iostream>

using namespace std;

int main(){
    char c;

    cout<<"Enter a character to check for vowel or consonant: ";
    cin>>c;
    cout<<"\n";

    if(c == 'a' ||c == 'A' ||c == 'e' ||c == 'E' ||c == 'i' ||c == 'I' ||c == 'o' ||c == 'O' ||c == 'u' ||c == 'U')
    {
        cout<<c<<" is Vowel";
    }
    else{
        cout<<c<<" is a Consonant";
    }
}