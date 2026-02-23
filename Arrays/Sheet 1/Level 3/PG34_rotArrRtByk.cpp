#include<iostream>
using namespace std;

void rightRotationByK(int size, int arr[], int k){

    while(k > 0){
    
        int temp = arr[size-1];
        for(int i=size-1 ; i>=0 ; i--) arr[i] = arr[i-1];
    
        arr[0] = temp;
        k--;
    }
}

int main(){
    int size = 0, rotations = 0;
    cout<<"Enter Size of Array: ";
    cin>>size;

    int arr[size];
    
    cout<<"\nEnter Elements : ";
    for(int i=0 ; i<size ; i++) cin>>arr[i];

    cout<<"Enter number of rotations: ";
    cin>>rotations;

    rightRotationByK(size, arr, rotations);
    
    cout<<"\nRight Rotated Array By "<<rotations<<": ";
    for(int i=0 ; i<size ; i++) cout<<arr[i]<<" ";
    return 0;
}
