#include<iostream>
using namespace std;
int main(){
    int n,i,key,count=0;
    cout << "enter the size of the array ";
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++)
    cin >> arr[i];
    cout << "enter the element whose frequency is to be searched ";
    cin >> key;
    for(i=0;i<n;i++){
        if(arr[i]==key) 
        count ++;       
    }
    cout << "frequency of element = " << count;
    return 0;
}