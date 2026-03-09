#include<iostream>
using namespace std;

void stockBuySellOnce(int size){
    int arr[size];
    cout<<"\nEnter Stock Prices in the form of Array Elements: ";
    for(int i=0 ; i<size ; i++) cin>>arr[i];

    cout<<"\nMaximum Profit: ";
    if(size <= 3) cout<<"Atleast Enter 3 Prices";
    else{
        int maxProfit = 0, sellPrice = arr[1], costPrice = arr[0];
        for(int i=0 ; i<size ; i++){
            if(i == 0) maxProfit = sellPrice - costPrice;

            if(sellPrice - costPrice < 0) costPrice = arr[i];
            else if(sellPrice - costPrice > maxProfit) maxProfit = sellPrice - costPrice;
            
            if(i <= size-2) sellPrice = arr[i+1];
        }
        cout<<maxProfit;
    }
}


int main(){
    int size = 0; 
    cout<<"Enter Array Size: ";
    cin>>size;

    stockBuySellOnce(size);
    return 0;
}