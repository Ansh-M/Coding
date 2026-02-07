#include<iostream>
using namespace std;


void closeDivisibilityCheck(int num1, int num2){
    if((num1<1 || num1>100000) && (num2<1 || num2>100000)){
        cout<<"Number too big/small";
    }else{
        int close=num2;
        int closestNumber=0;
        if(num2 > num1){
            int temp=num1;
            num1=num2;
            num2=temp;

            for(int i=2 ; i<=num1+1 ; i++){
                if(i % num2 == 0 && (num1-i)<close){
                    close = num1-i;
                    closestNumber=i;                    
                }
            }
        cout<<"The Closest number divisible by "<<num2<<" is: "<<closestNumber;
        }else{
            for(int i=2 ; i<=num1+1 ; i++){
                if(i % num2 == 0 && (num1-i)<close){
                    close = num1-i;
                    closestNumber=i;                    
                }
            }
        cout<<"The Closest number divisible by "<<num2<<" is: "<<closestNumber;
        }
        
    }
}

int main(){
    int number1 = 0, number2 = 0;
    cout<<"Close Divisibility Check: ";
    cout<<"\nEnter 2 Numbers: ";
    cin>>number1>>number2;
    
    closeDivisibilityCheck(number1, number2);
    return 0;
}