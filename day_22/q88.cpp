#include<iostream>
using namespace std;
int main(){
    char str[100];
    int i,j;
    cout << "enter the string ";
    cin.getline(str,100);
    for(i=0;str[i]!='\0';i++){
        if(str[i]==' '){
            for(j=i;str[j]!='\0';j++)
            str[j]=str[j+1];
            i--;
        }
    }
    cout << "string without spaces " << str;
    return 0;
}