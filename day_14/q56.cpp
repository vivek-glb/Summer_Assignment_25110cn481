#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout << "enter the size of the array ";
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++)
    cin >> arr[i];
    cout << "dulicate elements are ";
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                cout << arr[i] << " ";
                break;
            }
        }
   }
   return 0;
}