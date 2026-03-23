#include<iostream>
using namespace std;

void stockBuySellMultipleTimes(int size){
    int arr[size];
    cout<<"\nEnter Stock Prices in the form of Array Elements: ";
    for(int i=0 ; i<size ; i++) cin>>arr[i];

    cout<<"\nMaximum Profit through Multiple Transactions: ";
    if(size <= 3) cout<<"Atleast Enter 3 Prices";
    else{
        int sellPrice = arr[0], costPrice = arr[0], maxProfit = 0;
        for(int i=1 ; i<size ;){
            int profit = 0;
            for(int j=i ; j<size ; i++){
                
                if(sellPrice <= arr[j]){
                    sellPrice = arr[j];
                    profit = sellPrice - costPrice;
                }
                else if(sellPrice > arr[j]){
                    costPrice = arr[j];
                    sellPrice = arr[j]; 
                    break;
                }
                j++;
            }
            maxProfit = maxProfit + profit;       
        }
        cout<<maxProfit;
    }
}


int main(){
    int size = 0; 
    cout<<"Enter Array Size: ";
    cin>>size;

    stockBuySellMultipleTimes(size);
    return 0;
}