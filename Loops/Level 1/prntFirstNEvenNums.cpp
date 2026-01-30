#include<iostream>
using namespace std;

void printEvenNumbers(float num){
    // for(int i=2 ; i<=num ; i=i+2){
    //     if(i == num || i == num-1) cout<<i<<" ";
    //     else cout<<i<<", ";
    // }
    // cout<<"\n";
    // int i=2;
    // while(i <= num){
    //     if(i == num || i == num-1) cout<<i<<" ";
    //     else cout<<i<<", ";
    //     i=i+2;
    // }

    for(int i=1 ; i<=num ; i++){
        if(i%2 == 0){
            if(i == num || i == num-1) cout<<i<<" ";
            else cout<<i<<", ";
        }
    }
    cout<<"\n";
    int i=2;
    while(i <= num){
        if(i%2 == 0){
            if(i == num || i == num-1) cout<<i<<" ";
            else cout<<i<<", ";
        }
        i=i+2;
    }

}

int main(){
    float number=0;
    cout<<"Enter a Number: ";
    cin>>number;

    printEvenNumbers(number);
    
    return 0;
}