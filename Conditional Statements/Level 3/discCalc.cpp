#include<iostream>
using namespace std;

float discountCalc(float purAmt,char mem){
    if(purAmt > 2000){
        if(purAmt > 10000) purAmt -= (0.20*purAmt);
        else if(purAmt > 5000) purAmt -= (0.15*purAmt);
        else purAmt -= (0.10*purAmt);
    }else purAmt -= (0.00*purAmt);

    if(mem == 'Y' || mem == 'y'){
        return (purAmt -= 0.05*purAmt);
    }else return purAmt;

    return 0;
}


int main(){
    float purchaseAmt=0.0;
    char member;

    cout<<"Your Purchase Total: Rs ";
    cin>>purchaseAmt;
    cout<<"Are you a Member(Y/N): ";
    cin>>member;

    cout<<"\nPurchase Amount w/o Discount: Rs "<<purchaseAmt<<endl;
    purchaseAmt = discountCalc(purchaseAmt, member);
    cout<<"Purchase Amount after Discount: Rs "<<purchaseAmt;
    
    return 0;
}