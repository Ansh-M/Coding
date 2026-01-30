#include <iostream>
using namespace std;

int main(){
    double unitsUsed=0.0, billValue=0.0;
    string name="";
    cout<<"Electricity Bill"<<endl<<endl;
    cout<<"Name : ";
    cin>>name;
    cout<<"Units used : ";
    cin>>unitsUsed;

    if(unitsUsed >= 1){
        if(unitsUsed <= 100){
            billValue = unitsUsed * 5;
            cout<<endl<<endl<<"Your Electricity Bill"<<endl<<endl;
            cout<<"Name : "<<name;
            cout<<"\nBill Value : Rs "<<billValue<<" (Rs 5/Unit)";
            cout<<"\nDue Date : 30-JAN-2026";
        }else if(unitsUsed <= 200){
            billValue = unitsUsed * 7;
            cout<<endl<<endl<<"Your Electricity Bill"<<endl<<endl;
            cout<<"Name : "<<name;
            cout<<"\nBill Value : Rs "<<billValue<<" (Rs 7/Unit)";
            cout<<"\nDue Date : 30-JAN-2026";
        }else if(unitsUsed <= 300){
            billValue = unitsUsed * 10;
            cout<<endl<<endl<<"Your Electricity Bill"<<endl<<endl;
            cout<<"Name : "<<name;
            cout<<"\nBill Value : Rs "<<billValue<<" (Rs 10/Unit)";
            cout<<"\nDue Date : 30-JAN-2026";
        }else{
            billValue = unitsUsed * 15;
            cout<<endl<<endl<<"Your Electricity Bill"<<endl<<endl;
            cout<<"Name : "<<name;
            cout<<"\nBill Value : Rs "<<billValue<<" (Rs 15/Unit)";
            cout<<"\nDue Date : 30-JAN-2026";
        }
    }else cout<<"Invalid Consumption Units";

}