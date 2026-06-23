#include<iostream>
using namespace std;
int main(){
    char str[100];
    int i,j;
    cout << "enter string ";
    cin.getline(str,100);
    for(i=0;str[i]!='\0';i++){
        int count =0;
        for(j=0;str[j]!='\0';j++){
            if(str[i]==str[j])
            count++;
        }
        if(count==1){
            cout << "the 1st non repating character = " << str[i];
            return 0;
        }
    }
    cout << "the non repeating character doesnot exist ";
    return 0;
}