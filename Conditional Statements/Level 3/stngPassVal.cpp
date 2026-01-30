#include <iostream>
using namespace std;

void passwordValidator(int len, int cntUp, int cntLw, int cntDgt){
    int hasUpperCase=0, hasLowerCase=0, hasDigits=0;
    if(cntUp > 0) hasUpperCase=1;
    if(cntLw > 0) hasLowerCase=1;
    if(cntDgt > 0) hasDigits=1;

    if(len >= 8 && (hasUpperCase == 1 && hasLowerCase == 1 && hasDigits == 1)) cout<<"Strong Password !";
    else if(len >= 6){
        if((hasUpperCase == 1 && hasLowerCase == 1) || (hasUpperCase == 1 && hasDigits == 1) || (hasLowerCase == 1 && hasDigits == 1)) 
            cout<<"Medium Password !";
        else cout<<"Weak Password !";
    }else cout<<"Very Weak Password !";
}

int main(){
    int passwordLength=0, countUppercase=0, countLowercase=0, countDigits=0;
    cout<<"Enter Password Length: ";
    cin>>passwordLength;
    cout<<"Enter number of Uppercase Letters: ";
    cin>>countUppercase;
    cout<<"Enter number of Lowercase Letters: ";
    cin>>countLowercase;
    cout<<"Enter number of Digits: ";
    cin>>countDigits;

    passwordValidator(passwordLength, countUppercase, countLowercase, countDigits);
    
    return 0;
}