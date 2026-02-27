#include<iostream>
using namespace std;

void maxSumOfKConsecutiveElements(int size){
    int arr[size];
    
    cout<<"\nEnter Array Elements: ";
    for(int i=0 ; i<size ; i++) cin>>arr[i];

    int number = 0;
    cout<<"\nEnter a Number to calculate maximum sum of that many consecutive elements: ";
    cin>>number;

    int sum = 0, maxSum = 0;
    for(int i=0 ; i<=size-number ; i++){
        sum = 0;
        for(int j=0 ; j<number ; j++) sum += arr[i+j];
        
        if(i == 0) maxSum = sum;
        if(maxSum < sum) maxSum = sum;
    
    }
    cout<<"\nMax Sum of "<<number<<" elements is: "<<maxSum;
}


int main(){
    int size = 0;
    cout<<"Enter Array Size: ";
    cin>>size;

    maxSumOfKConsecutiveElements(size);
    return 0;
}