//faceprep

#include<iostream>
using namespace std;
int main(){
int a=0,b=1,sum=0,n;
cout<<"Enter no of terms:";
cin>>n;
cout<<"Fibonacci series";
while(sum<=n){
    cout<<sum<<"\t";
    a=b;
    b=sum;
    sum=a+b;
}

return 0;
}