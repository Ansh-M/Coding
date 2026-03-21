#include<iostream>
using namespace std;

void sortAsc(int arr[], int size){
    for(int i=0 ; i<size ; i++){
        for(int j=i+1 ; j<size ; j++){
            if(arr[j] < arr[i]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void checkMissingNumbers(int size){
    int arr[size];
    cout<<"\nEnter Array Elements from 1 to "<<size+1<<": ";
    for(int i=0 ; i<size ; i++){
        cin>>arr[i];
    }

    sortAsc(arr, size);
    int k=1;
    cout<<"\nMissing Number: ";
    for(int i=0 ; i<size ; i++){
        if(arr[i] == k)k++; 
        else cout<<k;
    }

}

int main(){
    int size = 0;
    cout<<"Enter Array Size: ";
    cin>>size;

    if(size <= 2 || size>=1000000) cout<<"\nArray size must be between 2 and 1000000";
    else{
        --size;
        checkMissingNumbers(size);
    }
    
    return 0;
}