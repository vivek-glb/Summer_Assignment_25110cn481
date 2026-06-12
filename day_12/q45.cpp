#include<iostream>
using namespace std;
int palindrome(int n){
    int temp=n;
    int rev=0;
    while(n>0){
        int rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    return temp==rev;
}
int main(){
    int n;
    cout << "enter the number ";
    cin >> n;
    if(palindrome(n)){
        cout << "the given number is palindrome";
    }
    else{
        cout << "the given number is not palindrome";
    }
    return 0;
}