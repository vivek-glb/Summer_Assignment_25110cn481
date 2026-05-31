#include<iostream>
using namespace std;
int reverse(int n,int rev){
    if(n==0){
        return rev;
    }
    int digit = n%10;
    rev=rev*10+digit;
    return reverse(n/10,rev);
}
int main(){
    int num;
    cout << "enter the number ";
    cin >> num;
    int answer = reverse(num,0);
    cout << "the reverse of the number is " << answer;
    return 0;
}