#include <iostream>
using namespace std;

int main(){
    int days=0, month=0;
    cout<<"Enter Day Number and Month Number (to check validity) : ";
    cin>>days>>month;

    if(month != 2 && month <=12 && month>=1){
        if(month == 4 || month == 6 || month == 9 || month == 11){
            if(days >= 1 && days <= 30) cout<<"Valid";
            else cout<<"Invalid Days";
        }else if(days>=1 && days<=31) cout<<"Valid";
        else cout<<"Invalid Days";
    }else if(month == 2){
        if(days >= 1 && days<=29) cout<<"Valid";
        else cout<<"Invalid Days";
    }else cout<<"Invalid Month";
}