#include<iostream>
using namespace std;

void printPrimeNumbersInRange(int num){
    cout<<"Prime Numbers Between 1 to "<<num<<": [";
    if(num <= 1)cout<<"No Prime Exists";
    else if(num == 2) cout<<"2";
    else{
        for(int i=2 ; i<=num ; i++){
            int flag=0;
            for(int j=2 ; j<=i-1 ; j++){
                if(i%j == 0){
                    flag=1;
                    break;
                }
            }
            if(flag==0) cout<<" "<<i<<" ";
        }
        cout<<"]";
    }
}

int main(){
    int number=0;
    cout<<"Enter a Number: ";
    cin>>number;

    printPrimeNumbersInRange(number);
    return 0;
}