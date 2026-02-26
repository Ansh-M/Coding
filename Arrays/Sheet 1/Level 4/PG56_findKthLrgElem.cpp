#include<iostream>
using namespace std;

void sortArray(int size, int arr[]){
    for(int i=0 ; i<size ; i++){
        for(int j=1 ; j<size-i ; j++){
            if(arr[j-1] < arr[j]){
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }
}

void findKthLargestElement(int size){
    int arr[size];
    
    cout<<"\nEnter Array Elements: ";
    for(int i=0 ; i<size ; i++) cin>>arr[i];

    int num = 0;
    cout<<"\nEnter k to find kth largest Element: ";
    cin>>num;

    if(num < 0 || num > size) cout<<"\nOnly "<<size<<" elements exist in Array!";
    else{
        sortArray(size, arr);
        if(num > 3) cout<<endl<<num<<"th largest Element is: "<<arr[num-1];
        else if(num == 1) cout<<endl<<"1st largest Element is: "<<arr[num-1];
        else if(num == 2) cout<<endl<<"2nd largest Element is: "<<arr[num-1];
        else cout<<endl<<"3rd largest Element is: "<<arr[num-1];
    }
}

int main(){
    int size = 0;
    cout<<"Enter size of Array: ";
    cin>>size;
    
    findKthLargestElement(size);
    return 0;
}