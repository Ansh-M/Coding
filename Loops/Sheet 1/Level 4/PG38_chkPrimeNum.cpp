#include<iostream>
using namespace std;

void checkPrimeNumber(int num){
    if(num <= 1) cout<<"Not Prime";
    else if(num == 2) cout<<"Even Prime";
    else{
        for(int i=2 ; i<=num/2 ; i++){
            if(num % i == 0){
                cout<<"Not Prime";
                break;
            }else if(i == num / 2){
                cout<<"Prime";
                break;
            }
        }
    }
}

int main(){
    int number=0;
    cout<<"Enter a number: ";
    cin>>number;

    checkPrimeNumber(number);
    return 0;
}