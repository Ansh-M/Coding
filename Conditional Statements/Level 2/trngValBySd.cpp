#include <iostream>
using namespace std;

int main(){
    double sideOne=0.0, sideTwo=0.0, sideThree=0.0;
    cout<<"Enter 3 sides of a Triangle : ";
    cin>>sideOne>>sideTwo>>sideThree;
    
    if((sideOne + sideTwo)>sideThree && (sideOne + sideThree)>sideTwo && (sideTwo + sideThree)>sideOne){
        cout<<"Valid Triangle";
    }else cout<<"Not Valid Triangle";
    
    return 0;
}