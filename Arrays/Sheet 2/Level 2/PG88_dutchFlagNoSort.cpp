#include<iostream>
using namespace std;

void dutchFlagNoSort(int size){
    int arr[size];
    cout<<"\nEnter Array Elements(Only 0s,1s and 2s): ";
    for(int i=0 ; i<size ; i++) cin>>arr[i];


    int low = 0, mid = 0, high = size-1;
    for( ; mid<=high; ){
        if((arr[mid] == 0)){
            int temp = arr[mid];
            arr[mid] = arr[low];
            arr[low] = temp;
            low++;
            mid++;
        }
        
        else if(arr[mid] == 1) mid++;

        else if((arr[mid] == 2 )){
            int temp = arr[mid];
            arr[mid] = arr[high];
            arr[high] = temp;
            high--;
        }
    }

    cout<<endl<<endl;
    for(int i=0 ; i<size ; i++) cout<<arr[i]<<" ";
}

int main(){
    int size = 0;
    cout<<"Enter Array Size: ";
    cin>>size;

    dutchFlagNoSort(size);
    return 0;
}