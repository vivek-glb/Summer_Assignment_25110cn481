#include<iostream>
using namespace std;
int main(){
    int choice;
    int n = 0;
    int empId[100];
    string name[100];
    float salary[100];
    do{
        cout << "\n===== EMPLOYEE MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;
        switch(choice){
            case 1:
                cout << "Enter Employee ID: ";
                cin >> empId[n];
                cout << "Enter Name: ";
                cin >> name[n];
                cout << "Enter Salary: ";
                cin >> salary[n];
                n++;
                cout << "Employee Added Successfully!\n";
                break;
            case 2:
                for(int i = 0; i < n; i++){
                    cout << "\nID     : " << empId[i];
                    cout << "\nName   : " << name[i];
                    cout << "\nSalary : " << salary[i] << endl;
                }
                break;
            case 3:
            {
                int id;
                bool found = false;
                cout << "Enter Employee ID: ";
                cin >> id;
                for(int i = 0; i < n; i++){
                    if(empId[i] == id){
                        cout << "\nEmployee Found\n";
                        cout << "Name   : " << name[i] << endl;
                        cout << "Salary : " << salary[i] << endl;
                        found = true;
                        break;
                    }
                }
                if(!found)
                    cout << "Employee Not Found.";
                break;
            }
            case 4:
                cout << "Thank You!";
                break;
        }
    } while(choice != 4);
    return 0;
}