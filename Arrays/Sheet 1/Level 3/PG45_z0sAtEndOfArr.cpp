#include<iostream>
using namespace std;

void leftRotate(int arr[], int i, int size){
    while(i < size-1){
        arr[i] = arr[i+1];
        i++;
    }
}


void zeroesToTheEnd(int size){
    int arr[size];
    cout<<"\nEnter Array Elements: ";
    for(int i=0 ; i<size ; i++){
        cin>>arr[i];
    }

    int sizeOfArray = size;
    cout<<"\nArray after pushing zeroes to the End: ";
    for(int i=0 ; i<size ; i++){
        if(arr[i] == 0){
            
            int temp = arr[i];
            leftRotate(arr, i, size);
            arr[size-1] = temp;
            i--;
            size--;
        
        }else if(arr[i] != 0 && i == size-1) cout<<"No Zeroes"<<endl;
    }

    for(int i=0 ; i<sizeOfArray ; i++) cout<<arr[i]<<" ";
}

int main(){
    int size = 0;
    cout<<"Push Zeroes to the End"<<endl;
    cout<<"Enter Array Size: ";
    cin>>size;

    zeroesToTheEnd(size);
    return 0;
}