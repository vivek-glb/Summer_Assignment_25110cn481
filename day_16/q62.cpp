#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout << "enter the size of the array ";
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++)
    cin >> arr[i];
    int maxfreq=0,element,j;
    for(i=0;i<n;i++){
        int count =1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j])
            count++;
        }
        if(count > maxfreq){
            maxfreq=count;
            element = arr[i];
        }
    }
    cout << "element with highest frequency is " << element;
    return 0;
}