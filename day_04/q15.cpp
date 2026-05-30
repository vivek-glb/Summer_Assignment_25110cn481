#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num,originalnum,rem,n=0;
    int result=0;
    cout << "enter the number ";
    cin >> num;
    originalnum = num;
    while(originalnum!=0){
        originalnum = originalnum/10;
        n++;
    }
    originalnum=num;
    while(originalnum!=num){
        rem=originalnum%10;
        result = result + pow(rem,n);
      originalnum=originalnum/10;
    }
    if(result==num){
        cout << num << " is an armstrong number";
    }
    else{
        cout << num << " is not an armstrong number";
    }
    return 0;
}
