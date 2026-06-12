#include<iostream>
#include<cmath>
using namespace std;
int armstrong(int n){
    int temp,sum=0,digits=0;
    temp=n;
    int t=n;
    while(t>0){
        digits++;
        t=t/10;
    }
    while(n>0){
        int rem=n%10;
        sum=sum+pow(rem,digits);
        n=n/10;
    }
    return temp==sum;
}
int main(){
    int n;
    cout << "enter the number ";
    cin >> n;
    if(armstrong(n)){
        cout << "the given number is armstrong";
    }
    else{
        cout << "the given number is not armstrong";
    }
    return 0;
}