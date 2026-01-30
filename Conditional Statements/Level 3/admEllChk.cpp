#include <iostream>
using namespace std;

void admissionEligibilityChecker(float mksPhy, float mksChem, float mksMath){
    float sumOfMarks = mksPhy + mksChem + mksMath;
    if(mksPhy >= 75 && mksChem >= 75 && mksMath >= 80){
        if(sumOfMarks >= 240) cout<<"Eligible to Enroll";
        else cout<<"Not Elligible as "<<sumOfMarks<<" < 240(req cummulative total)";
    }else cout<<"Not Elligible as Individual Marks criteria not fulfilled.";
}

int main(){
    float marksMaths=0, marksPhysics=0, marksChemistry=0;
    cout<<"Enter Marks of Phyics(Out of 100): ";
    cin>>marksPhysics;
    cout<<"Enter Marks of Chemistry(Out of 100): ";
    cin>>marksChemistry;
    cout<<"Enter Marks of Maths(Out of 100): ";
    cin>>marksMaths;

    admissionEligibilityChecker(marksPhysics, marksChemistry, marksMaths);

    return 0;
}