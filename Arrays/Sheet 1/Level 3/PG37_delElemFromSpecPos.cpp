#include<iostream>
using namespace std;

void leftRotate(int size, int arr[], int i){
    while(i < size){
        arr[i] = arr[i+1];
        i++;
    } 
}


void deleteElement(int size){
    int arr[size*2];

    cout<<"\nEnter array elements: ";
    for(int i=0 ; i<size ; i++) cin>>arr[i];

    int index = 0;
    cout<<"\nEnter index of the element to delete: ";
    cin>>index;

    if(index < 1 || index > size) cout<<"\nIndex Doesn't Exist";
    else{
        cout<<"\nArray After Deletion: ";
        for(int i=0 ; i<size ; i++){
            if(i == index-1){
                leftRotate(size, arr, i);
                size--;
            }
            
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}


int main(){
    int size = 0;
    cout<<"Enter array size: ";
    cin>>size;
    
    deleteElement(size);
    return 0;
}