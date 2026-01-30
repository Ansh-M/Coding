#include<iostream>
using namespace std;

void triangleTypeByAngles(float ang1, float ang2, float ang3){
    if((ang1 + ang2 + ang3) == 180.0 && (ang1 > 0 && ang2 > 0 && ang3 > 0)){
        if(ang1 < 90.0 && ang2 < 90 && ang3 < 90) cout<<"Acute";
        else if(ang1 == 90.0 || ang2 == 90.0 || ang3 == 90.0) cout<<"Right";
        else cout<<"Obtuse";
    }else cout<<"Invalid Angle Values";
}

int main(){
    float angleOne=0.0, angleTwo=0.0, angleThree=0.0; 
    cout<<"Enter 3 Angles for a Triangle : ";
    cin>>angleOne>>angleTwo>>angleThree;

    triangleTypeByAngles(angleOne, angleTwo, angleThree);
    
    return 0;
}
