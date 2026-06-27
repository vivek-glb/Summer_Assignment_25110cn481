#include<iostream>
using namespace std;
int main(){
    string name;
    int m1,m2,m3,m4,m5;
    int total;
    float percentage;
    cout<<"Enter Student Name: ";
    cin>>name;
    cout<<"Enter Marks of 5 Subjects:\n";
    cin>>m1>>m2>>m3>>m4>>m5;
    total = m1+m2+m3+m4+m5;
    percentage = total/5.0;
    cout<<"\n----- Marksheet -----\n";
    cout<<"Name : "<<name<<endl;
    cout<<"Total Marks : "<<total<<endl;
    cout<<"Percentage : "<<percentage<<"%"<<endl;
    if(percentage>=90)
        cout<<"Grade : A";
    else if(percentage>=75)
        cout<<"Grade : B";
    else if(percentage>=60)
        cout<<"Grade : C";
    else if(percentage>=40)
        cout<<"Grade : D";
    else
        cout<<"Grade : Fail";
    return 0;
}