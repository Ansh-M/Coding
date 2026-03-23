#include<iostream>
using namespace std;

int trappingRainWater(int size){
    int rainWaterTrapped = 0;
    int arr[size] ;

    cout<<"\nEnter Array Elements: ";
    for(int i=0 ; i<size ; i++) cin>>arr[i];

    for(int i=0 ; i<size ; i++){
        if(arr[i] == 0) continue;

        int j = i + 1, lowerRightBar = 0, index = 0;
        bool flag = false;

        while(j < size){
            
            if(flag == false){
                
                if(arr[j] >= arr[i]) break;
                
                else if(j == size-1){
                    flag = true;
                    j = i+1;
                    lowerRightBar = arr[j];
                }
            }else{
                if(arr[j] > lowerRightBar){
                    lowerRightBar = arr[j];
                    index = j;
                }   
            }

            j++;
        }

        if(arr[j] >= arr[i] && lowerRightBar == 0){
            for(int k=i+1 ; k<j ; k++){
                rainWaterTrapped += arr[i] - arr[k];

                if(k == j-1) i = k;
            }
        }else{
            for(int k=i+1 ; k<index ; k++){
                rainWaterTrapped += arr[index] - arr[k];

                if(k == index-1) i = k;
            }
        }
    }
    
    return rainWaterTrapped;
}

int main(){
    int size = 0;
    cout<<"Enter Array Size: ";
    cin>>size;
        
    int  totalRainWaterTrapped = trappingRainWater(size);
    cout<<"\nTotal RainWater Trapped: "<<totalRainWaterTrapped<<" units";

    return 0;
}