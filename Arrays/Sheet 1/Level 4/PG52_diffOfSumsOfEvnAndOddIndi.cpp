#include<iostream>
using namespace std;

int sumOfOddIndices(int arr[], int size){
    int sumOfOddIndices = 0;

    for(int i=1 ; i<size ; i=i+2) sumOfOddIndices += arr[i];
    
    return sumOfOddIndices;
}

int sumOfEvenIndices(int arr[], int size){
    int sumOfEvenIndices = 0;

    for(int i=0 ; i<size ; i=i+2) sumOfEvenIndices += arr[i];
    
    return sumOfEvenIndices;
}

int diffOfOddAndEvenIndices(int size){
    int arr[size];
    cout<<"\nEnter Array Elements: ";
    for(int i=0 ; i<size ; i++) cin>>arr[i];

    int sumOdd = sumOfOddIndices(arr, size);
    int sumEven = sumOfEvenIndices(arr, size);

    return sumEven-sumOdd;
}

int main(){
    int size = 0;
    cout<<"Enter size: ";
    cin>>size;

    int diff = diffOfOddAndEvenIndices(size);
    cout<<"\nDifference of Sums Of Even And Odd Indices: "<<diff<<endl;
    return 0;
}