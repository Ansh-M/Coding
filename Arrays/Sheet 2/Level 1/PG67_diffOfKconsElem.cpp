#include<iostream>
using namespace std;

void sumOfKConsecutiveElements(int size){
    int arr[size];
    
    cout<<"\nEnter Array Elements: ";
    for(int i=0 ; i<size ; i++) cin>>arr[i];

    int number = 0;
    cout<<"\nEnter a Number to calculate minimum sum of that many consecutive elements: ";
    cin>>number;

    int sum = 0, minSum = 0;
    for(int i=0 ; i<=size-number ; i++){
        sum = 0;
        for(int j=0 ; j<number ; j++) sum += arr[i+j];

        if(minSum == 0) minSum = sum;
        if(minSum > sum) minSum = sum;
    }
    cout<<"\nMin Sum of "<<number<<" elements is: "<<minSum;
}


int main(){
    int size = 0;
    cout<<"Enter Array Size: ";
    cin>>size;

    sumOfKConsecutiveElements(size);
    return 0;
}