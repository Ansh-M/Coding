#include<iostream>
using namespace std;

void equilibriumIndices(int size){
    int arr[size];
    cout<<"\nEnter Array Elements: ";
    for(int i=0 ; i<size ; i++) cin>>arr[i];

    cout<<"\nEquilibrium Index/Indices in the Array: ";
    if(size < 3) cout<<"Size Too Short";
    else{
        for(int i=0 ; i<size ; i++){
            int sumLeft = 0, sumRight = 0;
            if(i == 0){
                sumLeft = arr[i];
                for(int j = i+1 ; j<size ; j++) sumRight += arr[j];
            }else if(i == size-1){
                sumRight = arr[i];
                for(int j=i-1 ; j>=0 ; j--) sumLeft += arr[j];
            }else{
                for(int j=0 ; j<i ; j++) sumLeft += arr[j];

                for(int j=i+1 ; j<size ; j++) sumRight += arr[j];
            }
            if(sumLeft == sumRight) cout<<i<<" ";

        }
    }
}


int main(){
    int size = 0; 
    cout<<"Enter Array Size: ";
    cin>>size;

    equilibriumIndices(size);
    return 0;
}