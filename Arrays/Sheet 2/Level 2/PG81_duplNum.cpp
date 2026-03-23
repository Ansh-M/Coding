#include<iostream>
using namespace std;

void duplicateElement(int size){
    int arr[size];
    cout<<"\nEnter Array Elements from 1 to N with one element repeating: ";
    for(int i=0 ; i<size ; i++) cin>>arr[i];

    cout<<"\nDuplicate Element: ";
    if(size <= 0) cout<<"At least 1 element should be there";
    else{
        int count = 0;
        for(int i=0 ; i<size ; i++){
            count = 1;
            
            for(int j=i+1 ; j<size ; j++){
                if(arr[i] == arr[j]) count++;
            }

            if(count >= 2){
                cout<<arr[i];
                break;
            }else if(i == size-1) cout<<"No Duplicates Found";
        }
    }
    
}


int main(){
    int size = 0;
    cout<<"Enter Array Size: ";
    cin>>size;

    duplicateElement(size);
    return 0;
}