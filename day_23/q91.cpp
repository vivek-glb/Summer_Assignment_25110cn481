#include<iostream>   //anagram series is that in which two words have same letters like listen and silent 
using namespace std;
int main(){
    char str1[100],str2[100];
    int len1=0,len2=0,i,j;
    cout << "enter 1st string ";
    cin.getline(str1,100);
    cout << "enter 2nd string ";
    cin.getline(str2,100);
    while(str1[len1]!='\0')
    len1++;
    while(str2[len2]!='\0')
    len2++;
    if(len1!=len2){
        cout << "the series is not anagram";
        return 0;
    }
    for(i=0;i<len1-1;i++){
        for(j=i+1;j<len1;j++){
            if(str1[i]>str1[j]){
                char temp=str1[i];
                str1[i]=str1[j];
                str1[j]=temp;

            }
            if(str2[i]>str2[j]){
                char temp=str2[i];
                str2[i]=str2[j];
                str2[j]=temp;
            }
        }
    }
    for(i=0;i<len1;i++){
        if(str1[i]!=str2[i]){
            cout << "not anagram string";
            return 0;
        }
    }
    cout << "anagram series ";
    return 0;
}