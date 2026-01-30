#include<iostream>
using namespace std;

void countEvenDigits(int num){
    int cnt=0;
    if((num%10)%2 == 0) cnt++;
    num = num/10;
    if((num%10)%2 == 0) cnt++;
    num = num/10;
    if((num%10)%2 == 0) cnt++;
    num = num/10;
    if((num%10)%2 == 0) cnt++;

    cout<<"Even Digits Count: "<<cnt;
}

int main(){
    int number=0;
    cout<<"Enter a 4 digit number: ";
    cin>>number;

    countEvenDigits(number);
    
    return 0;
}