#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout << "enter the size of the array ";
    cin >> n;
    int arr[n];
    int temp[n];
    int k=0;
    for(i=0;i<n;i++)
    cin >> arr[i];
    for(i=0;i<n;i++){
        if(arr[i]!=0)
        temp[k++]=arr[i];
    }
    while(k<n){
        temp[k]=0;
        k++;
    }
    for(i=0;i<n;i++)
    cout << temp[i] << " ";
    return 0;
}