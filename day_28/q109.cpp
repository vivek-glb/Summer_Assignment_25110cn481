#include<iostream>
using namespace std;
int main(){
    int choice, n = 0;
    int id[100], searchId;
    string title[100];
    do{
        cout << "===LIBRARY MANAGEMENT BY VIVEK===";
        cout << "\n1. Add Book";
        cout << "\n2. Display Books";
        cout << "\n3. Search Book";
        cout << "\n4. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;
        switch(choice){
            case 1:
                cout << "Enter Book ID: ";
                cin >> id[n];
                cin.ignore();
                cout << "Enter Book Title: ";
                getline(cin, title[n]);
                n++;
                cout << "Book Added Successfully!\n";
                break;
            case 2:
                if(n == 0){
                    cout << "No Books Available.\n";
                }
                else
                {
                    for(int i = 0; i < n; i++){
                        cout << "\nBook " << i + 1;
                        cout << "\nID: " << id[i];
                        cout << "\nTitle: " << title[i] << endl;
                    }
                }
                break;
            case 3:
                cout << "Enter Book ID to Search: ";
                cin >> searchId;
                for(int i = 0; i < n; i++){
                    if(id[i] == searchId){
                        cout << "Book Found!\n";
                        cout << "ID: " << id[i] << endl;
                        cout << "Title: " << title[i] << endl;
                    }
                }
                break;
        }
    } while(choice != 4);
    return 0;
}