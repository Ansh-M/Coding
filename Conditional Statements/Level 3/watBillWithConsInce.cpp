#include <iostream>
using namespace std;

void waterConsumptionBillCalc(float watCons){
    float billAmt=0;
    cout<<"\nWater Consumed : "<<watCons<<" L";
    cout<<"\nYour Bill Amount: Rs ";
    if(watCons > 0 && watCons <= 5000){
        billAmt += 2*watCons;
        cout<<billAmt<<" at Rs 2/L"<<endl;
        if(watCons < 3000){
            cout<<"\nIncenstive on usage below 3000L (15%)"<<endl;
            billAmt -= (0.15 * billAmt);
            cout<<"Final Bill Amount after deduction: Rs "<<billAmt;
        }
    }else if(watCons >= 5001 && watCons <= 10000){
        billAmt += 3*watCons;
        cout<<billAmt<<" at Rs 3/L"<<endl;
    }else{
        billAmt += 5*watCons;
        cout<<billAmt<<" at Rs 5/L"<<endl;
    }
}

int main(){
    float waterConsumed=0;
    cout<<"Enter Amount of Water Consumed(in ltr): ";
    cin>>waterConsumed;

    waterConsumptionBillCalc(waterConsumed);

    return 0;
}