#include<iostream>
using namespace std;

void leftRotate(int size, int arr[], int i){
    while(i < size){
        arr[i] = arr[i+1];
        i++;
    } 
}


void removeOccurences(int size){
    int arr[size*2];

    cout<<"\nEnter array elements: ";
    for(int i=0 ; i<size ; i++) cin>>arr[i];

    int element = 0, flag = 0;
    cout<<"\nEnter element to remove all Occurences: ";
    cin>>element;

    cout<<"\nArray After Deletion: ";
    for(int i=0 ; i<size ; i++){
        if(arr[i] == element){
            leftRotate(size, arr, i);
            size--;
            i--;
            flag = 1;
        
        }else if(flag == 0 && i == size-1) cout<<"\nElement Doesn't Exist"<<endl;    
    }

    for(int i=0 ; i<size ; i++) cout<<arr[i]<<" ";
    cout<<endl;
}


int main(){
    int size = 0;
    cout<<"Enter array size: ";
    cin>>size;
    
    removeOccurences(size);
    return 0;
}