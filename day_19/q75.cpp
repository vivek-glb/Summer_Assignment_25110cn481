#include<iostream>
using namespace std;
int main(){
    int r,c,i,j;
    cout << "enter no. of rows and columns ";               
    cin >> r>> c;
    int a[r][c];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin >> a[i][j];
        }
    }
    cout << "transpose of matrix is " << endl;
    for(i=0;i<c;i++){
        for(j=0;j<r;j++)
        cout << a[j][i] << " ";
        cout << endl;
    }
    return 0;
}