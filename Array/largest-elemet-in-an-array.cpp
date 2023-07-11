#include<iostream>
#include<limits.h>
using namespace std;
int n=10;
int main(){
int arr[n],max;
cout<<"enter array value\n";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
max=INT_MIN;
for(int j=0;j<n;j++){
    if(arr[j]>max){

    max=arr[j];}
}
cout<<max;
return 0;
}