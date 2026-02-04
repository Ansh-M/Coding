#include<iostream>
using namespace std;

void chkPerfectNumber(int num){
    int sum=0;    
    
    for(int i=1 ; i<=num/2 ; i++){
        if(num % i == 0){
            sum += i;
        }
    }
    if(sum == num) cout<<num<<" is Perfect Number";
    else cout<<num<<" is Not a Perfect Number";
}


int main(){
    int number=0;
    cout<<"Enter a number: ";
    cin>>number;

    chkPerfectNumber(number);
    return 0;
}