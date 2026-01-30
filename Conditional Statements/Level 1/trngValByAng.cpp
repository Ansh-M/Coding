#include <iostream>
using namespace std;

int main(){
    float angleOne=0, angleTwo=0, angleThree=0, sumOfAngles=0;
    cout<<"Enter 3 angle values : ";
    cin>>angleOne>>angleTwo>>angleThree;

    sumOfAngles = angleOne+angleTwo+angleThree;

    if(sumOfAngles == 180.00){
        cout<<"Valid Triangle";
    }else{
        cout<<"Invalid Triangle";
    }

    return 0;
}