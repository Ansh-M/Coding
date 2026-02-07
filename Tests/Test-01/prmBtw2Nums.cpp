#include<iostream>
using namespace std;

int sumOfDigits(int num){
    int sum = 0;
    for( ; num!=0 ; num=num/10){
        sum += num%10;
    }
    int flag=0;
    for(int i=2 ; i<sum ; i++){
        if(sum % i == 0){
            flag=1;
            break;
        }
    }
    return flag;
}

void printPrimeNumbers(int num1, int num2){
    if((num1<1 || num1>10000) && (num2<1 || num2>10000)){
        cout<<"Number too big/small";
    }else{
        cout<<"\n";
        int close=num2;
        int closestNumber=0;
        if(num2 < num1){
            int temp=num1;
            num1=num2;
            num2=temp;

            for(int i=num1 ; i<=num2 ; i++){
                int flag=0;
                for(int j=2 ; j<num2 ; j++){
                    if(i % j == 0){
                        if(i==num1 && j==num1){
                        }else{
                            flag=1;
                            break;
                        }
                    }
                }

                if(flag==0){
                    int flag1 = sumOfDigits(i);
                    if(flag1 == 0) cout<<i<<endl;
                }
            }
        }else{
            for(int i=num1 ; i<=num2 ; i++){
                int flag=0;
                for(int j=2 ; j<num2 ; j++){
                    if(i % j == 0){
                        if(i==num1 && j==num1){
                        }else {
                            flag=1;
                            break;
                        }
                    }
                }

                if(flag==0){
                    int flag1 = sumOfDigits(i);
                    if(flag1 == 0) cout<<i<<endl;
                }
            }
        }
        
    }
}

int main(){
    int number1 = 0, number2 = 0;
    cout<<"Prime Numbers ";
    cout<<"\nEnter 2 Numbers: ";
    cin>>number1>>number2;
    
    printPrimeNumbers(number1, number2);
    return 0;
}