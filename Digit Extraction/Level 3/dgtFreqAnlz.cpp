#include<iostream>
using namespace std;

void digitFrequencyAnalyzer(int num){
    int cntZero=0,cntFive=0,cntNine=0;
    int digit=0;
    if(num!=0){
        digit = num%10;
        num = num/10;
        if(digit==0) cntZero++;
        else if(digit==5) cntFive++;
        else if(digit==9) cntNine++;
    }
    if(num!=0){
        digit = num%10;
        num = num/10;
        if(digit==0) cntZero++;
        else if(digit==5) cntFive++;
        else if(digit==9) cntNine++;
    }
    if(num!=0){
        digit = num%10;
        num = num/10;
        if(digit==0) cntZero++;
        else if(digit==5) cntFive++;
        else if(digit==9) cntNine++;
    }
    if(num!=0){
        digit = num%10;
        num = num/10;
        if(digit==0) cntZero++;
        else if(digit==5) cntFive++;
        else if(digit==9) cntNine++;
    }
    if(num!=0){
        digit = num%10;
        num = num/10;
        if(digit==0) cntZero++;
        else if(digit==5) cntFive++;
        else if(digit==9) cntNine++;
    }
    if(num!=0){
        digit = num%10;
        num = num/10;
        if(digit==0) cntZero++;
        else if(digit==5) cntFive++;
        else if(digit==9) cntNine++;
    }
    cout<<"Number of Zeroes : "<<cntZero<<endl;
    cout<<"Number of Fives : "<<cntFive<<endl;
    cout<<"Number of Nines : "<<cntNine<<endl;
}

int main(){
    int number=0;
    cout<<"Enter a 5 digit number: ";
    cin>>number;

    digitFrequencyAnalyzer(number);
    return 0;
}