#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout << "enter the size of the array ";
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++)
    cin >> arr[i];
    cout << "array after removing duplicate elements ";
    for(i=0;i<n;i++){
        bool duplicate = false;
        for(j=0;j<i;j++){
            if(arr[i]==arr[j]){
                duplicate = true;
                break;
            }
        }
        if(!duplicate)
        cout << arr[i] << " ";
    }
    return 0;
}