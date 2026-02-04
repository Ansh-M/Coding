#include<iostream>
using namespace std;

void printFactorOfANumber(int num){
    cout<<"Factors Of "<<num<<": [";
    for(int i=1 ; i<=num/2 ; i++){
        if(num % i == 0){
            cout<<" "<<i<<" ";
        }
    }
    cout<<" "<<num<<" ]";
}


int main(){
    int number=0;
    cout<<"Enter a number: ";
    cin>>number;

    printFactorOfANumber(number);
    return 0;
}