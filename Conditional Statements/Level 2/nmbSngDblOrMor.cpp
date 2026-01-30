#include<iostream>
using namespace std;

int main(){
    float number;
    cout<<"Enter a Number : ";
    cin>>number;

    if(number >= 0){
        if(number >=0 && number < 10){
            cout<<"Single Digit";
        }else if(number >=0 && number < 100){
            cout<<"Double Digit";
        }else{
            cout<<"Multi Digit";
        }
    }else{
        if(number < 0 && number > -10){
            cout<<"Single Digit";
        }else if(number <= -10 && number > -100){
            cout<<"Double Digit";
        }else{
            cout<<"Multi Digit";
        }
    }

    return 0;
}