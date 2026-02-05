#include<iostream>
using namespace std;

void chkPerfectNumber(int num){
    cout<<"All Perfect Numbers Between 1 to "<<num<<": [ ";    
    
    if(num == 1) cout<<num;
    else if(num <= 3) cout<<"None";
    else{
        int sum=0;
        for(int i=4 ; i<=num ; i++){
            sum=0;
            
            for(int j=1 ; j<=i/2 ; j++){
                if(i % j == 0) sum += j;
            }
            
            if(sum == i) cout<<i<<" ";
        }
    }
    cout<<"]";
}


int main(){
    int number=0;
    cout<<"Enter a number: ";
    cin>>number;

    chkPerfectNumber(number);
    return 0;
}