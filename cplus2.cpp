#include<iostream>
using namespace std;
int main(){
int nums[] = {5,7,9};
int size=3;
int min= nums[0];
int max= nums[0];

for(int i=1;i<size;i++){
    if(nums[i]<min){
        min = nums[i]
    }
    if(nums[i]>max){
        max = nums[i]
    }
}
cout<<"the max val= "<<max;
cout<<"the min val= "<<min;
}