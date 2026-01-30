#include<iostream>
using namespace std;

void printCubes(int num){
    for(int i=0 ; i<=num ; i++) cout<<"cube("<<i<<")"<<" = "<<i*i*i<<endl;

    cout<<"\n";

    int i=0;
    while(i <= num){
        cout<<"cube("<<i<<")"<<" = "<<i*i*i<<endl;
        i++;
    }
}

int main(){
    int number=0;
    cout<<"Enter a number: ";
    cin>>number;

    printCubes(number);
    return 0;
}