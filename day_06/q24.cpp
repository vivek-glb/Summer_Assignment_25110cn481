#include<iostream>
using namespace std;
int main(){
    int x,n,i;
    long long result =1;
    cout << "enter base ";
    cin >> x;
    cout << "enter power ";
    cin >> n;
    for(i=1;i<=n;i++){
        result=result*x;
    }
    cout << "answer is " << result;
    return 0;
}