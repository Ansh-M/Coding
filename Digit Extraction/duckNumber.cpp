#include<iostream>
using namespace std;

void duckNumberChecker(int num){
    int zeroDigit=1;
    if(num%10==0) zeroDigit=num%10;
    num=num/10;
    if(num%10==0) zeroDigit=num%10;
    num=num/10;
    if(num%10==0) zeroDigit=num%10;
    num=num/10;
    if(num%10==0 && num%10==00) zeroDigit=1;

    if(zeroDigit==0) cout<<"Duck Number";
    else cout<<"Not Duck Number";
}

int main(){
    int number=0;
    cout<<"Enter a 4 digit Number: ";
    cin>>number;

    duckNumberChecker(number);
    
}