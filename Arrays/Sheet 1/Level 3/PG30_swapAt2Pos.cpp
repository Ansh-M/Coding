#include<iostream>
using namespace std;

void swapElementsAtSpecifiedPositions(int size){
    int arr[size], positionOne = 0, positionTwo = 0;
    
    cout<<"Enter Array Elements: ";
    for(int i=0 ; i<size ; i++) cin>>arr[i];

    cout<<"\nEnter positions of 2 Elements to swap: ";
    cin>>positionOne>>positionTwo;

    if(positionTwo < positionOne){
        int temp = positionTwo;
        positionTwo = positionOne;
        positionOne = temp;
    }

    if(positionOne != positionTwo){
        
        //without loop
        int temp = arr[positionOne-1];
        arr[positionOne-1] = arr[positionTwo-1];
        arr[positionTwo-1] = temp;
    
        // with loop
        // int temp1 = 0
        // for(int i=0 ; i<size ; i++){  

        //     if(i == positionOne-1) temp1 = i;

        //     if(i == positionTwo-1){
        //         int temp = arr[temp1];
        //         arr[temp1] = arr[i];
        //         arr[i] = temp; 
        //     }
        // }
    }

    cout<<"\nArray with swapped Elements: ";
    for(int i=0 ; i<size ; i++) cout<<arr[i]<<" ";

}

int main(){
    int size = 0;
    cout<<"Enter Size of Array: ";
    cin>>size;

    swapElementsAtSpecifiedPositions(size);
    return 0;
}