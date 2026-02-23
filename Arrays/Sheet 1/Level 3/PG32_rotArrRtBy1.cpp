#include<iostream>
using namespace std;

void rightRotationByOne(int size, int arr[]){
    int temp = arr[size-1];

    for(int i=size-1 ; i>=0 ; i--){
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
}

int main(){
    int size = 0;
    cout<<"Enter Size of Array: ";
    cin>>size;

    int arr[size];
    
    cout<<"\nEnter Elements : ";
    for(int i=0 ; i<size ; i++) cin>>arr[i];

    rightRotationByOne(size, arr);
    
    cout<<"\nRight Rotated Array By 1: ";
    for(int i=0 ; i<size ; i++) cout<<arr[i]<<" ";
    return 0;
}
