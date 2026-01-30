#include <iostream>
using namespace std;

void isKaprekarNumber(int sqnum, int num){
    int lastTwoDigits=0, firstTwoDigits=0;
    lastTwoDigits += sqnum % 10;
    sqnum = sqnum / 10;
    lastTwoDigits += (sqnum % 10)*10;
    sqnum = sqnum / 10;
    firstTwoDigits += sqnum % 10;
    sqnum = sqnum / 10;
    firstTwoDigits += (sqnum % 10)*10;
    sqnum = sqnum / 10;

    int sum = (firstTwoDigits+lastTwoDigits); 
    if(sum == num) cout<<"Kaprekar Number";
    else cout<<"Not a Kaprekar Number";
}

int main(){
    int number=0;
    cout<<"Enter a 2 digit number: ";
    cin>>number;
    int squaredNumber=number*number;

    isKaprekarNumber(squaredNumber, number);
    return 0;
}