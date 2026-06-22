#include<iostream>
using namespace std;
int main(){
    char str[100],ch;
    int i,count=0;
    cout << "enter the string ";
    cin.getline(str,100);
    cout << "enter character whose frequency is to be checked ";
    cin >> ch;
    for(i=0;str[i]!='\0';i++){
        if(str[i]==ch)
        count++;
    }
    cout << "the frequency of the character is " << count;
    return 0;
}