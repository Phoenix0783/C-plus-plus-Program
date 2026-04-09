#include <iostream>

using namespace std;

int areaOfRectangle(int l,int b){
    int area = l * b;
    return area;
}

int perimeterOfRectangle(int l,int b){
    int perimeter = 2 * (l + b);
    return perimeter;
}

int main(){
    int length,breadth;

    cout<<"AREA AND PERIMETER OF RECTANGLE \n";

    cout<<"Enter length = ";
    cin>>length;

    cout<<"Enter breadth = ";
    cin>>breadth;

    int area = areaOfRectangle(length,breadth);
    int perimeter = perimeterOfRectangle(length,breadth);

    cout<<"Area of rectangle = "<<area;\
    cout<<"\n";
    cout<<"Perimeter of rectangle = "<<perimeter;
}