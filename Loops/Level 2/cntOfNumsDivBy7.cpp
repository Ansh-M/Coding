#include<iostream>
using namespace std;

void numbersDivisibleBy7(int number){
    int count=0;
    for(int i=1 ; i<=number ; i++) if(i % 7 == 0) count++;
    cout<<"\nCount of Numbers Divisible by 7: "<<count;
    
    cout<<"\n";
    
    int i=1;
    count=0;
    while(i <= number){
        if(i % 7 == 0) count++;
        i++;
    }
    cout<<"\nCount of Numbers Divisible by 7: "<<count;
    
}

int main(){
    int number=0;
    cout<<"Enter a number: ";
    cin>>number;

    numbersDivisibleBy7(number);
    return 0;
}