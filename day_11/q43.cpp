#include<iostream>
using namespace std;
int prime(int n){
    if(n<=1)
    return false;
    for(int i=2;i<n;i++){
        if(n%i==0)
        return false;
    }
    return true;
    return 0;
}
int main(){
    int n;
    cout << "enter the number ";
    cin >> n;
    if(prime(n))
    cout << "prime number ";
    else
    cout << "not a prime number ";
    return 0;
}