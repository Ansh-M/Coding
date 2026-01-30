#include <iostream>
using namespace std;

int main(){
    float weight=0.0, height=0.0, bmi=0.0;
    cout<<"Enter height(in m) & weight(in kg) : ";
    cin>>height>>weight;
    
    bmi = weight/(height*height);
    
    if(bmi >= 18.5){
        if(bmi <= 24.9) cout<<"Normal";
        else if(bmi <= 29.9) cout<<"Overweight";
        else cout<<"Obese";
    }else cout<<"Underweight";

    return 0;
}