#include<iostream>
using namespace std;

void loanElligibility(int age, float inc, int credS){
    if(age >= 21 && age <= 60){
        if(inc >= 25000 && credS >= 700) cout<<"Elligible";
        else if(inc < 25000 && credS > 700) cout<<"Inelligible : Income criteria not fulfilled";
        else cout<<"Inelligible : Low Credit Score";
    }else cout<<"Inelligible : Age Requirement not met";
}

int main(){
    int age=0, creditScore=0;
    float income=0.0;

    cout<<"Enter your age : ";
    cin>>age;
    cout<<"Enter your income : ";
    cin>>income;
    cout<<"Enter your Credit Score : ";
    cin>>creditScore;

    loanElligibility(age, income, creditScore);
    
    return 0;
}