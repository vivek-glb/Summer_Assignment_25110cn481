#include<iostream>
using namespace std;
int main(){
    char str[100];
    int i;
    int vowels=0,consonants=0;
    cout << "enter string ";
    cin.getline(str,100);
    for(i=0;str[i]!='\0';i++){
        char ch=tolower(str[i]);
        if(ch>='a'&&ch<='z'){
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            vowels++;
            else
            consonants++;
        }
    }
    cout << "vowels = " << vowels <<endl;
    cout<< "consonants = "<< consonants << endl;
    return 0;
}