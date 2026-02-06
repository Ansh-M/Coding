#include<iostream>
using namespace std;

void printAllNumbers(int num){
    
    cout<<"\nDivisor Pairs of "<<num<<": ";

    if(num <= 1) cout<<"1";
    else{
        for(int i=1 ; i*i<=num ; i++){
            if(num % i == 0){
                if((i+1)*(i+1) > num)  cout<<"("<<i<<", "<<num/i<<") ";
                else  cout<<"("<<i<<", "<<num/i<<"), ";
        }
        }
    }
}

int main(){
    int number = 0;
    cout<<"Enter a Number: ";
    cin>>number;
    
    printAllNumbers(number);
    return 0;
}