#include<iostream>
using namespace std;
int main(){
    int n,i,search;
    cout << "enter size of array ";
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++)
    cin >> arr[i];
    cout << "enter element to search ";
    cin >> search;
    int first=0 , last = n-1;
    while(first<=last){
        int mid = (first+last)/2;
        if(arr[mid]==search){
            cout << "element is found at index " << mid;
            return 0;
        }
        else if(arr[mid]<search)
        first=mid+1;
        else
        last = mid-1;
    }
    cout << "no such element exist in array";
    return 0;
}