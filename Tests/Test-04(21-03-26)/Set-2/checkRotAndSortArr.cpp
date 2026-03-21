#include<iostream>
using namespace std;

void rotateArray(int size, int arr[]){
    int temp = arr[0];
    for(int i=1 ; i<size ; i++){
        arr[i-1] = arr[i];
    }
    arr[size-1] = temp;

}

int checkRotatedSortedArray(int size){
    int arr[size];
    cout<<"\nEnter Array Elements: ";
    for(int i=0 ; i<size ; i++){
        cin>>arr[i];
        if(arr[i] < 1 || arr[i] > 1000000000) return -1;
    }

    // sortAsc(arr, size);
    int count = 0;
    for(int i=0 ; i<size ; i++){
        if(arr[i] < arr[i+1]){
            if(i == size-1) return 1;
            continue;
        }
        else{
            count++;
            if(count >= size) return 0;
            rotateArray(size, arr);
            i=-1;
        }
    }

}

int main(){
    int size = 0;
    cout<<"Enter Array Size: ";
    cin>>size;

    if(size <= 2 || size>=100000) cout<<"\nArray size must be between 2 and 100000";
    else{
        int x = checkRotatedSortedArray(size);
        if(x == -1) cout<<"\nElements must be between 1 and 1000000000";
        else if(x == 0) cout<<"No Combinations of array is Sorted and Rotated";
        else if(x == 1) cout<<"Yes, Array is Sorted and Rotated";
    }
    
    return 0;
}