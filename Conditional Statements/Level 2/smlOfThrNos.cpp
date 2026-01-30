#include <iostream>
using namespace std;

int main(){
    float numberOne=0.0, numberTwo=0.0, numberThree=0.0;
    cout<<"Enter 3 Numbers : ";
    cin>>numberOne>>numberTwo>>numberThree;

    if(numberOne < numberTwo && numberOne < numberThree){
        cout<<numberOne<<" is the smallest";
    }else if(numberTwo < numberThree){
        cout<<numberTwo<<" is the smallest";
    }else{
        cout<<numberThree<<" is the smallest";
    }
    
    return 0;
}