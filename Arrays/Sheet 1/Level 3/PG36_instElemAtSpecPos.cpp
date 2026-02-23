#include<iostream>
using namespace std;

void rightRotate(int size, int arr[], int i){
    while(size >= i){
        arr[size] = arr[size-1];
        size --;
    } 
}


void insertElement(int size){
    int arr[size*2];

    cout<<"\nEnter array elements: ";
    for(int i=0 ; i<size ; i++) cin>>arr[i];

    int element = 0, index = 0;
    cout<<"\nEnter an element and index to add on: ";
    cin>>element>>index;

    if(index < 1 || index > size) cout<<"\nIndex does'nt Exist";
    else{
        cout<<"\nArray After Insertion: ";
        
        for(int i=0 ; i<size ; i++){
            if(i == index-1){
                rightRotate(size, arr, i);
                arr[i] = element;
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
    
    insertElement(size);
    return 0;
}