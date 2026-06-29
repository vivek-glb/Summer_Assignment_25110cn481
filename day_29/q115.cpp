#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout << "Enter String: ";
    getline(cin, str);
    int choice;
    do{
        cout << "\n===== STRING OPERATIONS =====\n";
        cout << "1. Length\n";
        cout << "2. Reverse\n";
        cout << "3. Palindrome Check\n";
        cout << "4. Count Vowels\n";
        cout << "5. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;
        switch(choice){
            case 1:
                cout << "Length = "
                     << str.length();
                break;
            case 2:
            {
                string rev = str;
                reverse(rev.begin(), rev.end());
                cout << "Reverse = "
                     << rev;
                break;
            }
            case 3:
            {
                string rev = str;
                reverse(rev.begin(), rev.end());
                if(rev == str)
                    cout << "Palindrome";
                else
                    cout << "Not Palindrome";
                break;
            }
            case 4:
            {
                int count = 0;
                for(int i = 0; i < str.length(); i++){
                    char ch = tolower(str[i]);
                    if(ch=='a'||ch=='e'||ch=='i' ||ch=='o'||ch=='u'){
                        count++;
                    }
                }
                cout << "Vowels = "
                     << count;
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