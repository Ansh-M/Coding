#include <iostream>
using namespace std;

void divisibilityBy3(int sum){
    if(sum % 3 == 0) cout<<"Divisible by 3";
    else cout<<"Not Divisible by 3";
}

int digitSum(int num){ // 1233
    int digitSum=0 ;
    digitSum += num % 10; // 0+3
    num = num / 10; // 123
    digitSum += num % 10;  // 3+3=6
    num = num / 10; // 12
    digitSum += num % 10; // 6+2=8
    num = num / 10; // 1
    digitSum += num % 10; // 8+1=9

    return digitSum;
}

int main(){
    int number=0;
    cout<<"Enter a 4 digit Number: ";
    cin>>number;
    int sum = digitSum(number);
    divisibilityBy3(sum);
    return 0;
}