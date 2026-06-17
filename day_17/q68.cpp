#include<iostream>
using namespace std;
int main(){
    int n1,n2,i,j;
    cout << "enter the size of array1 ";
    cin >> n1;
    int arr1[n1];
    for(i=0;i<n1;i++)
    cin >> arr1[i];
    cout << "enter the size of array2 ";
    cin >> n2;
    int arr2[n2];
    for(i=0;i<n2;i++)
    cin >> arr2[i];
    cout << "common elements in array are ";
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            if(arr1[i]==arr2[j]){
                cout << arr1[i] << " ";
                break;
            }
        }
    }
    return 0;
}