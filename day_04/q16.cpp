#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int first,last,num;
    cout << "enter the start of the range ";
    cin >> first;
    cout << "enter the end of the range ";
    cin >> last;
    cout << "the armstrong number within the given range are " << endl;
    for(num=first;num<=last;num++){
        int temp=num,sum=0,digits=0;
        int n=temp;
        while(n!=0){
            digits++;
            n=n/10;
        }
        n=temp;
        while(n>0){
            int rem=n%10;
            sum = sum + pow(rem,digits);
            n=n/10;
        }
        if(sum==num){
            cout << num << " ";
        }
    }
    return 0;
}