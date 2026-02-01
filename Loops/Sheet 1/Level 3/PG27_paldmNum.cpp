#include<iostream>
using namespace std;

int reverseNumber(int num){
    int reverse=0;
    // for( ; num!=0 ; num=num/10){
    //     reverse = (reverse * 10) + (num % 10);
    // }
    // return reverse;

    while(num != 0){
        reverse = (reverse * 10) + (num % 10);
        num = num / 10;
    }
    return reverse;
}

void palindromeChecker(int num, int rev){
    if(num == rev) cout<<"Palindrome Number";
    else cout<<"Not a Palindrome Number";
}

int main(){
    int number=0;
    cout<<"Enter a number: ";
    cin>>number;
    
    int reverse = reverseNumber(number);
    palindromeChecker(number, reverse);
    return 0;
}