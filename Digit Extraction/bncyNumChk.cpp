#include <iostream>
using namespace std;

int ascendingCheck(int number){
    int flag=0;
    int digit = number % 10;
    number = number / 10;
    if(digit > number % 10){ 
        digit = number % 10;
        number = number / 10;
    }   
    if(digit > number % 10 && number/10 == 0){
        digit = number % 10;
        int flag=1;
        return flag;
    }
    return flag;
}

int descendingCheck(int number){
    int flag=0;
    int digit = number % 10;
    number = number / 10;
    if(digit < number % 10){
        digit = number % 10;
        number = number / 10;
    }
    if(digit < number % 10 && number/10 == 0){
        digit = number % 10;
        int flag=1;
        return flag;
    }
    return flag;
}

void bouncyNumberCheck(int aflag, int dflag){
    if(aflag == 0 && dflag == 0) cout<<"Bouncy Number";
    else cout<<"Not a Bouncy Number";
}

int main(){
    int number=0;
    cout<<"Enter a 3 digit Number: ";
    cin>>number;

    int aflag = ascendingCheck(number);
    int dflag = descendingCheck(number);
    bouncyNumberCheck(aflag, dflag);
    
    return 0;
}