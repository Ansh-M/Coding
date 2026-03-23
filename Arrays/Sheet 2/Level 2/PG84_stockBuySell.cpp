#include<iostream>
using namespace std;

void stockBuySellOnce(int size){
    int arr[size];
    cout<<"\nEnter Stock Prices in the form of Array Elements: ";
    for(int i=0 ; i<size ; i++) cin>>arr[i];

    cout<<"\nMaximum Profit: ";
    if(size <= 3) cout<<"Atleast Enter 3 Prices";
    else{
        int sellPrice = arr[1], costPrice = arr[0];
        for(int i=0 ; i<size ; i++){
            if(costPrice > arr[i]) costPrice = arr[i];
            
            if(sellPrice < arr[i+1] && i <= size-2) sellPrice = arr[i+1];
            
        }
        cout<<sellPrice-costPrice;
    }
}


int main(){
    int size = 0; 
    cout<<"Enter Array Size: ";
    cin>>size;

    stockBuySellOnce(size);
    return 0;
}