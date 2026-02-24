#include<iostream>
using namespace std;

void rightRotate(int arr[], int i, int count){
    
    for( ; i>count ; i--){
        arr[i] = arr[i-1];
    }
}

void sortAscending(int arr[], int count){
    for(int i=0 ; i<count ; i++){
        for(int j=1 ; j<count-i ; j++){
            
            if(arr[j-1] > arr[j]){
                int temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void sortAscending(int arr[], int count, int size){
    
    int cnt = count+1;
    for(int i=0 ; count<size ; count++){
        for(int j=cnt ; j<size-i ; j++){
            
            if(arr[j-1] > arr[j]){
                int temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
        }
        i++;
    }
}


void seperateEvenOdd(int size){
    
    int arr[size];
    cout<<"\nEnter Elements for Array1: ";
    for(int i=0 ; i<size ; i++) cin>>arr[i];

    cout<<"\nArray after Even Odd Seperation: ";
    
    //without keeping same order of elements
    
    int count=0;
    for(int i=0 ; i<size ; i++){
        if(arr[i] % 2 == 0){
            int temp = arr[count];
            arr[count] = arr[i];
            arr[i] = temp;
            count++;
        }
    }
    sortAscending(arr, count);
    sortAscending(arr, count, size);
    
    for(int i=0 ; i<size ; i++) cout<<arr[i]<<" "; 


    
    // with keeping the same order of elements - by rotating
    
    // int count=0;
    // for(int i=0 ; i<size ; i++){
    //     if(arr[i] % 2 == 0){
    //         int temp = arr[i];
    //         rightRotate(arr, i, count);
    //         arr[count] = temp;
    //         count++;
    //     }
    // }

    // for(int i=0 ; i<size ; i++) cout<<arr[i]<<" ";

}

int main(){
    int size = 0;
    cout<<"Even Odd Seperation"<<endl;
    cout<<"Enter size Array: ";
    cin>>size;

    seperateEvenOdd(size);
    return 0;
}