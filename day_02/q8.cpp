#include<iostream>
using namespace std;
int main()
{
    int n,original,rem,rev=0;
    cout << "enter the number ";
    cin >> n;
    original=n;
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(original==rev){
        cout << "the given number is palindrome ";
    }
    else{
        cout << "the given number is not palindrome ";
    }
    return 0;
}