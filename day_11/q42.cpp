#include<iostream>
using namespace std;
int max(int a, int b){
    if(a>b)
    return a;
    else
    return b;
}
int main(){
    int a,b;
    cout << "enter the numbers ";
    cin >> a >> b;
    cout << "maximum = " << max(a,b);
    return 0;
}