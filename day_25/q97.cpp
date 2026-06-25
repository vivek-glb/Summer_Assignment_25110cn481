#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout << "enter the size of 1st array ";
    cin>>n1;
    int a[n1];
    for(int i=0;i<n1;i++)
        cin>>a[i];
        cout << "enter the size of 2nd array ";
    cin>>n2;
    int b[n2];
    for(int i=0;i<n2;i++)
        cin>>b[i];
    int c[n1+n2];
    for(int i=0;i<n1;i++)
        c[i]=a[i];
    for(int i=0;i<n2;i++)
        c[n1+i]=b[i];
    for(int i=0;i<n1+n2-1;i++){
        for(int j=0;j<n1+n2-i-1;j++){
            if(c[j]>c[j+1]){
                int temp=c[j];
                c[j]=c[j+1];
                c[j+1]=temp;
            }
        }
    }
    cout << "the merged array is : \n" ;
    for(int i=0;i<n1+n2;i++)
        cout<<c[i]<<" ";
        cout << "Thanks For Using The Merging Of Two Arrays ";
    return 0;
}