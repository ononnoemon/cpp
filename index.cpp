//htr
#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

int sum(int n){
    if(n==1) return 1;
    return n+sum(n-1);
};
int fac(int n){
    if(n==1) return 1;
    return n*fac(n-1);
};
int fib(int n){
    //if(n<2) return 1;
    if(n==0) return 0;
    if(n==1) return 1;

    return fib(n-1)+fib(n-2);
}
int main(){
    //cout<<"Hello World"<<endl;
    // cout<<sum(40)<<endl;
    //cout<<fac(7)<<endl;
    cout<<fib(5)<<endl;
};
