//set bits means 1
#include<iostream>
using namespace std;
int main(){
    int n, count =0;
    cout << "enter the number ";
    cin >> n;
    while(n>0){
        if(n%2==1){
            count++;
        }
        n=n/2;
    }
    cout << "number of set bits equals to " << count;
    return 0;
}