//faceprep

#include<iostream>
using namespace std;
int main(){
int a=0,b=1,next_term=0,n;
cout<<"Enter the n value:";
cin>>n;
if(n==0 || n==1) cout<<n;
else{
    next_term=a+b;
    for (int i = 3; i < n; i++)
    {
        a=b;
        b=next_term;
        next_term=a+b;
    }
    cout<<b;
    
}

return 0;
}