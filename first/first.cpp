#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<string> todoList;

    char choice;

    cout << "Simple To-Do List Program" << endl;

    do {
        cout << "\nMenu:\n";
        cout << "1. Add Task\n";
        cout << "2. Display To-Do List\n";
        cout << "3. Quit\n";
        cout << "Enter your choice (1/2/3): ";
        cin >> choice;

        switch (choice) {
        case '1':
        {
            string task;
            cout << "Enter the task to add: ";
           // cin.ignore();  // Clear the input buffer
            //cin.getline(cin, task);
            cin >> task;
            todoList.push_back(task);
            cout << "Task added successfully." << endl;
            break;
        }
        case '2':
        {
            if (todoList.empty()) {
                cout << "Your to-do list is empty." << endl;
            }
            else {
                cout << "To-Do List:" << endl;
                for (size_t i = 0; i < todoList.size(); ++i) {
                    cout << i + 1 << ". " << todoList[i] << endl;
                }
            }
            break;
        }
        case '3':
            cout << "Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
        }
    } while (choice != '3');

    return 0;
}
