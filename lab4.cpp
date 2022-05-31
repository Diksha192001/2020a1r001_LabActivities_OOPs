#include <iostream>
using namespace std;
class student
{
private:
    char name[20];
    int roll_no;
    float mmarks, smarks, emarks;

public:
    student() //constructor
    {
    }
    void input()
    {

        cin >> name >> roll_no >> mmarks >> smarks >> emarks;
    }
    void print()
    {
        cout << "Name of student :" << name << endl
             << "Roll number: " << roll_no << endl
             << "Marks in Maths: " << mmarks << endl
             << "Marks in Science: " << smarks << endl
             << "Marks in English: " << emarks << endl;
    }
    float avg()
    {
        cout << "Average marks of student: ";
        float mark = (mmarks + smarks + emarks) / 3;
        cout << mark << endl;
        return mark;
    }
    int roll()
    {
        return roll_no;
    }

    ~student() //destructor
    {
    }
};

int main()
{

    cout << "\t\tFor Student Class" << endl;
    int i, n, x;

    cout << "Enter the number of students: " << endl;
    cin >> n;
    student s[100];
    for (i = 0; i < n; i++)
    {
        cout << "Enter Name, Roll no , Marks in Maths, Science and English of student " << i + 1 << endl;
        s[i].input();
        cout << endl<< "Details of student " << i + 1 << endl;
        s[i].print();
        s[i].avg();
    }

    cout << endl;
    cout << "Enter the roll no of the student whose detail you want." << endl;
    cout << endl;

    cin >> x;
    for (i = 0; i < n; i++)
    {
        if (s[i].roll() == x)
        {
            cout << "Details of student with roll no " << x << endl;
            s[i].print();
        }
    }
    cout << endl;
    cout << "Enter the roll no of the student whose result you want." << endl;
    cout << endl;
    cin >> x;
    for (i = 0; i < n; i++)
    {
        if (s[i].roll() == x)
        {
            cout << "Result of student with roll no " << x << endl;
            cout << s[i].avg() << endl;
        }
    }
    return 0;
}
/*
#include <iostream>
using namespace std;
class student
{

public:
    int rollno;
    string name;
    float marks;
    student();
    ~student();
    void getdata();
    void putdata();
    void searchstudent();
    // void updatedata();
    // void putnewdata();
};

class StudentCourse
{
private:
    string course;
    int credits;

public:
    StudentCourse();
    ~StudentCourse();
    void getdata();
    void putdata();
};

StudentCourse::StudentCourse()
{
    cout << "Course Details Using Constructor" << endl;
}
student ::student()
{
    cout << "Students details using constructior" << endl;
}

void StudentCourse ::getdata()
{
    cout << "Enter Course Name: ";
    cin >> course;
    cout << "Enter Credits: ";
    cin >> credits;
}

void student ::getdata()
{
    cout << "Enter the rollno:";
    cin >> rollno;
    cout << "Enter the name:";
    cin >> name;
    cout << "Enter the marks:";
    cin >> marks;
}
void StudentCourse ::putdata()
{
    cout << "Course Name: " << course << endl;
    cout << "Credits: " << credits << endl;
}
void student ::putdata()
{
    cout << "Rollno:" << rollno << endl;
    cout << "Name:" << name << endl;
    cout << "Marks:" << marks << endl;
}
// void student::updatedata()
// {
//     rollno = 20;
//     name = "Bill";
//     marks = 100;
// }
// void student::putnewdata()
// {
//     cout<<"Updated Data"<<endl;
//     cout << "Rollno:" << rollno << endl;
//     cout << "Name:" << name << endl;
//     cout << "Marks:" << marks << endl;
//     cout << endl << endl;
//     cout<<"Student data deleted using a Member function"<<endl;
// }
void student :: searchstudent()
{
    //cout<<"Enter the rollnumber of the student to get the details"<<endl;
    int stud = 1;
    cout<<"Student Details"<<endl;
    cout << "Rollno:" << s[stud].rollno << endl;
    cout << "Name:" << s[stud].name << endl;
    cout << "Marks:" << s[stud].marks << endl;
    cout << endl << endl;

}
student ::~student()
{
    delete this;
}

StudentCourse ::~StudentCourse()
{
    delete this;
}


int main()
{
    student s[3];
    StudentCourse sc;
    int i;
    cout << "COURSE DETAILS" << endl;
    sc.getdata();
    cout << endl;
    for (i = 0; i < 3; i++)
    {
        cout << "STUDENTS DETAILS" << endl;
        s[i].getdata();
        cout << endl;
        s[i].putdata();
        cout << endl;
    }
    s[i].searchstudent();
    //s.updatedata();
    //s.putnewdata();

    return 0;
}*/