#include<iostream>
using namespace std;

float salaryIncrementCalc(float sal, int rat, int yOS){
    if(rat > 1){
        if(rat == 5) sal += (0.20*sal);
        else if(rat == 4) sal += (0.15*sal);
        else if(rat == 3) sal += (0.10*sal);
        else sal += (0.05*sal);
    }else sal += (0.00*sal);

    if(yOS > 5){
        return (sal += 0.05*sal);
    }else return sal;

    return 0;
}


int main(){
    float salary=0.0;
    int rating=0, yearsOfService=0;

    cout<<"Enter your current Salary: Rs ";
    cin>>salary;
    cout<<"Enter your rating(1-5): ";
    cin>>rating;
    cout<<"Enter years of service: ";
    cin>>yearsOfService;

    cout<<"\nSalary before Increment: "<<salary<<endl;
    salary = salaryIncrementCalc(salary, rating, yearsOfService);
    cout<<"Salary after Increment: "<<salary;
    return 0;
}