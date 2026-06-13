#include<iostream>
using namespace std;
int main(){
    int i, n,sum=0;
    cout << "enter the number of terms in array ";
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++)
    cin >> arr[i];
    for(i=0;i<n;i++)
    sum = sum+arr[i];
    cout << "sum of elements equals " << sum <<endl;
    float average = sum/n;
    cout << "average equals " << average;
    return 0;
}