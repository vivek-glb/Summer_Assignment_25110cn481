#include<iostream>
using namespace std;
int main(){
    char str[100];
    int i,len=0;
    cout << "enter string ";
    cin.getline(str,100);
    while(str[len]!='\0')
    len++;
    for(i=0;i<len/2;i++){
        if(str[i]!=str[len-1-i]){
            cout << "not a palindrome string";
            return 0;
        }
    }
    cout << "the string is palindrome";
    return 0;
}