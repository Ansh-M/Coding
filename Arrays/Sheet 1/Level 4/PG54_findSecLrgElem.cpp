#include<iostream>
using namespace std;

int secondLargestElement(int size){
    int arr[size];
    
    cout<<"\nEnter Array Elements: ";
    for(int i=0 ; i<size ; i++) cin>>arr[i];
    
    int lgstElem = arr[0], secLgstElem = 0;

    for(int i=0 ; i<size ; i++) {
        if(lgstElem < arr[i]) lgstElem = arr[i];
        else secLgstElem = arr[i];
    }
    

    for(int i=0 ; i<size ; i++) if(secLgstElem < arr[i] && arr[i] < lgstElem) secLgstElem = arr[i];
    
    return secLgstElem;
}

int main(){
    int size = 0;
    cout<<"Enter size of Array: ";
    cin>>size;

    int secLgstElem = secondLargestElement(size);
    cout<<"2nd Largest Element in the Array: "<<secLgstElem; 
    return 0;
}