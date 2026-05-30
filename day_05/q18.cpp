//strong nos are those whose factorial of each digit equal to no
#include<iostream>
using namespace std;
int main(){
    int n,i,rem,sum=0,fact;
    cout << "enter the number ";
    cin >> n;
    int temp=n;
    while(temp!=0){
        rem=temp%10;
        fact=1;
        for(i=1;i<=rem;i++){
            fact=fact*i;
        }
        sum=sum+fact;
        temp=temp/10;
    }
    if(sum==n){
        cout << "strong number";
    }
    else{
        cout << "not a strong number";
    }
    return 0;
}
