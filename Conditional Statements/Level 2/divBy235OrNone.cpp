#include<iostream>
using namespace std;

int main(){
    int number=0.0;
    cout<<"Enter a number (to check divisibility by 2,3,5) : ";
    cin>>number;

    if(number%2 == 0 || number%3 == 0 || number%5 == 0){
        if(number%2 == 0 && number%3 == 0 && number%5 == 0) cout<<"Number is divisible by 2, 3 & 5";
        else if(number%2 == 0 && number%3 == 0) cout<<"Number is divisible by 2 & 3 only";
        else if(number%2 == 0 && number%5 == 0) cout<<"Number is divisible by 2 & 5 only";
        else if(number%3 == 0 && number%5 == 0) cout<<"Number is divisible by 3 & 5 only";
        else if(number%2 == 0) cout<<"Number is divisible by 2 only";
        else if(number%3 == 0) cout<<"Number is divisible by 3 only";
        else  cout<<"Number is divisible by 5 only";
    }else cout<<"Number is not Divisible";
}