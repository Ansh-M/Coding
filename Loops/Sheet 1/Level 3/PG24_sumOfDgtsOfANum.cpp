#include<iostream>
using namespace std;

void sumOfDigits(int num){
    int sum=0;
    // for( ; num!=0 ; num=num/10) sum += num%10;
    // cout<<"Sum of Digits: "<<sum;
    
    while(num != 0){
        sum += num % 10;
        num = num / 10;
    }
    cout<<"Sum of Digits: "<<sum;

}

int main(){
    int number=0;
    cout<<"Enter a Number: ";
    cin>>number;

    sumOfDigits(number);
    return 0;
}