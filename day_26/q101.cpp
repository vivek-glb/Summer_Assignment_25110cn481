#include<iostream>
using namespace std;
int main(){
    int secret;        //garbage value stored 32758 or we can enter any secret value
    int guess;
    do{
        cout<<"Guess the number: ";
        cin>>guess;
        if(guess > secret)
            cout<<"Too High\n";
        else if(guess < secret)
            cout<<"Too Low\n";
    }while(guess != secret);
    cout<<"Correct Guess!";
    return 0;
}