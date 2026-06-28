#include<iostream>
using namespace std;
int main(){
    int choice, seats = 0;
    string name;
    do{
        cout << "TICKET BOOKING SYSTEM BY VIVEK";
        cout << "\n1. Book Ticket";
        cout << "\n2. Cancel Ticket";
        cout << "\n3. Display Ticket";
        cout << "\n4. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;
        switch(choice){
            case 1:
                cout << "Enter Name: ";
                cin >> name;
                cout << "Enter Number of Seats: ";
                cin >> seats;
                cout << "Ticket Booked Successfully.\n";
                break;
            case 2:
                seats = 0;
                cout << "Ticket Cancelled.\n";
                break;
            case 3:
                if(seats == 0){
                    cout << "No Ticket Booked.\n";
                }
                else{
                    cout << "Passenger Name: " << name << endl;
                    cout << "Seats Booked: " << seats << endl;
                    cout << "Total Fare: " << seats * 500 << endl;
                }
                break;
        }
    } while(choice != 4);
    return 0;
}