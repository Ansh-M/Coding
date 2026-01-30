#include <iostream>
using namespace std;

void harshadNivenNumChecker(int num, int sum){
    if(num % sum == 0) cout<<"Harshad Number";
    else cout<<"Not Harshad Number"; 
}

int sumOfDigits(int num){
    int sum=0;
    sum += num%10;
    num = num/10;
    sum += num%10;
    num = num/10; 
    sum += num%10;
    return sum;
} 

int main(){
    int number=0;
    cout<<"Enter a 3 Digit Number: ";
    cin>>number;

    int sum = sumOfDigits(number);
    harshadNivenNumChecker(number, sum);

    return 0;
}