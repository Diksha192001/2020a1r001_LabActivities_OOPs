//Analyzing and designing classes for Student Management System

#include <iostream>
using namespace std;
class student
{
public:
    int student_id;
    int admission_number;
    int student_enrollment_id;
    int rollnumber;
    string name;
    string standard;
    string section;

    // initializing the values for the integer values
    // using a constructor
    student()
    {
        student_id = 0;
        admission_number = 0;
        student_enrollment_id = 0;
    }

    void get_data()
    {
        cout << "Enter the Student's name, Roll Number, Standard, Section, Student id";
        cout << ", Admission number and School Enrollment number :" << endl;
        cin >> name >> rollnumber >> standard >> section >> student_id;
        cin >> admission_number >> student_enrollment_id;
    }
    void put_data()
    {
        cout << endl;
        cout << "Student Name: " << name << endl;
        cout << "Student Roll number " << rollnumber << endl;
        cout << "Student Standard: " << standard << endl;
        cout << "Student Section: " << section << endl;
        cout << "Student ID: " << student_id << endl;
        cout << "Student Admission Number: " << admission_number << endl;
        cout << "Student Enrollment ID: " << student_enrollment_id << endl;
    }

    // Using a destructor for the initialised Values
    ~student()
    {
    }
};

class course
{

private:
    int course_id;

public:
    string course_name;
    string course_faculty;
    int course_code;
    int students_enrolled;

    // Constructor initialization for the integer type member data of the class - course
    course()
    {
        course_id = 0;
        course_code = 0;
        students_enrolled = 0;
    }
    void get_data()
    {
        cout << endl;
        cout << "Enter the Course name, Faculty name, Course ID, Course Code, ";
        cout << "No. of Students enrolled in the course:" << endl;
        cin >> course_name >> course_faculty >> course_id >> course_code >> students_enrolled;
    }
    void put_data()
    {
        cout << endl;
        cout << "Course Name: " << course_name << endl;
        cout << "Course ID: " << course_id << endl;
        cout << "Course Faculty: " << course_faculty << endl;
        cout << "Course Code: " << course_code << endl;
        cout << "Students Enrolled: " << students_enrolled << endl;
    }

    // Destructor for the class Course
    ~course()
    {
    }
};

int main()
{
    student s;
    course c;
    s.get_data();
    c.get_data();
    cout << endl;
    cout << "Details of the Student and the Course are as follows :" << endl;
    cout << endl;
    s.put_data();
    c.put_data();
    return 0;
}