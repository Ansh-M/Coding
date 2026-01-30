#include<iostream>
using namespace std;

void ticketPriceCalculator(int age){
    float ticketPrice = 200.00;
    if(age >= 0 && age<=12){
        ticketPrice = ticketPrice * 0.50;
        cout<<"Your Ticket Price : Rs "<<ticketPrice;
    }else if(age<=17){
        ticketPrice = ticketPrice * 0.75;
        cout<<"Your Ticket Price : Rs "<<ticketPrice;
    }else if(age>=60){
        ticketPrice = ticketPrice * 0.60;
        cout<<"Your Ticket Price : Rs "<<ticketPrice;
    }else 
        cout<<"Your Ticket Price : Rs "<<ticketPrice;
}

int main(){
    int age=0.0;
    cout<<"Enter your Age(Ticket Price) : ";
    cin>>age;

    ticketPriceCalculator(age);
    return 0;
}