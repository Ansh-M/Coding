#include<iostream>
using namespace std;

void sortedArray(int arr[], int size){
    for(int i=0 ; i<size ; i++){
        for(int j=i+1 ; j<size ; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void allMissingElementsSortedArray(int size){
    int arr[size];
    cout<<"\nEnter Array Elements from 1 to N in sorted order: ";
    for(int i=0 ; i<size ; i++) cin>>arr[i];

    cout<<"\nMissing Element in the Array: ";
    if(size <= 0) cout<<"No Missing Elements since No Elements";
    else{
        sortedArray(arr, size);
        
        bool flag = false;
        int k=1;
        for(int i=0 ; i<size ; i++){
            if(k != arr[i]){
                cout<<k<<" ";
                i--;
                flag = true;
            }else if(i == size-1 && flag == false) cout<<"No Missing Elements";
            k++;
        }
    }
}


int main(){
    int size = 0; 
    cout<<"Enter Array Size: ";
    cin>>size;

    allMissingElementsSortedArray(size);
    return 0;
}