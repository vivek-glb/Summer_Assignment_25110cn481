#include<iostream>
using namespace std;
int main(){
    int n,i,j,sum;
    cout << "enter the size of array ";
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++)
    cin >> arr[i];
    cout << "enter the target ";
    cin >> sum;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]+arr[j]==sum){
                cout << arr[i] << " " << arr[j];
                return 0;
            }
        }
    }
    cout << "no pair exist";
    return 0;
}