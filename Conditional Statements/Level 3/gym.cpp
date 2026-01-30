#include<iostream>
using namespace std;

float exerciseType(char ex, int dur, int wt, char iL){
    float calorie=0.0;
    if(ex=='R' || ex=='r'){
        if(iL=='L' || iL == 'l') return calorie=(8 * wt * dur) / 60;
        else if(iL=='M' || iL=='m') return calorie=(11 * wt * dur) / 60;
        else return calorie=(14 * wt * dur) / 60;
    }else if(ex == 'C' || ex == 'c'){
        if(iL == 'L' || ex == 'l') return calorie=(6 * wt * dur) / 60;
        else if(iL == 'M' || iL == 'm') return calorie=(9 * wt * dur) / 60;
        else return calorie=(12 * wt * dur) / 60;
    }else if(ex == 'W' || ex == 'w'){
        if(iL=='L') return calorie=(3 * wt * dur) / 60;
        else if(iL=='M') return calorie=(6 * wt * dur) / 60;
        else return calorie=(9 * wt * dur) / 60;
    }else if(ex=='S' || ex == 's'){
        if(iL=='L') return calorie=(7 * wt * dur) / 60;
        else if(iL=='M') return calorie=(10 * wt * dur) / 60;
        else return calorie=(13 * wt * dur) / 60;
    }
    return 0;
}

void foodEquivalent(float cal){
    cout<<"Food Equivalent: You Burned Approximately ";
    if(cal < 500){
        if(cal >= 300) cout<<"1 Pizza Slice!";
        else cout<<"1 Samosa!";
    }else cout<<"1 Burger!";
}

void heartRate(int HR){
    float maxHR = 195;
    float hRPercent = float(HR)/maxHR * 100;
    cout<<"Maximum HR(age 25): "<<maxHR<<endl;
    cout<<"Current HR %: "<<hRPercent;

    cout<<"\n\nHeart Rate Zone: ";

    if(hRPercent >= 50){
        if(hRPercent <= 70) cout<<"Fat Burn Zone";
        else if(hRPercent <= 85) cout<<"Cardio Zone";
        else if(hRPercent <= 100) cout<<"Peak Zone";
    }else cout<<"Below Training Zone";

}

void workoutIntensity(int HR, int dur, char iL){
    float score=0.0;
    if(iL == 'L')   score = (dur/10) + (HR/10) + 1*5;
    else if(iL == 'M')   score = (dur/10) + (HR/10) + 2*5;
    else if(iL == 'H')   score = (dur/10) + (HR/10) + 3*5;
    
    cout<<"Intensity Score: "<<score<<endl;
    
    cout<<"Workout Type: ";
    if(score < 10 ) cout<<"Light Workout";
    else if(score >= 10 && score < 20) cout<<"Moderate Workout";
    else if(score >= 20 && score < 30) cout<<"Good Workout";
    else if(score >= 30 ) cout<<"Intense Workout";
}

void fitnessAssessment(int HR, int dur){
    if(HR < 120 && dur > 30){
        cout<<"Good Endurance\n";
        cout<<"Performance Rating: Average";
    }else if(HR > 160 && dur > 20){
        cout<<"High Intensity Training\n";
        cout<<"Performance Rating: Excellent";
    }else if(dur > 40){
        cout<<"Steady State Cardio\n";
        cout<<"Performance Rating: Good";
    }else{
        cout<<"General Fitness\n";
        cout<<"Performance Rating: Needs Improvement";
    }
}


void workoutSummary(char ex, int dur, int HR, int wt, char iL){
    float calorie=0;
    
    cout<<"\n";
    cout<<"========================================="<<endl;
    cout<<"   GYM WORKOUT ANALYZER"<<endl;
    cout<<"========================================="<<endl;

    cout<<"\n--- WORKOUT DETAILS ---"<<endl;
    cout<<"Exercise: ";
    if(ex =='R' || ex == 'r'){
        cout<<"Running";
        calorie=exerciseType(ex, dur, wt, iL);
    }else if(ex =='C' || ex == 'c'){
        cout<<"Cycling";
        calorie=exerciseType(ex, dur, wt, iL);
    }else if(ex =='W' || ex == 'w'){
        cout<<"Weight Lifting";
        calorie=exerciseType(ex, dur, wt, iL);
    }else if(ex == 'S' || ex == 's'){
        cout<<"Swimming";
        calorie=exerciseType(ex, dur, wt, iL);
    }

    cout<<"\nDuration: "<<dur;
    cout<<"\nBody Weight: "<<wt;
    cout<<"\nHeart Rate: "<<HR;
    cout<<"\nIntensity: ";

    if(iL == 'L') cout<<"Low";
    else if(iL == 'M') cout<<"Mid";
    else if(iL == 'H') cout<<"High";

    cout<<"\n\n--- CALORIE BURN ANALYSIS ---"<<endl;
    cout<<"Calories Burned: "<<calorie<<" kcal"<<endl;
    cout<<"Calories/Minute: "<<calorie/dur<<" kcal";
    cout<<"\n\n";
    foodEquivalent(calorie);
    
    cout<<"\n\n--- HEART RATE ANALYSIS ---"<<endl;
    heartRate(HR);
    
    cout<<"\n\n--- WORKOUT INTENSITY ---"<<endl;
    workoutIntensity(HR, dur, iL);

    cout<<"\n\n--- FITNESS ASSESSMENT ---"<<endl;
    cout<<"Fitness Level: ";
    fitnessAssessment(HR, dur);
    

    cout<<"\n\n--- WORKOUT SUMMARY ---"<<endl;
    cout<<"Show Up Daily! Let's Do It!"<<endl;
    
}


int main() {
    char exercise, intensityLevel;
    int duration=0, heartRate=0, weight=0;
    
    cout << "Exercise Type(character only): ";
    cin>>exercise;
    cout<<"Duration(mins): ";
    cin>>duration;
    cout<<"Weight(Kg): ";
    cin>>weight;
    cout<<"Heart Rate(BPM): ";
    cin>>heartRate;
    cout<<"Intensity(character only): ";
    cin>>intensityLevel;
    
    workoutSummary(exercise, duration, heartRate, weight, intensityLevel);
    
    return 0;
}