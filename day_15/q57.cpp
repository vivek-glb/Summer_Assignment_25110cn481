#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout << "enter the size of the array ";
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++)
    cin >> arr[i];
    cout << "reversed array is ";
    for(i=n-1;i>=0;i--)
    cout  << arr[i] << " ";
    return 0;
}