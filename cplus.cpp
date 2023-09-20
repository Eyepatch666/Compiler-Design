#include<iostream>
using namespace std;
int main(){
int nums[] = {5,7,9};
int size=3;
int sum= 0;

for(int i=0;i<size;i++){
    sum= sum+arr[i];
}
int avg = sum/size;
cout<<"the average= "<<avg;
}