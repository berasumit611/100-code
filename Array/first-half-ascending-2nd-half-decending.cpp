#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[]={10,25,0,12,400,3,5,-9,45,-7,-10,10},n,mid;
n=sizeof(arr)/sizeof(arr[0]);

mid=n/2;

   for(int j=0;j<mid;j++){
    for (int i = j+1; i< mid; i++)
    {
        if(arr[j]>arr[i]) {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    
   }
   
   for(int j=mid;j<n;j++){
    for (int i = j+1; i< n; i++)
    {
        if(arr[j]<arr[i]) {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    
   }
   
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

return 0;}
