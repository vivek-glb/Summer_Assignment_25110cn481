#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout << "enter the size of array ";
    cin >> n;
    int arr[n-1];
    int sum=0;
    for(i=0;i<n-1;i++){
    cin >> arr[i];
    sum = sum + arr[i];
    }
    int total = n*(n+1)/2;
    cout << "missing number " << total-sum;
    return 0;
}