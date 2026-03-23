#include<iostream>
using namespace std;

int majorityElem(int arr[], int size){
    cout<<"\nEnter Array Elements: ";
    for(int i=0 ; i<size ; i++) cin>>arr[i];

    for(int i=0 ; i<size ; i++){
        int count = 1;
        for(int j=i+1 ; j<size ; j++){
            if(arr[i] == arr[j]) count++;

            if(count > (size/2)) return arr[i];
        }
    }

    return 0;
}   


int main(){
    int size = 0;
    cout<<"Enter Array Size: ";
    cin>>size;
    if(size <= 0) cout<<"\nSize must be greater than 0";
    else{
        int arr[size];
        
        int element = majorityElem(arr, size);
        
        if(element == 0) cout<<"\nNo Majority Element Found";
        else cout<<"\nElement that occur more than half the size of Array: "<<element;
    }
    
    
    return 0;
}