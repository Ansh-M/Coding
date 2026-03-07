#include<iostream>
using namespace std;

void allPeakElements(int size){
    int arr[size];
    cout<<"\nEnter Array Elements: ";
    for(int i=0 ; i<size ; i++) cin>>arr[i];

    cout<<"\nPeak Elements in the Array: ";

    for(int i=0 ; i<size ; i++){
        if(i == 0){
            if(arr[i] > arr[i+1]) cout<<arr[i]<<" ";
        }else if(i == size-1){
            if(arr[i] > arr[i-1] && arr[i]) cout<<arr[i];
        }else{
            if(arr[i-1] <= arr[i] && arr[i] >= arr[i+1]) cout<<arr[i]<<" ";
        }
    }
}

int main(){
    int size = 0; 
    cout<<"Enter Array Size: ";
    cin>>size;

    allPeakElements(size);
    return 0;
}