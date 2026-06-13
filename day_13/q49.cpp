#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout << "enter the number of terms in array ";
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++){
        cin >>arr[i];
    }
    cout << "array elements are \n";
    for(i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}