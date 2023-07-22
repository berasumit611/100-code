#include<iostream>
using namespace std;
int main(){
int x,y;
cin>>x>>y;
if(x==y) cout<<"equal";
else (x>y)? cout<<x<<" is greater than "<<y:cout<<y<<" is greater than "<<x;
return 0;
}