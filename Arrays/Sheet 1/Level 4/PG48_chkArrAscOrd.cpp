#include<iostream>
using namespace std;

void checkArrayAscending(int size){
    int arr[size];
    cout<<"\nEnter Array Elements: ";
    for(int i=0 ; i<size ; i++) cin>>arr[i];

    cout<<"\nIs Array Ascending / Non decreasing: ";
    
    if(arr[0] > arr[1]) cout<<"No"<<endl;
    else if(arr[size-2] > arr[size-1]) cout<<"No"<<endl;
    else{

        for(int i=2 ; i<size-1 ; i++){
            if(arr[i-1] > arr[i]){
                cout<<"No"<<endl;
                break;

            }else if(i == size-2) cout<<"Yes";
        }
    }
}

int main(){
    int size = 0;
    cout<<"Enter size: ";
    cin>>size;

    checkArrayAscending(size);
    return 0;
}