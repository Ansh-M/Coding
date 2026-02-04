#include<iostream>
using namespace std;

int countPrimeNumbersInRange(int num){
    
    if(num <= 1) return 0;
    else if(num == 2) return 1;
    else{
        int count=0;
        for(int i=2 ; i<=num ; i++){
            int flag=0;
            for(int j=2 ; j<=i-1 ; j++){
                if(i%j == 0){
                    flag=1;
                    break;
                }
            }
            if(flag==0) count++;
        }
        return count;
    }
}

int main(){
    int number=0;
    cout<<"Enter a Number: ";
    cin>>number;

    int count = countPrimeNumbersInRange(number);
    cout<<"Prime Numbers Between 1 to "<<number<<": "<<count;
    return 0;
}