#include<iostream>
using namespace std;
int main(){
    int n,i,even=0,odd=0;
    cout << "enter the size of the array ";
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++)
    cin >> arr[i];
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout << "even elements = " << even << endl;
    cout << "odd elements = " << odd << endl;
    return 0;
}