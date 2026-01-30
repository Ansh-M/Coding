#include<iostream>
using namespace std;

void printSquaresOfNumbers(int num){
    for(int i=0 ; i<=num ; i++) cout<<"square("<<i<<")"<<" = "<<i*i<<endl;

    cout<<"\n";

    int i=0;
    while(i <= num){
        cout<<"square("<<i<<")"<<" = "<<i*i<<endl;;
        i++;
    }

    cout<<"\n";
    i=0;
    do{
        cout<<"square("<<i<<")"<<" = "<<i*i<<endl;;
        i++;
    }while(i <= num);
}

int main(){
    int number=0;
    cout<<"Enter a number: ";
    cin>>number;

    printSquaresOfNumbers(number);
    return 0;
}