#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout << "enter the size of the array ";
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++)
    cin >> arr[i];
    for(i=0;i<n-1;i++){
        int min=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[min])
            min=j;
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
    cout << "sorted array is ";
    for(i=0;i<n;i++)
    cout << arr[i] << " ";
    return 0;
}