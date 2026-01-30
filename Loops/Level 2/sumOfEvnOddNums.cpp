#include<iostream>
using namespace std;

void sumOfEvenAndOddNumber(int num){
    int sum=0;
    for(int i=2 ; i<=num ; i=i+2) sum += i;
    cout<<"\nSum of Even Numbers between 1 & "<<num<<" is(for loop): "<<sum;
    
    sum=0;
    for(int i=1 ; i<=num ; i++) if(i % 2 == 0) sum += i;
    cout<<"\nSum of Even Numbers between 1 & "<<num<<" is(for loop): "<<sum;
    
    sum=0;
    int i=1;
    while(i <= num){
        if(i % 2 == 0) sum += i; 
        i++;
    } 
    cout<<"\nSum of Even Numbers between 1 & "<<num<<" is(while loop): "<<sum;
    
    sum=0;
    i=2;
    while(i <= num){
        sum += i; 
        i=i+2;
    }
    cout<<"\nSum of Even Numbers between 1 & "<<num<<" is(while loop): "<<sum;

    //Odd

    sum=0;
    for(int i=1 ; i<=num ; i=i+2) sum += i;
    cout<<"\nSum of Odd Numbers between 1 & "<<num<<" is(for loop): "<<sum;
    
    sum=0;
    for(int i=1 ; i<=num ; i++) if(i % 2 == 1) sum += i;
    cout<<"\nSum of Odd Numbers between 1 & "<<num<<" is(for loop): "<<sum;
    
    sum=0;
    i=1;
    while(i <= num){
        if(i % 2 == 1) sum += i; 
        i++;
    } 
    cout<<"\nSum of Odd Numbers between 1 & "<<num<<" is(while loop): "<<sum;
    
    sum=0;
    i=1;
    while(i <= num){
        sum += i; 
        i=i+2;
    }
    cout<<"\nSum of Odd Numbers between 1 & "<<num<<" is(while loop): "<<sum;

}

int main(){
    int number=0;
    cout<<"Enter a number: ";
    cin>>number;

    sumOfEvenAndOddNumber(number);
    return 0;
}