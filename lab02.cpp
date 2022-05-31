#include <iostream>     //header file
using namespace std;
class student       //class for storing the student details
{ // private data members
private:
    string name;
    int rollNo;
    float mathsMarks, scienceMarks, englishMarks;

    // public member function
public:
    student(string n, int rno, float math, float sci, float eng) // constructor
    {
        name = n;
        rollNo = rno;
        mathsMarks = math;
        scienceMarks = sci;
        englishMarks = eng;
    }
    void print()
    {   // member function can access private data members
        // Printing the value of Name, Roll no., Maths Marks, Science Marks, English Marks
        cout << endl;
        cout << "Name of student :" << name << endl
             << "Roll no: " << rollNo << endl
             << "Marks in Maths: " << mathsMarks << endl
             << "Marks in Science: " << scienceMarks << endl
             << "Marks in English: " << englishMarks << endl;
    }
    float average() //calculates the average marks of the three subjects
    {
        cout << "Average marks of student: ";
        float avgMarks = (mathsMarks + scienceMarks + englishMarks) / 3;
        cout << avgMarks << endl;
        return avgMarks;
    }
    // destructor
    ~student()
    {
    }
};

class course        //class for storing the course details
{
    // private member functions which can't be accessed outside the class
private:
    string courseName;
    string code;
    string incharge;

    // public member functions which can be accessed outside the class
public:
    course(string n, string c, string i) // constructor
    {
        courseName = n;
        code = c;
        incharge = i;
    }
    void display()
    { // member function can access private data members i.e. Course Name, Course Code, In-Charge
        cout << "Course Name: " << courseName << endl
             << "Course Code: " << code << endl
             << "Course In-charge: " << incharge << endl;
    }
    // destructor
    ~course()
    {
    }
};
// main function
int main()
{
    cout << "\t\tSTUDENT DETAILS"; // prints all the details of the student
    student s("Diksha", 1, 4, 5, 6);
    student s1("Geeta", 2, 6, 4, 4);
    s.print();
    s.average();
    s1.print();
    s1.average();
    cout << endl;
    cout << "\t\tCOURSE DETAILS" << endl; // prints all the details of the course
    course c("OOPS using C++", "COM-411", "Mr. Anil Gupta");
    course c1("RDBMS", "COM-412", "Mrs. Meenu Lochan");
    c.display();
    cout << endl;
    c1.display();

    return 0;
}