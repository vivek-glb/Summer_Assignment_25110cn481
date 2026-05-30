#include<iostream>
using namespace std;
int main(){
    int n,i,a=0,b=1,c;
    cout << "enter the nth term required ";
    cin >> n;
    if(n==1){
        cout << "the nth term is " << a;
    }
    else if(n==2){
        cout << "the nth term is " << b;
    }
    else{
        for(i=3;i<=n;i++){
            c=a+b;
            a=b;
            b=c;
        }
        cout << "the nth term is " << b;
    }
    return 0;
}