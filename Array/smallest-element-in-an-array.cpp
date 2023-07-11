#include<iostream>
#include<limits.h>
using namespace std;
int n=10;
int main(){
int arr[n],min;
cout<<"enter array value\n";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
min=INT_MAX;
for(int j=0;j<n;j++){
    if(arr[j]<min){

    min=arr[j];}
}
cout<<min;
return 0;
}