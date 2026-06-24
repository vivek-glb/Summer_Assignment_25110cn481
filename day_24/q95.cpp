#include<iostream>
using namespace std;
int main(){
    char str[200];
    cout<<"Enter sentence: ";
    cin.getline(str,200);
    int maxLen=0, len=0;
    for(int i=0;;i++){
        if(str[i]==' ' || str[i]=='\0'){
            if(len>maxLen)
                maxLen=len;
                len=0;
        }
        else{
            len++;
        }
        if(str[i]=='\0')
            break;
    }
    cout<<"Length of Longest Word = "<<maxLen;
    return 0;
}