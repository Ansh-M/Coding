#include<iostream>
using namespace std;

int sumOfDigits(int num){
    int sum=0;
    sum += num % 10; // 321 -> 1
    num = num / 10; // 32
    sum += num % 10; // 32->2
    num = num / 10; // 3
    sum += num % 10; // 3->3
    return sum;
}

int productOfDigits(int num){
    int prod=1;
    prod *= num % 10; // 321 -> 1
    num = num / 10; // 32
    prod *= num % 10; // 32->2
    num = num / 10; // 3
    prod *= num % 10; // 3->3
    return prod;
}

void spyNumberChecker(int sumOD, int prodOD){
    if(sumOD == prodOD) cout<<"Spy Number";
    else cout<<"Not a Spy Number";
}

int main(){
    int number=0;
    cout<<"Enter a 3 digit Number: ";
    cin>>number;

    int sum = sumOfDigits(number);
    int product = productOfDigits(number);
    spyNumberChecker(sum, product);

    return 0;
}