#include<iostream>
#include<cmath>
using namespace std;

void armstrong(int low,int high){

    for(int i=low;i<=high;i++){
        //length count
        int len=i,count=0;
        while(len!=0){
            count++;
            len/=10;
        }

        //getting sum of nth power
        int sum=0,temp=i,remainder;
        while(temp!=0){
        remainder=temp%10;
        sum+=pow(remainder,count);
        temp=temp/10;
        }
        if(i==sum) cout<<i<<" ";
    }
    
}    
    
    

int main(){
int lower,upper,len;
cin>>lower>>upper;


armstrong(lower,upper);

return 0;
}