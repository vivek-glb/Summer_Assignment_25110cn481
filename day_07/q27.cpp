#include<iostream>
using namespace std;
int sumdigit(int n){
    if(n==0){
        return 0;
    }
    else{
        return((n%10)+sumdigit(n/10));
    }
}
int main(){
    int n;
    cout << "enter the number ";
    cin >> n;
    cout << "sum of digits is " << sumdigit(n);
    return 0;
}