#include<iostream>
using namespace std;
int main(){
    int first,last,i,j,count=0;
    cout << "enter the starting number ";
    cin >> first;
    cout << "enter the last number ";
    cin >> last;
    for(i=first;i<=last;i++){
        count =0;
        for(j=1;j<=i;j++){
            if(i%j==0)
            count++;
        }
        if(count==2){
            cout << i << " ";
        }
    }
    return 0;
}