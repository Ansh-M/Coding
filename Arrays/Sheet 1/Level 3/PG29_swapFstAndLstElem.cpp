#include<iostream>
using namespace std;

void swapFirstAndLastElements(int size){
    int arr[size];
    
    cout<<"Enter Array Elements: ";
    for(int i=0 ; i<size ; i++) cin>>arr[i];
        
    // without loop
    int temp = arr[0];
    arr[0] = arr[size-1];
    arr[size-1] = temp;
    
    // with loop
    // int temp1 = 0;
    // for(int i=0 ; i<size ; i++){  

    //     if(i == 0) temp1 = i;

    //     if(i == size-1){
    //         int temp = arr[temp1];
    //         arr[temp1] = arr[i];
    //         arr[i] = temp; 
    //     }
    // }
    

    cout<<"\nArray with Swapped 1st and Last Elements: ";
    for(int i=0 ; i<size ; i++) cout<<arr[i]<<" ";

}

int main(){
    int size = 0;
    cout<<"Enter Size of Array: ";
    cin>>size;

    swapFirstAndLastElements(size);
    return 0;
}