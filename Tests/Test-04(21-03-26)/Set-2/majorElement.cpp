#include<iostream>
using namespace std;

int majorityElement(int size){
    int arr[size];
    bool arr1[size];
    cout<<"\nEnter Array Elements: ";
    for(int i=0 ; i<size ; i++){
        cin>>arr[i];

        arr1[i] = false;

        if(arr[i] < -1000000000 || arr[i] > 1000000000){
            cout<<"\nArray Elememt to big/small";
            return -1;
        }
    }

    int majority = 0;
    for(int i=0 ; i<size ; i++){
        int count = 1;
        if(arr1[i] == false){
            
            for(int j=i+1 ; j<size ; j++){
                
                if(arr[i] == arr[j]){
                    count++;
                    
                    if(majority < count) majority = count;
                    
                    arr[j] = true;
                    if(count > (size/2)) return arr[i];
                }
            }
        }
        if(i == size-1 && majority <= size/2) return -1;
    }
}

int main(){
    int size = 0;
    cout<<"Enter Array Size: ";
    cin>>size;
    
    if(size < 1 || size > 100000) cout<<"\nArray size Too big/short";
    else{ 
        int element = majorityElement(size);
        
        if(element == -1) cout<<"\nNo Majority Element";
        else cout<<"\nMajority Element is: "<<element;
    }
    return 0;
}