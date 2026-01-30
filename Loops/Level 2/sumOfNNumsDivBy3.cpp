#include<iostream>
using namespace std;

void sumOfNumbersDivisibleBy3(int num){
    int sum=0;
    for(int i=1 ; i<=num ; i++){
        if(i%3 == 0) sum += i;
    }
    cout<<"Sum of Numbers Divisible By 3: "<<sum;

    cout<<"\n";

    int i=1;
    sum=0;
    while(i <= num){
        if(i%3 == 0) sum += i;
        i++;
    }
    cout<<"Sum of Numbers Divisible By 3: "<<sum;
}

int main(){
    int number=0;
    cout<<"Enter a Number: ";
    cin>>number;

    sumOfNumbersDivisibleBy3(number);
    return 0;
}