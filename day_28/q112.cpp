#include<iostream>
using namespace std;
int main(){
    int choice, n = 0;
    string name[100], searchName;
    long long mobile[100];
    do{
        cout << "CONTACT MANAGEMENT SYSTEM BY VIVEK";
        cout << "\n1. Add Contact";
        cout << "\n2. Display Contacts";
        cout << "\n3. Search Contact";
        cout << "\n4. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;
        switch(choice){
            case 1:
                cout << "Enter Name: ";
                cin >> name[n];
                cout << "Enter Mobile Number: ";
                cin >> mobile[n];
                n++;
                cout << "Contact Saved.\n";
                break;
            case 2:
                for(int i = 0; i < n; i++){
                    cout << "\nName: " << name[i];
                    cout << "\nMobile: " << mobile[i] << endl;
                }
                break;
            case 3:
                cout << "Enter Name to Search: ";
                cin >> searchName;
                for(int i = 0; i < n; i++){
                    if(name[i] == searchName){
                        cout << "Contact Found!\n";
                        cout << "Name: " << name[i] << endl;
                        cout << "Mobile: " << mobile[i] << endl;
                    }
                }
                break;
        }
    } while(choice != 4);
    return 0;
}