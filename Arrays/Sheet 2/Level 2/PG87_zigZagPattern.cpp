#include<iostream>
using namespace std;

void zigZagPattern(int size){
    int arr[size];

    cout<<"\nEnter Array Elements: ";
    for(int i=0 ; i<size ; i++) cin>>arr[i];

    for(int i=1 ; i<size ; i=i+2){
        if((arr[i] > arr[i-1] && arr[i] > arr[i+1]) && i+1<=size-1) continue;
        else{
            int count=1;
            for(int j=i ; j<i+3-1 ; j++) if(arr[i] == arr[j] && arr[i-1]<=arr[i]) count++;
            
            if(count < 2){
                if((arr[i-1] > arr[i] && arr[i-1] >= arr[i+1]) && i+1<=size-1){
                    int temp = arr[i];
                    arr[i] = arr[i-1];
                    arr[i-1] = temp;
            
                }else if(arr[i+1] > arr[i] && arr[i+1] > arr[i-1] && i+1<=size-1){
                    int temp = arr[i];
                    arr[i] = arr[i+1];
                    arr[i+1] = temp;
                }
            }else{
                for(int j = i ; j<size ; j++){
                    if(arr[i] < arr[j]){
                        int temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                        break;
                    }else if(j==size-1 && arr[i] >= arr[j]) count=size;
                }
            
                if(count == size){
                    for(int j = i ; j<size ; j++){
                        if(arr[i+1] > arr[j]){
                            int temp = arr[i+1];
                            arr[i+1] = arr[j];
                            arr[j] = temp;
                            break;
                        }
                }
                }
            }
        }
    }

    cout<<endl<<"Rearranged Array with Zig Zag Pattern: ";
    for(int i=0 ; i<size ; i++) cout<<arr[i]<<" ";
}

int main(){
    int size = 0;
    cout<<"Enter Array Size: ";
    cin>>size;

    zigZagPattern(size);
    return 0;
}