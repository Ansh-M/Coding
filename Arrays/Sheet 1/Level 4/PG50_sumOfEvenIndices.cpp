#include<iostream>
using namespace std;

void sumOfEvenIndices(int size){
    int arr[size];
    cout<<"\nEnter Array Elements: ";
    for(int i=0 ; i<size ; i++) cin>>arr[i];

    int sumOfEvenIndices = 0;
    cout<<"\nSum of Even Indices: ";
    for(int i=0 ; i<size ; i=i+2) sumOfEvenIndices += arr[i];
    cout<<sumOfEvenIndices<<endl;
}

int main(){
    int size = 0;
    cout<<"Enter size: ";
    cin>>size;

    sumOfEvenIndices(size);
    return 0;
}