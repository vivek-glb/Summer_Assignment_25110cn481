#include<iostream>
using namespace std;
int main(){
    int r,c,i,j;
    cout << "enter the no of rows and columns ";
    cin >> r >> c;
    int arr[r][c];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
        cin >> arr[i][j];
    }
    for(i=0;i<r;i++){
        int sum=0;
        for(j=0;j<c;j++)
        sum= sum+arr[i][j];
        cout << "row" << i+1 << "sum equals " << sum <<endl;
    }
    return 0;
}