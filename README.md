📘 Digital Attendance System
🎓 Course Information
Course Code: EEE227 – Introduction to C++ Programming

Programme: HND Electrical Engineering (Level 200)

Assessment Type: Mid-Semester Capstone Project

Weighting: 30%

Development Environment: Visual Studio Code

Programming Language: C++

Version Control: Git & GitHub

Platform: Windows (Offline First)

📌 Project Overview
The Digital Attendance System is a console-based C++ application developed to replace traditional paper-based attendance recording in lecture halls.

Manual attendance systems often cause:

Lecture disruptions

Loss or damage of records

Difficulty generating attendance summaries

Delays between lectures

This system provides a structured, digital, and persistent solution using C++ and file handling.

🎯 Project Objectives
This project was designed to:

Apply C++ programming concepts to a real-world engineering problem

Demonstrate use of variables, vectors, functions, and classes

Build a menu-driven console application

Implement file handling using fstream

Use GitHub professionally for version control

🛠 Technical Requirements Implemented
✔ Console-based user interface
✔ Object-Oriented Programming (OOP)
✔ File storage using .txt and .csv files
✔ Data persistence between program runs
✔ Structured project development over four weeks

🏗 System Features
👨‍🎓 1. Student Management
Register students

View all registered students

Search students by index number

Save student records to students.txt and students.csv

📅 2. Attendance Session Management
Create lecture sessions

Course code

Date

Start time

Duration

Store session data in text and CSV files

Menu-driven navigation system

📝 3. Attendance Management
Mark attendance (Present / Absent / Late)

Update attendance records

Save attendance to:

attendance.txt

attendance.csv

📊 4. Reports & Summary
View attendance per session

Generate attendance summary:

Total Present

Total Late

Total Absent

💾 File Storage Structure
digital-attendance-system/
│── main.cpp
│── README.md
│── students.txt
│── students.csv
│── sessions.csv
│── attendance.txt
│── attendance.csv
│── session_EE201_YYYY_MM_DD.txt
🔄 Weekly Development Breakdown
✅ Week 1
Created GitHub repository

Implemented Student class

Added student registration

Displayed students

Minimum of 3 meaningful commits

✅ Week 2
Implemented AttendanceSession class

Created session functionality

Designed full menu system

Minimum of 3 meaningful commits

✅ Week 3
Implemented attendance marking logic

Added attendance update feature

Generated attendance summaries

Improved input validation

Minimum of 3 meaningful commits

✅ Week 4
Implemented file saving and loading

Added CSV export functionality

Refactored code structure

Completed documentation

Final testing and demonstration

Minimum of 3 meaningful commits

🧠 Programming Concepts Used
Classes and Objects

Vectors (std::vector)

Functions

File Handling (fstream)

String manipulation (stringstream)

Conditional statements

Loops

Menu-driven program logic

▶ How to Run the Program
Open project folder in VS Code

Compile using:

g++ main.cpp -o main
Run:

./main
(For Windows PowerShell)

.\main.exe
🧪 Testing
The system was tested for:

Student registration accuracy

Session creation

Attendance marking and updating

File persistence

Data reload after program restart

📊 Marking Criteria Coverage
✔ Student Management
✔ Session Creation
✔ Attendance Marking
✔ File Storage & Loading
✔ Reports & Summary
✔ Code Quality & Structure

All functional requirements outlined in the project specification were successfully implemented.

👤 Author
 Suleman Mohammed
HND Electrical Engineering – Level 200

📎 Submission Notes
Repository shows steady weekly commits

Code is fully functional offline

All required features implemented

Demonstration completed successfull