#include<iostream>
using namespace std;

void perfecrSquareCheck(float number){
    cout<<"Number Chnaged to: "<<number<<endl;
    if(number == 1*1) cout<<"Sunny Number";
    else if(number == 2*2) cout<<"Sunny Number";
    else if(number == 3*3) cout<<"Sunny Number";
    else if(number == 4*4) cout<<"Sunny Number";
    else if(number == 5*5) cout<<"Sunny Number";
    else if(number == 6*6) cout<<"Sunny Number";
    else if(number == 7*7) cout<<"Sunny Number";
    else if(number == 8*8) cout<<"Sunny Number";
    else if(number == 9*9) cout<<"Sunny Number";
    else if(number == 10*10) cout<<"Sunny Number";
    else cout<<"Not a Sunny Number";
}

int main(){
    float number=0;
    cout<<"Enter a 2 digit Number: ";
    cin>>number;

    number=number+1;

    perfecrSquareCheck(number);

    return 0;
}