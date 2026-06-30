#include<iostream>
using namespace std;
int main(){
    int choice;
    int n = 0;
    int roll[100];
    string name[100];
    float marks[100];
    do{
        cout << "\n===== STUDENT RECORD SYSTEM =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;
        switch(choice){
            case 1:
                cout << "Enter Roll No: ";
                cin >> roll[n];
                cout << "Enter Name: ";
                cin >> name[n];
                cout << "Enter Marks: ";
                cin >> marks[n];
                n++;
                cout << "Student Added Successfully!\n";
                break;
            case 2:
                if(n == 0){
                    cout << "No Records Found.\n";
                }
                else{
                    for(int i = 0; i < n; i++){
                        cout << "\nRoll No : " << roll[i];
                        cout << "\nName    : " << name[i];
                        cout << "\nMarks   : " << marks[i] << endl;
                    }
                }
                break;
            case 3:
            {
                int searchRoll;
                bool found = false;
                cout << "Enter Roll No: ";
                cin >> searchRoll;
                for(int i = 0; i < n; i++){
                    if(roll[i] == searchRoll){
                        cout << "\nStudent Found\n";
                        cout << "Roll No : " << roll[i] << endl;
                        cout << "Name    : " << name[i] << endl;
                        cout << "Marks   : " << marks[i] << endl;
                        found = true;
                        break;
                    }
                }
                if(!found)
                    cout << "Student Not Found.";
                break;
            }
            case 4:
                cout << "Thank You!";
                break;
            default:
                cout << "Invalid Choice!";
        }
    } while(choice != 4);
    return 0;
}