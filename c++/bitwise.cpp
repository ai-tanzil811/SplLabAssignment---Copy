#include <iostream>
#include <algorithm> // Include this for swap function
using namespace std;

struct Employee {
    int id;
    string name;
    int salary;
};

void bubbleSort(Employee e[], int n) {
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < n - 1 - j; i++) {
            if (e[i].salary < e[i + 1].salary) {
                swap(e[i], e[i + 1]); // Swap the entire Employee structure
            }
        }
    }
}

int main() {
    Employee emp[3];

    for (int i = 0; i < 3; i++) {
        cout << "-------------Enter Employee Data---------------" << i + 1 << endl;
        cout << "ID : ";
        cin >> emp[i].id;
        cout << "NAME : ";
        cin >> emp[i].name;
        cout << "SALARY : ";
        cin >> emp[i].salary;
    }

    cout << "---------------Before Sorting-----------------------" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "NAME : " << emp[i].name << endl
             << "ID : " << emp[i].id << endl
             << "SALARY : " << emp[i].salary << endl
             << endl;
    }

    bubbleSort(emp, 3);

    cout << "---------------Bubble Sorting-----------------------" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "NAME : " << emp[i].name << endl
             << "ID : " << emp[i].id << endl
             << "SALARY : " << emp[i].salary << endl
             << endl;
    }

    return 0;
}
