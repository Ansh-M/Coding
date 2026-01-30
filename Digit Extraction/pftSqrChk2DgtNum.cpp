#include<iostream>
using namespace std;

void perfecrSquareCheck(float number){
    if(number == 1*1) cout<<"Perfect Square";
    else if(number == 2*2) cout<<"Perfect Square";
    else if(number == 3*3) cout<<"Perfect Square";
    else if(number == 4*4) cout<<"Perfect Square";
    else if(number == 5*5) cout<<"Perfect Square";
    else if(number == 6*6) cout<<"Perfect Square";
    else if(number == 7*7) cout<<"Perfect Square";
    else if(number == 8*8) cout<<"Perfect Square";
    else if(number == 9*9) cout<<"Perfect Square";
    else cout<<"Not a Perfect Square";
}

int main(){
    float number=0;
    cout<<"Enter a 2 digit Number: ";
    cin>>number;

    perfecrSquareCheck(number);

    return 0;
}