#include<iostream>
using namespace std;
int main(){
    int choice;
    int n = 0;
    string item[100];
    int quantity[100];
    do{
        cout << "\n===== INVENTORY SYSTEM =====\n";
        cout << "1. Add Item\n";
        cout << "2. Display Items\n";
        cout << "3. Search Item\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;
        switch(choice){
            case 1:
                cout << "Enter Item Name: ";
                cin >> item[n];
                cout << "Enter Quantity: ";
                cin >> quantity[n];
                n++;
                cout << "Item Added!";
                break;
            case 2:
                if(n == 0){
                    cout << "No Items Available.";
                }
                else{
                    for(int i = 0; i < n; i++){
                        cout << "\nItem "
                             << i + 1 << endl;
                        cout << "Name : "
                             << item[i]
                             << endl;
                        cout << "Quantity : "
                             << quantity[i]
                             << endl;
                    }
                }
                break;
            case 3:
            {
                string search;
                bool found = false;
                cout << "Enter Item Name: ";
                cin >> search;
                for(int i = 0; i < n; i++){
                    if(item[i] == search){
                        cout << "Item Found\n";
                        cout << "Quantity = "
                             << quantity[i];
                        found = true;
                        break;
                    }
                }
                if(!found)
                    cout << "Item Not Found";
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