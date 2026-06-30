#include<iostream>
using namespace std;
int main(){
    int choice;
    int n = 0;
    int bookId[100];
    string title[100];
    do{
        cout << "\n===== MINI LIBRARY SYSTEM =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Search Book\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;
        switch(choice){
            case 1:
                cout << "Enter Book ID: ";
                cin >> bookId[n];
                cin.ignore();
                cout << "Enter Book Title: ";
                getline(cin, title[n]);
                n++;
                cout << "Book Added Successfully!\n";
                break;
            case 2:
                for(int i = 0; i < n; i++){
                    cout << "\nBook ID : " << bookId[i];
                    cout << "\nTitle   : " << title[i] << endl;
                }
                break;
            case 3:
            {
                int id;
                bool found = false;
                cout << "Enter Book ID: ";
                cin >> id;
                for(int i = 0; i < n; i++){
                    if(bookId[i] == id){
                        cout << "Book Found\n";
                        cout << "Title : " << title[i];
                        found = true;
                        break;
                    }
                }
                if(!found)
                    cout << "Book Not Found.";
                break;
            }
            case 4:
                cout << "Thank You!";
                break;
        }
    } while(choice != 4);
    return 0;
}