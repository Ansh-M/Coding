#include<iostream>
using namespace std;

int sumOfDigits(int num){
    int sum=0;
    sum += num % 10;
    num = num / 10;
    if(num!=0){
    sum += num % 10;
    num = num / 10;
    }
    if(num!=0){
    sum += num % 10;
    num = num / 10;
    }
    return sum;
}

void neonNumberChecker(int num, int sum){
    if(num == sum) cout<<"Neon Number";
    else cout<<"Not a Neon Number";
}

int main(){
    int number=0;
    cout<<"Enter a 1 digit Number: ";
    cin>>number;
    int squaredNumber = number * number;

    int sum = sumOfDigits(squaredNumber);
    neonNumberChecker(number, sum);

    return 0;
}