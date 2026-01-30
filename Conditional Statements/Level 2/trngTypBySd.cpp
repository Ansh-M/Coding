#include <iostream>
using namespace std;

int main(){
    double sideOne=0.0, sideTwo=0.0, sideThree=0.0;
    cout<<"Enter 3 sides of a Triangle : ";
    cin>>sideOne>>sideTwo>>sideThree;

    if((sideOne + sideTwo)>sideThree && (sideOne + sideThree)>sideTwo && (sideTwo + sideThree)>sideOne){
        if(sideOne == sideTwo && sideOne == sideThree) cout<<"Equilateral";
        else if(sideOne == sideTwo) cout<<"Isocales";
        else if(sideOne == sideThree) cout<<"Isocales";
        else if(sideTwo == sideThree) cout<<"Isocales";
        else cout<<"Scalene";
    }else cout<<"Not Valid Triangle Sides";

    return 0;
}