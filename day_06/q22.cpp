#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int binary,decimal=0,rem,i=0;
    cout << "enter the binary number ";
    cin >> binary;
    while(binary>0){
        rem=binary%10;
        if(rem!=0 && rem!=1){
            cout << "enter the valid binary number ";
            break;
        }
        else{
        decimal=decimal+rem*pow(2,i);
        binary=binary/10;
        i++;
        }
        }  
        cout << "the decimal no. is " << decimal;
    return 0;
}