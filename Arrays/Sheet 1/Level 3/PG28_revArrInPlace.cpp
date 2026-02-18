#include<iostream>
using namespace std;

void reversedArray(int size, int arr[]){
    for(int i=0 ; i<size/2 ; i++){
        int temp = arr[i];
        arr[i] = arr[size-1-i];
        arr[size-1-i] = temp;
    }
}

int main(){
    int size = 0;
    cout<<"Enter Size of Array: ";
    cin>>size;

    int arr[size];
    
    cout<<"\nEnter Elements : ";
    for(int i=0 ; i<size ; i++) cin>>arr[i];

    reversedArray(size, arr);
    
    cout<<"\nReversed Array: ";
    for(int i=0 ; i<size ; i++) cout<<arr[i]<<" ";
    return 0;
}
