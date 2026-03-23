#include<iostream>
using namespace std;

void smallestMissingPositiveNumber(int size){
    int arr[size];

    cout<<"\nEnter Array Elements: ";
    for(int i=0 ; i<size ; i++) cin>>arr[i];

    cout<<"\nSmallest Missing Positive Number: ";
    int smlMissPosElem = 1;
    for(int i=0 ; i<size ; i++){
        
        if(arr[i] <= 0 && i < size-1) continue;
        else if(arr[i] == smlMissPosElem){
            smlMissPosElem++;
            i = -1;
        }
        else if(i == size-1) cout<<smlMissPosElem;
    }
}

int main(){
    int size = 0;
    cout<<"Enter Array Size: ";
    cin>>size;

    smallestMissingPositiveNumber(size);
    return 0;
}