#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout << "enter the size of the square matrix (row or col) ";
    cin >>n;
    int arr[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
        cin >> arr[i][j];
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(arr[i][j]!=arr[j][i]){
                cout << "the given matrix is not symmetric ";
                return 0;
            }
        }
    }
    cout << "the given matrix is symmetric";
    return 0;
}