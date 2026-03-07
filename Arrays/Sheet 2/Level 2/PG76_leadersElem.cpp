#include<iostream>
using namespace std;

void findLeadersInAnArray(int size){
    int arr[size];
    cout<<"\nEnter Array Elements: ";
    for(int i=0 ; i<size ; i++) cin>>arr[i];

    cout<<"\nLeader Elements in the Array are: ";
    if(size <= 0) cout<<"No Leaders since size is 0 or less";
    else{
        for(int i=0 ; i<size ; i++){
            int leader = arr[i];

            if(leader > arr[i+1]){
                for(int j=i+1 ; j<size ; j++){
                    if(leader < arr[j]) break;
                    else if(j == size-1) cout<<leader<<" ";
                }
            }
            if(i == size-1) cout<<leader;
        }
    }
}

int main(){
    int size = 0;
    cout<<"Enter Array Size: ";
    cin>>size;

    findLeadersInAnArray(size);
    return 0;
}