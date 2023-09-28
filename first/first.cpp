#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string todoList;
    string task;
    char choice;

    cout << "Simple To-Do List" << endl;

    while (true) {
        cout << "\nMenu:" << endl;
        cout << "1. Add Task" << endl;
        cout << "2. List Tasks" << endl;
        cout << "3. Remove Task" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case '1':
            cout << "Enter a task: ";
            cin.ignore(); // Clear newline character from previous input
            getline(cin, task);
            todoList += task + "\n";
            cout << "Task added!" << endl;
            break;
        case '2':
            if (todoList.empty()) {
                cout << "Your to-do list is empty." << endl;
            }
            else {
                cout << "To-Do List:" << endl;
                cout << todoList;
            }
            break;
        case '3':
            if (todoList.empty()) {
                cout << "Your to-do list is already empty." << endl;
            }
            else {
                int taskNum;
                cout << "Enter the task number to remove: ";
                cin >> taskNum;

                istringstream iss(todoList);   //here i made a sstream . and intialize it with the content of todolist. 
                                               // Note : its alow us to split our todolist into lines...
                string line;
                string updatedList;

                for (int i = 1; getline(iss, line); i++) {
                    if (i != taskNum) {
                        updatedList += line + "\n";
                    }
                }

                todoList = updatedList;
                cout << "Task removed!" << endl;
            }
            break;
        case '4':
            cout << "Goodbye!" << endl;
            return 0;
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
        }
    }

    return 0;
}