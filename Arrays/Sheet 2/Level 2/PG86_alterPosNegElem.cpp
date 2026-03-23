#include<iostream>
using namespace std;

void alternatePositiveNegativeElements(int size){
    int arr[size];
    cout<<"Enter Array Elements: ";
    for(int i=0 ; i<size ; i++) cin>>arr[i];

    if(arr[0] < 0){
        int k = 0;
        for(int i=1 ; i<size ; i++){

            if(arr[i] < 0){

                for(int j=0 ; j<=i ; j=j+2){
                    if(arr[j] < 0 && arr[j+1] >= 0) k=j+2;
                    else break;
                }

                for(int j=k ; j<size ; j++){
                    if(k == i) break;
                    if(arr[j] >= 0){
                            
                        int temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                        break;

                    }
                }

            }
        }
    
    }else if(arr[0] >= 0){
        int k = 0;
        for(int i=1 ; i<size ; i++){

            if(arr[i] > 0){

                for(int j=0 ; j<=i ; j=j+2){
                    if(arr[j] > 0 && arr[j+1] < 0) k=j+2;
                    else break;
                }

                for(int j=k ; j<size ; j++){
                    if(k == i) break;
                    if(arr[j] < 0){
                            
                        int temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                        break;

                    }
                }
            }
        }
    }

    cout<<endl<<"Array with Alternate Positive and Negative Elements: ";
    for(int i=0 ; i<size ; i++) cout<<arr[i]<<" ";
}

int main(){
    int size = 0;
    cout<<"Enter Array Size: ";
    cin>>size;

    alternatePositiveNegativeElements(size);
    return 0;
}

// Can Be optimised