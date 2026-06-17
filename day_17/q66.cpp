#include<iostream>
using namespace std;
int main(){
    int n1,n2,i,j;
    cout << "enter the size of the 1st array ";
    cin >>n1;
    int a1[n1];
    for(i=0;i<n1;i++)
    cin >> a1[i];
    cout << "enter the size of 2nd array ";
    cin >> n2;
    int a2[n2];
    for(i=0;i<n2;i++)
    cin >> a2[i];
    
    for(i=0;i<n1;i++)
    cout << a1[i] << " ";
    for(i=0;i<n2;i++){
        bool same=false;
        for(j=0;j<n1;j++){
            if(a2[i]==a1[j]){
                same=true;
                break;
            }
        }
        if(!same)
        cout << a2[i] << " ";
    }
    return 0;
}