#include<iostream>
using namespace std;
int main(){
    char str[200];
    int i,words=1;
    cout << "enter the sentence ";
    cin.getline(str,200);
    for(i=0;str[i]!='\0';i++){
        if(str[i]==' ')
        words++;
    }
    cout << "words = " << words;
    return 0;
}