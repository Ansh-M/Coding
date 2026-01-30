#include<iostream>
using namespace std;

void isGapfulNumber(int number){
    int num=number, gapful=0;
    gapful += number % 10;
    number=number/100;
    gapful += (number % 10)*10;

    if(num % gapful == 0) cout<<"Gapful Number";
    else cout<<"Not a Gapful Number";

}
int main(){
    int number=0;
    cout<<"Enter a 3 digit number: ";
    cin>>number;

    isGapfulNumber(number);
    return 0;
}