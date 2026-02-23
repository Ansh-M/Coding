#include<iostream>
using namespace std;

void leftRotationByOne(int size, int arr[]){
    int temp = arr[0];

    for(int i=0 ; i<size ; i++){
        arr[i] = arr[i+1];
    }
    arr[size-1] = temp;
}

int main(){
    int size = 0;
    cout<<"Enter Size of Array: ";
    cin>>size;

    int arr[size];
    
    cout<<"\nEnter Elements : ";
    for(int i=0 ; i<size ; i++) cin>>arr[i];

    leftRotationByOne(size, arr);
    
    cout<<"\nLeft Rotated Array By 1: ";
    for(int i=0 ; i<size ; i++) cout<<arr[i]<<" ";
    return 0;
}
