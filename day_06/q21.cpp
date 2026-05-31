#include<iostream>
using namespace std;
int main(){
    int n,rem,binary=0,place=1;
    cout << "enter the number ";
    cin >> n;
    while(n>0){
        rem = n%2;
        binary = binary+rem*place;
        place = place*10;
        n=n/2;
    }
    cout << "the binary form is " << binary;
    return 0;
}
