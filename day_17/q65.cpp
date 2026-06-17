#include<iostream>
using namespace std;
int main(){
    int n1,n2,i,j;
    cout << "enter the size of 1st array ";
    cin >> n1;
    int arr1[n1];
    for(i=0;i<n1;i++)
    cin >> arr1[i];
    cout << "enter the size of 2nd array ";
    cin >> n2;
    int arr2[n2];
    for(i=0;i<n2;i++)
    cin >> arr2[i];
    int merge[n1+n2];
    for(i=0;i<n1;i++)
    merge[i]=arr1[i];
    for(i=0;i<n2;i++)
    merge[n1+i] = arr2[i];

    for(i=0;i<n1+n2;i++)
    cout << merge[i] <<" ";
    return 0;
}