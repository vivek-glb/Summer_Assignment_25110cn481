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
    for(j=0;j<c;j++){
        int sum=0;
        for(i=0;i<r;i++)
        sum= sum+arr[i][j];
        cout << "column" << j+1 << "sum equals " << sum <<endl;
    }
    return 0;
}