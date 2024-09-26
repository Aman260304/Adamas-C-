#include <iostream>
using namespace std;

int main() {
    const int students_per_section = 5;
    const int total_students = 10;
    int section1[students_per_section], section2[students_per_section];
    int total_sum = 0;
    
    
    cout << "Enter marks for Section 1 (5 students):" << endl;
    for (int i = 0; i < students_per_section; i++) {
        cout << "Student " << i + 1 << ": ";
        cin >> section1[i];
        total_sum += section1[i];
    }

    
    cout << "Enter marks for Section 2 (5 students):" << endl;
    for (int i = 0; i < students_per_section; i++) {
        cout << "Student " << i + 1 << ": ";
        cin >> section2[i];
        total_sum += section2[i];
    }

    
    float average = static_cast<float>(total_sum) / total_students;
    cout << "The average marks of all 10 students is: " << average << endl;

    return 0;
}
