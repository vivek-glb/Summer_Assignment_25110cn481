#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    char ch;
    cout << "enter the number of rows ";
    cin >> n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++)
        cout << " ";
        for(ch='A';ch<='A'+i-1;ch++)
        cout << ch;
        for(ch='A'+i-2;ch>='A';ch--)
        cout << ch;
        cout << endl;
    }
    return 0;
}