#include<iostream>
using namespace std;
int main(){
    int n,rem,pro=1;
    cout << "enter the number ";
    cin >> n;
    while(n!=0){
        rem=n%10;
        pro=pro*rem;
        n=n/10;
    }
    cout << "the product of digits equals " << pro;
    return 0;
}