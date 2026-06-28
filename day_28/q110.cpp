#include<iostream>
using namespace std;
int main(){
    int choice;
    double balance = 5000, amount;
    do{
        cout << "===BANK ACC SYSTEM BY VIVEK";
        cout << "\n1. Deposit";
        cout << "\n2. Withdraw";
        cout << "\n3. Check Balance";
        cout << "\n4. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;
        switch(choice){
            case 1:
                cout << "Enter Amount: ";
                cin >> amount;
                balance += amount;
                cout << "Amount Deposited.\n";
                break;
            case 2:
                cout << "Enter Amount: ";
                cin >> amount;
                if(amount <= balance){
                    balance -= amount;
                    cout << "Withdrawal Successful.\n";
                }
                else{
                    cout << "Insufficient Balance.\n";
                }
                break;
            case 3:
                cout << "Balance = " << balance << endl;
                break;
        }
    } while(choice != 4);
    return 0;
}