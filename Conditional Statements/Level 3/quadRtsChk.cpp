#include <iostream>
using namespace std;

string quadEquationType(double a, double b, double c){
    double discriminant = (b*b) - (4*a*c);
    
    if(discriminant > 0) return "Real and Distinct";
    else if(discriminant == 0) return "Real and Equal";
    else return "Imaginary";
}

int main(){
    double coefficientA=0.0, coefficientB=0.0, coefficientC=0.0;

    cout<<"Enter coefficients of a Quadratic Equation : ";
    cin>>coefficientA>>coefficientB>>coefficientC;

    string result = quadEquationType(coefficientA, coefficientB, coefficientC);
    cout<<result;
    
    return 0;
}