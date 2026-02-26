#include<iostream>
using namespace std;

void findLongestIncreasingSequenceLength(int size){
    int arr[size];
    cout<<"\nEnter Elements: ";
    for(int i=0 ; i<size ; i++) cin>>arr[i];

    cout<<"\nLength of Longest Sequence in the Array: ";
    int length = 1, count = 1;
    
    if(size == 0) cout<<length-1<<endl;
    else{
        for(int i=0 ; i<size-1 ; i++){
        
            if(arr[i] < arr[i+1]){
                count++;
                if(length < count) length = count;
            }   
            else if(arr[i] > arr[i+1]) count = 1;
        }
        
        cout<<length<<endl;
    }
}

int main(){
    int size = 0;
    cout<<"Enter size of Array: ";
    cin>>size;

    findLongestIncreasingSequenceLength(size);
    return 0;
}