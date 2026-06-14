#include<iostream>
using namespace std;
int main(){
    int n,i,search;
    cout << "enter the size of the array ";
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "enter the element to search ";
    cin >> search;
    for(i=0;i<n;i++){
        if(arr[i]==search){
            cout << "element is found at index " << i; 
            return 0;
        }
    }
        cout << "element not found in the array";
        return 0;
}