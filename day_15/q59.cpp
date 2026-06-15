#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout << "enter the size of the array ";
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++)
    cin >> arr[i];
    int temp = arr[n-1];
    for(i=n-1;i>0;i--)
    arr[i]=arr[i-1];
    arr[0]=temp;
    for(i=0;i<n;i++)
    cout << arr[i] << " ";
    return 0;
}