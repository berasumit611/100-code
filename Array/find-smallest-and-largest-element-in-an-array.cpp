#include<iostream>
#include<limits.h>
using namespace std;
int main(){
int arr[]={10,25,0,12,400,3,5,-9,45,-7,-10,10},min,max,n;
min=INT_MAX;
max=INT_MIN;
n=sizeof(arr)/sizeof(arr[0]);
for (int i = 0; i < n ; i++)
{
    if(arr[i]>max){
        max=arr[i];
    }
    if(arr[i]<min){
        min=arr[i];
    }
}
cout<<"smallest "<<min<<endl<<"largest "<<max;

return 0;
}