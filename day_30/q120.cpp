#include<iostream>
using namespace std;
int main(){
    int choice;
    int n = 0;
    int roll[100];
    string name[100];
    float marks[100];
    do{
        cout << "\n===== RESULT MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Result\n";
        cout << "2. Display Results\n";
        cout << "3. Search Result\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;
        switch(choice){
            case 1:
                cout << "Enter Roll No: ";
                cin >> roll[n];
                cout << "Enter Name: ";
                cin >> name[n];
                cout << "Enter Percentage: ";
                cin >> marks[n];
                n++;
                cout << "Result Added Successfully!\n";
                break;
            case 2:
                for(int i = 0; i < n; i++){
                    cout << "\nRoll No    : " << roll[i];
                    cout << "\nName       : " << name[i];
                    cout << "\nPercentage : " << marks[i];
                    if(marks[i] >= 90)
                        cout << "\nGrade      : A";
                    else if(marks[i] >= 75)
                        cout << "\nGrade      : B";
                    else if(marks[i] >= 60)
                        cout << "\nGrade      : C";
                    else if(marks[i] >= 40)
                        cout << "\nGrade      : D";
                    else
                        cout << "\nGrade      : Fail";
                    cout << endl;
                }
                break;
            case 3:
            {
                int r;
                bool found = false;
                cout << "Enter Roll No: ";
                cin >> r;
                for(int i = 0; i < n; i++){
                    if(roll[i] == r){
                        cout << "\nStudent Found\n";
                        cout << "Name       : " << name[i] << endl;
                        cout << "Percentage : " << marks[i] << endl;
                        found = true;
                        break;
                    }
                }
                if(!found)
                    cout << "Record Not Found.";
                break;
            }
            case 4:
                cout << "Thank You!";
                break;
        }
    } while(choice != 4);
    return 0;
}