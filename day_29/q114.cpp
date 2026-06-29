#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter Size of Array: ";
    cin >> n;
    int arr[n];
    cout << "Enter Elements:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int choice;
    do{
        cout << "\n===== ARRAY OPERATIONS =====\n";
        cout << "1. Display Array\n";
        cout << "2. Find Sum\n";
        cout << "3. Find Largest\n";
        cout << "4. Search Element\n";
        cout << "5. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;
        switch(choice){
            case 1:
                for(int i = 0; i < n; i++)
                    cout << arr[i] << " ";
                break;
            case 2:
            {
                int sum = 0;
                for(int i = 0; i < n; i++)
                    sum += arr[i];
                cout << "Sum = " << sum;
                break;
            }
            case 3:
            {
                int largest = arr[0];
                for(int i = 1; i < n; i++){
                    if(arr[i] > largest)
                        largest = arr[i];
                }
                cout << "Largest = " << largest;
                break;
            }
            case 4:
            {
                int key;
                bool found = false;
                cout << "Enter Element: ";
                cin >> key;
                for(int i = 0; i < n; i++){
                    if(arr[i] == key){
                        cout << "Element Found at Index "
                             << i;
                        found = true;
                        break;
                    }
                }
                if(!found)
                    cout << "Element Not Found";
                break;
            }
            case 5:
                cout << "Thank You!";
                break;
            default:
                cout << "Invalid Choice!";
        }
    } while(choice != 5);
    return 0;
}