#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout << "enter the size of the arrray ";
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++)
    cin >> arr[i];
    int temp = arr[0];
    for(i=0;i<n-1;i++)
    arr[i]=arr[i+1];
    arr[n-1] =temp;
    for(i=0;i<n;i++)
    cout << arr[i] << " ";
    return 0;
}