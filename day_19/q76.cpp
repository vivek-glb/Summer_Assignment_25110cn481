#include<iostream>
using namespace std;
int main(){
    int n,i,j,sum=0;
    cout << "enter size of square matrix ";
    cin >> n;
    int arr[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }
    for(i=0;i<n;i++)
    sum=sum+arr[i][i];
    cout << "diagonal sum = " << sum;
    return 0;
}