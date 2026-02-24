#include<iostream>
using namespace std;

void splitArray(int size){
    
    int arr1[size];
    cout<<"\nEnter Elements for Array1: ";
    for(int i=0 ; i<size ; i++) cin>>arr1[i];

    int arr2[size/2], arr3[size/2];

    for(int i=0 ; i<size ; i++){
        if(i < size/2){
            arr2[i] = arr1[i];
        }
        
        if(i>=size/2){
            arr3[i-size/2] = arr1[i];
        }
    }
    
    cout<<"\nSplit Arrays 2 & 3"<<endl;
    for(int i=0 ; i<size/2 ; i++) cout<<arr2[i]<<" ";
    cout<<endl;
    for(int i=0 ; i<size/2 ; i++) cout<<arr3[i]<<" ";
    
}

int main(){
    int size = 0;
    cout<<"Array Split"<<endl;
    cout<<"Enter size Array: ";
    cin>>size;

    if(size % 2 == 0) splitArray(size);
    else cout<<"\nSize must be even";
    return 0;
}