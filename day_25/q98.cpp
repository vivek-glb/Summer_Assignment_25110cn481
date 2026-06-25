// common characters 
#include<iostream>
using namespace std;
int main(){
    char str1[100], str2[100];
    cout << "enter 1st string ";
    cin.getline(str1,100);
    cout << "enter 2nd string ";
    cin.getline(str2,100);
    cout<<"Common Characters: ";
    for(int i=0;str1[i]!='\0';i++){
        for(int j=0;str2[j]!='\0';j++){
            if(str1[i]==str2[j]){
                cout<<str1[i]<<" ";
                break;
            }
        }
    }
    return 0;
}