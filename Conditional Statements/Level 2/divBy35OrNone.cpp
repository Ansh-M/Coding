#include<iostream>
using namespace std;

int main(){
    int number=0.0;
    cout<<"Enter a number (to check divisibility by 3,5) : ";
    cin>>number;

    if(number%3 == 0){
        if(number%5 == 0) cout<<"Number is divisible by 3 & 5";
        else  cout<<"Number is divisible by 3 only";
    }else if(number%5 == 0) cout<<"Number is divisible by 5 only";
    else cout<<"Not divisible by 3 or 5";
}