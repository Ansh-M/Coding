#include<iostream>
using namespace std;

void digitalRootCalculator(int number){
    int sum=0;
    
    // if(number < 0) number = -(number);

    // for( ; number!=0 ; ){
    //     sum += number % 10;
    //     number=number/10;
    //     if((sum / 10 != 0) && (number == 0)){
    //         number=sum;
    //         sum=0;
    //     }
    // }

    while(number != 0){
        sum += number%10;
        number = number / 10;
        if(sum / 10 != 0 && (number == 0)){
            number = sum;
            sum = 0;
        }
    }
    if(sum < 0) sum = -(sum);
    cout<<"\nDigit Root: "<<sum;
}

int main(){
    int number=0;
    cout<<"Enter a Number: ";
    cin>>number;

    digitalRootCalculator(number);
    return 0;
}