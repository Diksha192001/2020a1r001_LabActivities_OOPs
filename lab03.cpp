#include <iostream>
using namespace std;
class student
{

public:
    int rollno, admission_no;
    float phone_no;
    string name;
    string address;
    student();
    void getdata();
    void putdata();
    void del();
    void updatedata();
    void putnewdata();
};
student ::student()
{
}

void student ::getdata()
{
    cout << "Enter the Rollno: ";
    cin >> rollno;
    cout << "Enter the Name: ";
    cin >> name;
    cout << "Enter the Admission Number: ";
    cin >> admission_no;
    cout << "Enter the Phone number: ";
    cin >> phone_no;
    cout << "Enter the Address: ";
    cin >> address;
}
void student ::putdata()
{
    cout << "Entered Details: " << endl;
    cout << "Rollno: " << rollno << endl;
    cout << "Name: " << name << endl;
    cout << "Admission Number: " << admission_no << endl;
    cout << "Phone number: " << phone_no << endl;
    cout << "Address: " << address << endl;
}
void student::updatedata()
{
    cout << "Enter Roll number of the Student to update his/her record: " << endl;
    cin >> rollno;
    cout << "Enter the updated Name, Roll no , Admission Number, Phone number and Address of student " << endl;
    cin >> name >> rollno >> admission_no >> phone_no >> address;
}
void student::putnewdata()
{
    cout << endl
         << "Updated Data" << endl;
    cout << "Rollno:" << rollno << endl;
    cout << "Name:" << name << endl;
    cout << "Admission Number:" << admission_no << endl;
    cout << "Phone number:" << phone_no << endl;
    cout << "Address:" << address << endl;
    cout << endl
         << endl;
}
void student ::del()
{
    cout << endl
         << "Data deleted successfully!" << endl;
    delete this;
}

int main()
{
    student s;
    int n, choice;
    cout << "How many student details do you want to enter?" << endl;
    cin >> n;
    cout << "STUDENTS DETAILS" << endl;
    for (int i = 0; i < n; i++)
    {
        s.getdata();

        cout << endl;
        s.putdata();
        cout << endl;
    }
    s.updatedata();
    cout << endl
         << "Data updated!" << endl;
    s.putnewdata();
    cout << "Do you want to delete the student details?" << endl
         << "Type 1 for yes and 0 for no" << endl;
    cin >> choice;
    if (choice == 1)
    {
        s.del();
    }
    else
        return 0;
}