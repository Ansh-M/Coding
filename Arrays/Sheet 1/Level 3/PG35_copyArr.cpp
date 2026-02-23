#include<iostream>
using namespace std;

void copyArray(int size, int arr[]){

    int arr1[size];
    cout<<"\nOriginal array: ";
    for(int i=0 ; i<size ; i++) cout<<arr[i]<<" ";
    
    cout<<"\nCopied array: ";
    for(int i=0 ; i<size ; i++){
        arr1[i] = arr[i];
        cout<<arr1[i]<<" ";
    }
}

int main(){
    int size = 0;
    cout<<"Enter Size of Array: ";
    cin>>size;

    int arr[size];
    
    cout<<"\nEnter Elements : ";
    for(int i=0 ; i<size ; i++) cin>>arr[i];

    copyArray(size, arr);
}
