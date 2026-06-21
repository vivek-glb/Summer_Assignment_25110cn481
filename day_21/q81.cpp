#include<iostream>
using namespace std;
int main(){
    char str[100];
    cout << "enter string ";
    cin.getline(str,100);
    int len=0;
    while(str[len]!='\0')
    len++;
    cout <<"the length of string is " <<len;
    return 0;
}