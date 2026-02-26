#include<iostream>
using namespace std;

int secondLargestElement(int size){
    int arr[size];
    
    cout<<"\nEnter Array Elements: ";
    for(int i=0 ; i<size ; i++) cin>>arr[i];
    
    int smlstElem = arr[0], secSmlstElem = arr[1];
    
    for(int i=0 ; i<size ; i++){
        if(smlstElem > arr[i]) smlstElem = arr[i];
        else secSmlstElem = arr[i];
    }
    
    for(int i=0 ; i<size ; i++) if(secSmlstElem > arr[i] && arr[i] > smlstElem) secSmlstElem = arr[i];
    
    return secSmlstElem;
}

int main(){
    int size = 0;
    cout<<"Enter size of Array: ";
    cin>>size;

    int secSmlstElem = secondLargestElement(size);
    cout<<"2nd Smallest Element in the Array: "<<secSmlstElem; 
    return 0;
}