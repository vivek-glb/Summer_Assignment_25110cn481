#include<iostream>
using namespace std;
int main(){
    char str[100];
    int i,j;
    cout << "enter the string ";
    cin.getline(str,100);
    int maxcount =0;
    char maxchar;
    for(i=0;str[i]!='\0';i++){
        int count =0;
        for(j=0;str[j]!='\0';j++){
            if(str[i]==str[j])
            count++;
        }
        if(count>maxcount){
            maxcount=count;
            maxchar=str[i];
        }
    }
    cout << "maximum occuring character is "<< maxchar;
    return 0;
}