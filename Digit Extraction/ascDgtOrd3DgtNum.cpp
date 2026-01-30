#include<iostream>
using namespace std;

void ascendingOrderDigits(int num){
    int digit=0;
    digit = num%10;
    num = num/10;
    if(digit > num%10){ 
        digit = num%10;
        num = num/10;
        cout<<"Digits are in Strictly Ascending Order";
    } else cout<<"Digits are not in Ascending Order"; 
}

int main(){
    int number=0;
    cout<<"Enter a 3 digit Number: ";
    cin>>number;

    ascendingOrderDigits(number);
}