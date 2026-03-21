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

void longestConsecutiveSequence(int size){
    int arr[size];
    cout<<"\nEnter Array Elements: ";
    for(int i=0 ; i<size ; i++){
        cin>>arr[i];

        if(arr[i] < -1000000000 || arr[i] > 1000000000){
            cout<<"\nArray Elememt to big/small";
            break;
        }
    }

    sortAsc(arr, size);
    int count = 1, maxCount = 0;
    
    cout<<"\nLongest Consecutive Sequence: ";
    for(int i=1 ; i<size ; i++){
        if(arr[i-1]+1 == arr[i]){
            count++;
            if(maxCount < count) maxCount = count;
        }
        else count = 1;
    }

    cout<<maxCount;

}

int main(){
    int size = 0;
    cout<<"Enter Array Size: ";
    cin>>size;

    if(size < 1 || size>=100000) cout<<"\nArray size Too big/small";
    else{
        longestConsecutiveSequence(size);
    }
    
    return 0;
}