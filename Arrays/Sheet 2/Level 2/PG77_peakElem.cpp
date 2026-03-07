#include<iostream>
using namespace std;

void peakElement(int size){
    int arr[size];
    cout<<"\nEnter Array Elements: ";
    for(int i=0 ; i<size ; i++) cin>>arr[i];

    cout<<"\nPeak Element in the Array: ";
    int peak = 0;
    for(int i=0 ; i<size ; i++){
        if(i == 0){
            if(arr[i] > arr[i+1]) peak = arr[i];
        }else if(i == size-1){
            if(arr[i] > arr[i-1] && arr[i] >= peak) peak = arr[i];
        }else{
            if(arr[i-1] <= arr[i] && arr[i] >= arr[i+1] && peak < arr[i]) peak = arr[i];
        }
    }
    cout<<peak;
}

int main(){
    int size = 0; 
    cout<<"Enter Array Size: ";
    cin>>size;

    peakElement(size);
    return 0;
}