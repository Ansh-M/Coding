#include<iostream>
using namespace std;

int sumOfOddIndices(int size){
    int arr[size];
    cout<<"\nEnter Array Elements: ";
    for(int i=0 ; i<size ; i++) cin>>arr[i];

    int sumOfOddIndices = 0;
    for(int i=1 ; i<size ; i=i+2) sumOfOddIndices += arr[i];
    
    return sumOfOddIndices;
}

int main(){
    int size = 0;
    cout<<"Enter size: ";
    cin>>size;

    int sum = sumOfOddIndices(size);
    cout<<"\nSum of Even Indices: "<<sum<<endl;
    return 0;
}