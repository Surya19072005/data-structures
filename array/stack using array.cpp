#include <iostream>
#include <string>
using namespace std;
const int MAX_SIZE = 100;

class Employee {
public:
    string name;
    int id;
    double salary;
};

class Stack {
private:
    Employee employees[MAX_SIZE];
    int top;

public:
    Stack() : top(-1) {}

    void push(Employee emp) {
        if (top >= MAX_SIZE - 1) {
            cout << "Stack Overflow\n";
            return;
        }
        employees[++top] = emp;
    }

    void pop() {
        if (top < 0) {
           cout << "Stack Underflow\n";
            return;
        }
        top--;
    }

    void print() {
        if (top < 0) {
            cout << "Stack is empty\n";
            return;
        }
        for (int i = top; i >= 0; i--) {
            cout << "Name: " << employees[i].name << ", ID: " << employees[i].id << ", Salary: " << employees[i].salary << "\n";
        }
    }

    void peek() {
        if (top < 0) {
            cout << "Stack is empty\n";
            return;
        }
        cout << "Top of the stack - Name: " << employees[top].name << ", ID: " << employees[top].id << ", Salary: " << employees[top].salary << "\n";
    }
};

int main() {
 Stack employeeStack;
    Employee emp1 = {"Alice", 101, 50000.0};
    Employee emp2 = {"Bob", 102, 60000.0};
    Employee emp3 = {"Charlie", 103, 70000.0};
    employeeStack.push(emp1);
    employeeStack.push(emp2);
    employeeStack.push(emp3);
    cout << "Employee Stack:\n";
    employeeStack.print();
    cout << "\nPeek at the top of the stack:\n";
    employeeStack.peek();
    cout << "\nPop an employee from the stack:\n";
    employeeStack.pop();
    cout << "\nEmployee Stack after popping:\n";
    employeeStack.print();
    return 0;}
