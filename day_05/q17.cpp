//perfect number are those whose sum of factors is the number itself
#include<iostream>
using namespace std;
int main(){
int i,n,sum=0;
cout << "enter the number ";
cin >> n;
for(i=1;i<n;i++){
    if(n%i==0){
        sum=sum+i;
    }
}
if(sum==n){
    cout << "the given number is perfect number";
}
else{
    cout << "the given number is not a perfect number";
}
return 0;
}