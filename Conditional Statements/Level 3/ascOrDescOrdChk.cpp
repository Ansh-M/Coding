#include<iostream>
using namespace std;

void ascendingOrDescending(float num1, float num2, float num3){
    if(num1 > num2 && num2 > num3) cout<<"Strictly Descending";
    else if(num1 < num2 && num2 < num3) cout<<"Strictly Ascending";
    else cout<<"Neither Ascending Nor Descending";
}

int main(){
    float numberOne=0.0, numberTwo=0.0,  numberThree=0.0;

    cout<<"Enter 3 numbers : ";
    cin>>numberOne>>numberTwo>>numberThree;

    ascendingOrDescending(numberOne, numberTwo, numberThree);
}