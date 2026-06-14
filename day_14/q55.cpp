#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout << "enter the size of the array ";
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++)
    cin >> arr[i];
    int largest = arr[0];
    int second = arr[0];
    for(i=1;i<n;i++){
        if(arr[i]>largest){
            second = largest;
        largest = arr[i];}
        else if(arr[i]>second && arr[i]!=largest){
        second = arr[i];}
    }
    cout << "second largest element is " << second << endl;
    return 0;
}