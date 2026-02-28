#include<iostream>
using namespace std;

void firstNegativeInKSizedWindow(int size){
    int arr[size];
    cout<<"\nEnter Array Elements: ";
    for(int i=0 ; i<size ; i++) cin>>arr[i];

    int windowSize = 0;
    cout<<"\nEnter a window size to take that may elements into account: ";
    cin>>windowSize;

    cout<<"\nFirst Negative in each "<<windowSize<<" sized Window: "<<endl;
    for(int i=0 ; i<=size-windowSize ; i++){
        for(int j=i ; j<windowSize+i ; j++){
            if(arr[j] < 0){
                cout<<arr[j];
                break;
            }else if(j == windowSize + i - 1) cout<<"NA";
        }
        cout<<" [Window:";
        for(int j=i ; j<windowSize+i ; j++) cout<<" "<<arr[j];
        cout<<"]"<<endl;

    }

}


int main(){
    int size = 0;
    cout<<"Enter Array Size: ";
    cin>>size;

    firstNegativeInKSizedWindow(size);
    return 0;
}