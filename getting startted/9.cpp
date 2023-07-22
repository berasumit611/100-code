#include<iostream>
using namespace std;
int main(){
int lower,upper;

cin>>lower>>upper;
for(int i=lower;i<=upper;i++){
    bool is_prime=true;

    if(i==1||i==0) is_prime=false;
    
    for(int j=2;j<=i/2;++j){
        if(i%j==0){
            is_prime=false;
            break;
        }
    }
    if(is_prime) cout<<i<<" ";
}
return 0;
}