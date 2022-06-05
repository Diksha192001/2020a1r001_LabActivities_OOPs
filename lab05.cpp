// To add the details of a course using a parameterized constructor
// To update the details of a course using a member function of course class.
#include <iostream>
using namespace std;
class course
{
    int course_Id, months;
    string course_Name, instructor;

public:
    course(int id, string name, int mths, string instruc)
    {
        course_Id = id;
        course_Name = name;
        months = mths;
        instructor = instruc;
    }
    void display()
    {
        cout << "\nCourse Id: " << course_Id << endl;
        cout << "Course Name: " << course_Name << endl;
        cout << "Course Duration (In Months): " << months << endl;
        cout << "Course Instructor: " << instructor << endl;
    }
    void update()
    {
        cout << endl  << "Enter Details of Course for Updation: \n";
        cout << "Enter Course Id: ";
        cin >> course_Id;
        cout << "Enter Course Name: ";
        cin >> course_Name;
        cout << "Enter Course Duration(In Months): ";
        cin >> months;
        cout << "Enter Course Instructor: ";
        cin >> instructor;
    }
};
int main()
{
    int n;
    cout << "\t\t COURSE RECORDS \n";
    course c1(101, "OOPS Using C++", 4, "Mr. Ryle Cullen");
    course c2(102, "Python", 3, "Mr. Sean Annese");
    course c3(103, "Data Structures", 7, "Mr. Paul Griffin");
    cout << "\nDetails of Course: ";
    c1.display();
    c2.display();
    c3.display();
    cout << endl << "Enter the Course ID for the course you want to update: ";
    cin >> n;
    if (n == 101)
    {
        c1.update();
        cout << "Successfully updated! \n";
    }
    else if (n == 102)
    {
        c2.update();
        cout << "Successfully updated! \n";
    }
    else if (n == 103)
    {
        c3.update();
        cout << "Successfully updated! \n";
    }
    else
    {
        cout << "No Course found!\n";
    }

    cout << "\nDetails of Courses After Updation: ";
    c1.display();
    cout << endl;
    c2.display();
    cout << endl;
    c3.display();
    cout << endl;
    return 0;
}