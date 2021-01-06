#include <iostream>
#include <iomanip>
#include <ctime>
#include <utility>
#include <vector>
#include <unordered_map>
using namespace std;

class ToDo {
    vector <pair<int, string>> tasks;
    unordered_map <int, bool> task_tracker;
    public:
        void add(string task);
        void ls();
        void del(int task_number);
        void done(int task_number);
        void help();
        void report();
};

void ToDo::add(string task) {
    if(task == "") cout << "Task cannot be empty. Please enter a task." << endl;

    int index = tasks.size();
    task_tracker[index + 1] = false;
    tasks.push_back(make_pair(index + 1, task));
    cout << "Added todo: \"" << task << "\"" << endl;
}

void ToDo::ls() {
    if(!tasks.size()) {
        cout << "Tasks are either all done or the todo list is empty" << endl;
        return;
    }
    for(auto i = tasks.rbegin(); i != tasks.rend(); i++) {
        if(!task_tracker[i -> first])
            cout << "[" << i -> first << "]" << " " << i -> second << endl;
    }
    return;
}

void ToDo::del(int task_number) {
    if(task_tracker.find(task_number) == task_tracker.end()) {
        cout << "Task is non-existent. Please enter a valid task number." << endl;
        return;
    }
    int index = task_number - 1;
    task_tracker.erase(task_number);
    swap(tasks[index], tasks[tasks.size() - 1]);
    tasks.pop_back();
    cout << "Deleted todo #" << task_number << endl;
    return;
}

void ToDo::done(int task_number) {
    if(task_number <= tasks.size() || task_number > tasks.size()) {
        cout << "Invalid task number. Please enter valid task number." << endl;
        return;
    }
    task_tracker[task_number] = true;
    del(task_number);
    cout << "Marked todo #" << task_number << " as done." << endl;
}

void ToDo::help() {
    cout << "Usage :-" << endl;
    cout << left << setw(25) << "./todo add \"todo item\"";
    cout << left << setw(25) << "# Add a new todo" << endl;
    cout << left << setw(25) << "./todo ls";
    cout << left << setw(25) << "# Show remaining todos" << endl;
    cout << left << setw(25) << "./todo del NUMBER";
    cout << left << setw(25) << "# Delete a todo" << endl;
    cout << left << setw(25) << "./todo done NUMBER";
    cout << left << setw(25) << "# Complete a todo" << endl;
    cout << left << setw(25) << "./todo help";
    cout << left << setw(25) << "# Show usuage" << endl;
    cout << left << setw(25) << "./todo report";
    cout << left << setw(25) << "# Statistics" << endl;
    return;
}

void ToDo::report() {
    time_t now = time(0);
    tm *ltm = localtime(&now);
    int pending_tasks = 0, completed_tasks = 0;
    for(auto i: task_tracker) {
        if(i.second)
            completed_tasks++;
        else pending_tasks++;
    }
    cout << ltm -> tm_mday << "/" << 1 + ltm -> tm_mon << "/" << ltm -> tm_year << " "; //print date
    cout << "Pending: " << pending_tasks << " Completed: " << completed_tasks;
}

int main(int argc, char* argv[])
{
    ToDo list;
    if(argc == 1) list.help();
    else if(argc == 3) {
        if(argv[1] == "help")
            list.help();
        else if(argv[1] == "report")
            list.report();
        else if(argv[1] == "ls")
            list.ls();
        else 
            cout << "You're short of arguments. Please enter another argument" << endl;
    } else if(argc == 4) {
        if(argv[1] == "add") 
            list.add(argv[2]);
        else if(argv[1] == "del")
            list.del(stoi(argv[2]));
        else if(argv[1] == "done")
            list.done(stoi(argv[2]));
    }

    return 0;
}