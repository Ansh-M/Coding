#include<iostream>
using namespace std;

void sumOfFirstAndLastDigits(long num){ 
    if(num < 0) num = -(num);
    // if(num <= 9) cout<<"Sum of First and Last Digit: "<<num;
    // else{
    //     int sum=0;
    //     for(int i=num ; i!=0 ; i=i/10){
    //         if(i/10 == 0 ){
    //             sum += i%10;
    //             sum += num%10;
    //         }
    //     }
    //     cout<<"Sum of First and Last Digit: "<<sum;
    // }

    if(num <= 9) cout<<"Sum of First and Last Digit: "<<num;
    else{
        int sum=0;
        long i=num;

        while(i != 0){
            if(i/10 == 0 ){
                sum += i%10;
                sum += num%10;
            }
            i = i / 10;
        }
        cout<<"Sum of First and Last Digit: "<<sum;
    }
}
int main(){
    long number=0;
    cout<<"Enter a Number: ";
    cin>>number;

    sumOfFirstAndLastDigits(number);
    return 0;
}