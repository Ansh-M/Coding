#include <iostream>
using namespace std;

void isTechNumber(int num){
    int lastTwoDigits=0, firstTwoDigits=0, number=num;
    lastTwoDigits += num % 10;
    num = num / 10;
    lastTwoDigits += (num % 10)*10;
    num = num / 10;
    firstTwoDigits += num % 10;
    num = num / 10;
    firstTwoDigits += (num % 10)*10;
    num = num / 10;

    int sqauredSum = (firstTwoDigits+lastTwoDigits)*(firstTwoDigits+lastTwoDigits); 
    if(sqauredSum == number) cout<<"Tech Number";
    else cout<<"Not a Tech Number";
}

int main(){
    int number=0;
    cout<<"Enter a 4 digit number: ";
    cin>>number;

    isTechNumber(number);
    return 0;
}