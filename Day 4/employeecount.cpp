#include <iostream>
using namespace std;

int main() {
    const int num_employees = 5;  
    int emp_id[num_employees];
    string emp_name[num_employees];
    float emp_salary[num_employees];

   
    for (int i = 0; i < num_employees; i++) {
        cout << "Enter details for employee " << i + 1 << ":" << endl;
        
        cout << "Employee ID: ";
        cin >> emp_id[i];

        cout << "Employee Name: ";
        cin >> emp_name[i];

        cout << "Employee Salary: ";
        cin >> emp_salary[i];
        
        cout << endl;
    }

    
    cout << "Details of employees:" << endl;
    for (int i = 0; i < num_employees; i++) {
        cout << "Employee " << i + 1 << ":" << endl;
        cout << "ID: " << emp_id[i] << endl;
        cout << "Name: " << emp_name[i] << endl;
        cout << "Salary: " << emp_salary[i] << endl;
        cout << endl;
    }

    cout << "Total number of employees: " << num_employees << endl;

    return 0;
}
