#include<bits/stdc++.h>
#include<limits.h>
using namespace std;

int main(){
int arr[]={10,2,3,8,15,-5,48,3,45,45},n;
n=sizeof(arr)/sizeof(arr[0]);
sort(arr,arr+n);
cout<<"1st smallest no: "<<arr[0]<<endl<<"2nd smallest no"<<arr[1];

return 0;
}