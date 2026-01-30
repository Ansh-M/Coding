#include<iostream>
using namespace std;

int digitExtraction(int sqN){
    int lastTwoDigits=0;
    lastTwoDigits += sqN%10;
    sqN=sqN/10;
    lastTwoDigits+= (sqN%10)*10;
    return lastTwoDigits; 
}

void isTrimorphic(int num, int lt2Dgt){
    if(num==lt2Dgt) cout<<"Trimorphic Number";
    else cout<<"Not Trimorphic Number";
}

int main(){
    int number=0;
    cout<<"Enter a 2 digit number: ";
    cin>>number;

    int sqrdNumber = number*number*number;
    int lastTwoDigits=digitExtraction(sqrdNumber);
    isTrimorphic(number, lastTwoDigits);
    
    return 0;
}