#include<iostream>
using namespace std;
int main(){
    string name;
    float basic, hra, da, gross;
    cout<<"Enter Employee Name: ";
    cin>>name;
    cout<<"Enter Basic Salary: ";
    cin>>basic;
    hra = basic * 0.20;
    da = basic * 0.10;
    gross = basic + hra + da;
    cout<<"\n----- Salary Slip -----\n";
    cout<<"Name : "<<name<<endl;
    cout<<"Basic Salary : "<<basic<<endl;
    cout<<"HRA : "<<hra<<endl;
    cout<<"DA : "<<da<<endl;
    cout<<"Gross Salary : "<<gross<<endl;
    return 0;
}