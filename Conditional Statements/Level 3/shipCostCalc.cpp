#include <iostream>
using namespace std;

double shippingCostCalc(double bCost, double wt, double dst){
    
    if(wt > 5 && dst > 100){
        bCost = bCost*5 + (wt-5)*10 + (dst-100)*5 + 20;
        return bCost;
    }else if(wt > 5){
        bCost = bCost*5 + (wt-5)*10;
        return bCost;
    }else if(dst > 100){
        bCost = bCost*wt + (dst-100)*5;
        return bCost;
    }else{
        bCost = bCost*wt;
        return bCost;
    }
}

int main(){
    double baseCost=50, weight=0, distance=0;
    cout<<"Enter item weight(in Kg): ";
    cin>>weight;
    cout<<"Enter destination distance(in Km): ";
    cin>>distance;

    cout<<"\nBase Cost: Rs "<<baseCost<<endl;
    double totalCost= shippingCostCalc(baseCost, weight, distance);
    cout<<"Your Shipping Total: Rs "<<totalCost;
    return 0;
}