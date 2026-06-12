#include<iostream>
using namespace std;
int perfect(int n){
    int i,sum=0;
    for(i=1;i<n;i++){
        if(n%i==0)
        sum=sum+i;
    }
    return sum==n;
}
int main(){
    int n;
    cout << "enter the number ";
    cin >> n;
    if(perfect(n)){
        cout << "perfect number";
    }
    else{
        cout << "not a perfect number";
    }
    return 0;
}