#include<iostream>
using namespace std;

void printAllStrongNumbers(int range){

    cout<<"Strong Number between 1 & "<<range<<": ";
    if(range <= 0) cout<<"1";
    else{
        int sum = 0;
        for(int i=1 ; i<=range ; i++){
            sum=0;
            for(int k=i ; k!=0 ; k=k/10){
                int digit = 1;
                int j = k%10;
                
                while(j > 0){
                    digit*= j;
                    j--;
                }
                sum += digit;
            }
        if(i == sum) cout<<sum<<"  ";
        }
    }
}

int main(){
    int number = 0;
    cout<<"Enter a Number: ";
    cin>>number;

    printAllStrongNumbers(number);
    return 0;
}