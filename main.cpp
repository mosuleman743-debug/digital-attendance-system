#include <iostream>
#include <string>
#include <vector>

using namespace std;

/* =========================
   STUDENT CLASS
========================= */

class Student {
public:
    string name;
    string indexNumber;

    Student(string n, string i) {
        name = n;
        indexNumber = i;
    }

    void display() {
        cout << "Name: " << name
             << ", Index Number: " << indexNumber << endl;
    }
};

vector<Student> students;

class AttendanceSession {
    public: 
    string courseCode;
    string date;
    string startTime;
    int duration;

    AttendanceSession(string c, string d, string s, int dur) {
        courseCode = c;
        date = d;
        startTime = s;
        duration = dur;
    }
    void display() {
        cout << "Course Code: " << courseCode
             << ", Date: " << date
             << ", Start Time: " << startTime
             << ", Duration(hours): " << duration << " hours" << endl;
    }
};
vector<AttendanceSession> sessions;


/* =========================
   STUDENT FUNCTIONS
========================= */

void registerStudent() {
    string name, index;
    cin.ignore();

    cout << "Enter Student Name: ";
    getline(cin, name);

    cout << "Enter Index Number: ";
    getline(cin, index);

    students.push_back(Student(name, index));

    cout << "Student registered successfully!\n";
}

void viewStudents() {
    if (students.empty()) {
        cout << "No students registered.\n";
        return;
    }
    for (auto &s : students) s.display();
}

void searchStudent() {
    string index;
    cout << "Enter index number to search: ";
    cin >> index;

    for (auto &s : students) {
        if (s.indexNumber == index) {
            s.display();
            return;
        }
    }
    cout << "Student not found.\n";
}
void createSession() {
    string courseCode, date, startTime;
    int duration;

    cin.ignore();
    cout << "Enter Course Code: ";
    getline(cin, courseCode);

    cout << "Enter Date (YYYY-MM-DD): ";
    getline(cin, date);

    cout << "Enter Start Time (HH:MM): ";
    getline(cin, startTime);

    cout << "Enter Duration (hours): ";
    cin >> duration;

    sessions.push_back(AttendanceSession(courseCode, date, startTime, duration));

    cout << "Attendance session created successfully!\n";
}

/* =========================
   MAIN
========================= */

int main() {

    int choice;

    do {
        cout << "\n===== WEEK 2 =====\n";
        cout << "1. Register Student\n";
        cout << "2. View Students\n";
        cout << "3. Search Student\n";
        cout << "4. Create Attendance Session\n";
        cout << "5. View Attendance Sessions\n";
        cout << "6. Exit\n";
        cout << "Choice: ";
        cin >> choice;

        switch (choice) {
            case 1: registerStudent(); break;
            case 2: viewStudents(); break;
            case 3: searchStudent(); break;
            case 4: createSession(); break;
            case 5: 
                if (sessions.empty()) {
                    cout << "No attendance sessions created.\n";
                } else {
                    for (auto &s : sessions) s.display();
                }
                break;
            default: cout << "Invalid choice!\n";
        }

    } while (choice != 6);

    return 0;
}