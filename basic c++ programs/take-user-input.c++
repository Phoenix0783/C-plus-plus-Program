#include <iostream>
#include <string>

using namespace std;

int main(){
    string userInputString;

    cout<<"Enter your input below to display \n";
    getline(cin,userInputString);
    cout<<"\n";

    cout<<"You typed \""<< "\033[31m"<< userInputString <<"\033[0m"<<"\"";
    //"\033[0m" is an ANSI escape code which is used to provide different color to the output.
}