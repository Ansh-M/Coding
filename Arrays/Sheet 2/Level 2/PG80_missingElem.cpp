#include<iostream>
using namespace std;

void missingElement(int size){
    int arr[size];
    cout<<"\nEnter Array Elements from 1 to N: ";
    for(int i=0 ; i<size ; i++) cin>>arr[i];

    cout<<"\nMissing Element in the Array: ";
    if(size <= 0) cout<<"No Missing Elements since No Elements";
    else if(arr[0] != 1) cout<<"Array Must Start From 1";
    else{
        for(int i=0 ; i<size ; i++){
            if(i+1 != arr[i]){
                cout<<i+1<<" ";
                break;
            }else if(i == size-1) cout<<"No Missing Element";
        }
    }
}


int main(){
    int size = 0; 
    cout<<"Enter Array Size: ";
    cin>>size;

    missingElement(size);
    return 0;
}