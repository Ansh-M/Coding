#include <iostream>
using namespace std;

int main(){
    float xCoordinate=0.0, yCoordinate=0.0;
    cout<<"Enter x & y coordinates : ";
    cin>>xCoordinate>>yCoordinate;

    if(xCoordinate > 0){
        if(yCoordinate > 0) cout<<"1st Quadrant";
        else if(yCoordinate < 0) cout<<"4th Quadrant";
        else cout<<"Positive x-axis";
    }else if(xCoordinate < 0){
        if(yCoordinate > 0) cout<<"2nd Quadrant";
        else if(yCoordinate < 0) cout<<"3rd Quadrant";
        else cout<<"Negative x-axis";
    }else{
        if(yCoordinate > 0) cout<<"Positive y-axis";
        else if(yCoordinate < 0) cout<<"Negative y-axis";
        else cout<<"Origin";
    }
    cout<<endl<<endl;
    return 0;
}