#include<iostream>
#include<algorithm>
using namespace std;



int main(){
int arr[]={10,25,0,12,400,3,5,-9,45,-7,-10,10},n;
n=sizeof(arr)/sizeof(arr[0]);

    sort(arr,arr+n);
    for(int i=0;i<n;i++){
         int count=1;
         while(i<n-1 && arr[i]==arr[i+1]){
            i++;
            count++;
         }
         cout<<arr[i]<<" is "<<count<<" times"<<endl;
    }

return 0;
}