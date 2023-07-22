#include<iostream>
using namespace std;
long factorial(int n){
    if(n==0 || n==1)
        return 1;
    else 
        return(n*factorial(n-1));
}
int main(){
int n;
cout<<"enter value of n";
cin>>n;
if(n<0) cout<<"invalid output";
else    cout<<"factorial of "<<n<<" is: "<<factorial(n);
return 0;
}