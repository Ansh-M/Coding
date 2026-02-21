#include<iostream>
using namespace std;

int singleSumDigit(int number, int reps){
    int num = 0, sum = 0;
    
    for( ; reps>0 ; reps--){
        int num = number;
        for( ; num > 0 ; num = num/10) sum += num%10;
        
        if(reps == 1) {
            num = sum;
            sum = 0;
            for( ; num>0 ; num=num/10) sum += num%10;
        }
    }   

    return sum;
}

int main(){
    int number = 0, reps = 0;
    cin>>number>>reps;
    
    int sum = 0;
    if(number < 1 || number > 1000) cout<<"Null";
    else if(reps <= 0 || reps > 50){
        if(reps == 0) cout<<"\n0";
        else cout<<"\nNull";
    }
    else{
        sum = singleSumDigit(number, reps);
        cout<<"\n"<<sum;
    } 
    return 0;
}