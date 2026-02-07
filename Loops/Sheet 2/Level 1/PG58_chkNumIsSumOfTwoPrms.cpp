#include<iostream>
using namespace std;

void checkNumberIsSumOfTwoPrimes(int num){
    if(num % 2 == 0 && num > 2){
        int primeOne=0, primeTwo=0;
        int i=0;
        for(i = 2 ; i <= num/2 ; i++){
            int flag = 0;

            for(int j = 2 ; j < i ; j++){
                if(i % j == 0 && i != 2){
                    flag = 1;
                    break;
                }
            }
            if(flag == 0){
                if(num - i == i){
                    cout<<"\nYes the Number is sum Of Two Primes: "<<i<<" + "<<i<<" = "<<num;
                    break;
                }else{
                    primeOne=i;
                    primeTwo = num-primeOne;
                    
                    for(int k=2 ; k<primeTwo ; k++){
                        if(primeTwo%k == 0){
                            flag=1;
                            break;
                        }
                    }
                    if(flag==0){
                        cout<<"\nYes the Number is sum Of Two Primes: "<<primeOne<<" + "<<primeTwo<<" = "<<num;
                    }
                }
            }      
        }

    }else cout<<"Number must be even and >2";
}

int main(){
    int number = 0;
    cout<<"Enter a Number: ";
    cin>>number;

    checkNumberIsSumOfTwoPrimes(number);
    return 0;
}