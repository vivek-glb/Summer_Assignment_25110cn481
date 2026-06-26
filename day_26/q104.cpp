#include<iostream>
using namespace std;
int main(){
    char ans;
    int score = 0;
    cout<<"===== QUIZ GAME ====="<<endl;
    cout<<"\nQ1. which language is mostly used in AIML projects?"<<endl;
    cout<<"a) python"<<endl;
    cout<<"b) cpp"<<endl;
    cout<<"c) java"<<endl;
    cin>>ans;
    if(ans=='a')
        score++;
    cout<<"\nQ2. which symbol is termed as terminator ?"<<endl;
    cout<<"a) :"<<endl;
    cout<<"b) ;"<<endl;
    cout<<"c) ."<<endl;
    cin>>ans;
    if(ans=='b')
        score++;
    cout<<"\nQ3. C++ is a ?"<<endl;
    cout<<"a) Language"<<endl;
    cout<<"b) Browser"<<endl;
    cout<<"c) Game"<<endl;
    cin>>ans;
    if(ans=='a')
        score++;
    cout<<"\n===== RESULT ====="<<endl;
    cout<<"Score = "<<score<<"/3"<<endl;
    return 0;
}