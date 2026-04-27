#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Task {
    string name, priority, status;

public:
    Task(string n, string p) {
        name = n;
        priority = p;
        status = "Pending";
    }

    void updateStatus(string s) {
        status = s;
    }

    void display() {
        cout << "\nTask Name: " << name;
        cout << "\nPriority: " << priority;
        cout << "\nStatus: " << status << endl;
    }

    string getName() {
        return name;
    }
};

int main() {
    vector<Task> tasks;
    int choice;
    string name, priority, status;

    do {
        cout << "\n1 Add Task";
        cout << "\n2 Update Task";
        cout << "\n3 View All Tasks";
        cout << "\n4 Exit";
        cout << "\nChoice: ";
        cin >> choice;
        cin.ignore();

        if(choice == 1) {
            cout << "Enter Task Name: ";
            getline(cin, name);

            cout << "Enter Priority: ";
            getline(cin, priority);

            tasks.push_back(Task(name, priority));
            cout << "Task Added Successfully!\n";
        }

        else if(choice == 2) {
            cout << "Enter Task Name: ";
            getline(cin, name);

            for(auto &t : tasks) {
                if(t.getName() == name) {
                    cout << "Enter New Status: ";
                    getline(cin, status);
                    t.updateStatus(status);
                    cout << "Task Updated!\n";
                }
            }
        }

        else if(choice == 3) {
            for(auto &t : tasks)
                t.display();
        }

    } while(choice != 4);

    cout << "Goodbye!";
    return 0;
}