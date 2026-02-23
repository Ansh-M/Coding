#include<iostream>
using namespace std;

void sortedArray(int size, int arr[]){
    int flag = 0;
    
    for(int i=0 ; i<size ; i++){
        for(int j=1 ; j<size-i ; j++){
            if(arr[j-1] > arr[j]){
                int temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }else if(j == size-i){
                flag = 1;
                break;
            }
        }

        if(flag == 1) break;
    }
}

void insertElement(int size, int arr[]){
    
    sortedArray(size, arr);
    
    cout<<"Enter a Number to insert: "; 
    int number = 0;
    cin>>number;

    for(int i=0 ; i<size ; i++){
        if(arr[i] <= number && arr[i+1] >= number){
            for(int j=size ; j>i+1 ; j--) arr[j] = arr[j-1];
            arr[i+1] = number;
            break;
        }
    }
}


int main(){
    int size = 0;
    cout<<"Enter Size of Array: ";
    cin>>size;

    int arr[100];
    
    cout<<"\nEnter Elements : ";
    for(int i=0 ; i<size ; i++) cin>>arr[i];

    insertElement(size, arr);

    cout<<"\nArray after Element Insertion: ";
    for(int i=0 ; i<=size ; i++) cout<<arr[i]<<" ";
    return 0;
}
