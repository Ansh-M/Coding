#include <iostream>
using namespace std;

int main(){
    float costPrice = 0.0, sellPrice = 0.0;
    cout<<"Enter Cost Price and Sell Price : ";
    cin>>costPrice>>sellPrice;
    
    if(costPrice>sellPrice){
        cout<<"Loss";
    }else if(sellPrice>costPrice){
        cout<<"Profit";
    }else{
        cout<<"No Profit No Loss";
    }
    
    return 0;
}