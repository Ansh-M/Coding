#include<iostream>
using namespace std;

void shippingCostCalculator(int distance, int weight){
    if(weight<1 || weight>10000000) cout<<"Too Less/Much Weight, Can't Transport!";
    else if(distance<1 || distance>10000000) cout<<"Too Less/Much Distance, Can't Transport!";
    else{
        int cost=5;
        for( ; weight>0 ; weight--){
            cost += 2;
        }

        for(int i=1 ; i<=distance ; i++){
            if(i%20==0) cost +=1; 
        }
        cout<<"Cost: "<<cost;

    }
}

int main(){
    int distance = 0, weight = 0;
    cout<<"\nShipping Cost";
    
    cout<<"\nEnter weight of Parcel(kg): ";
    cin>>weight;
    
    cout<<"\nEnter Shipping Distance(km): ";
    cin>>distance;
    
    shippingCostCalculator(distance, weight);
    return 0;
}