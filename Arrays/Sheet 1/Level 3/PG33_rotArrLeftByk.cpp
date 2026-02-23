#include<iostream>
using namespace std;

void leftRotationByK(int size, int arr[], int k){

    // while(k > 0){
    
    //     int temp = arr[0];
    //     for(int i=0 ; i<size ; i++){
    //         arr[i] = arr[i+1];
    //     }
    
    //     arr[size-1] = temp;
    //     k--;
    // }

    for(int i=0 ; i<size ; i++){
        
    }
}

int main(){
    int size = 0, rotations = 0;
    cout<<"Enter Size of Array: ";
    cin>>size;

    int arr[size];
    
    cout<<"\nEnter Elements : ";
    for(int i=0 ; i<size ; i++) cin>>arr[i];

    cout<<"Enter number of rotations: ";
    cin>>rotations;

    leftRotationByK(size, arr, rotations);
    
    cout<<"\nLeft Rotated Array By "<<rotations<<": ";
    for(int i=0 ; i<size ; i++) cout<<arr[i]<<" ";
    return 0;
}
