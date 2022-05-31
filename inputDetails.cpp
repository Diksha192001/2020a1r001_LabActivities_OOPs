#include <iostream>
using namespace std;
class student
{
private:
    char name[20];
    int rollno;
    float marks;

public:
    void input()
    {
        cin >> name >> rollno >> marks;
    }
    float marksret()
    {
        return marks;
    }
    void print()
    {
        cout << name;
    }
};
int main()
{
    student s[100];
    int n, i, loc, k;
    cout << "How many records do you want to enter?" << endl;
    cin >> n;
    // input details of the students
    for (i = 0; i < n; i++)
    {
        k = i + 1;
        cout << "Enter the name, rollno and marks of student: " << k << endl;
        s[i].input();
    }
    loc = 0;
    float marks = 0.0;
    for (i = 1; i <= n; i++)
    {
        if (s[i].marksret() > marks)
        {
            marks = s[i].marksret();
            loc = i;
        }
    }
    cout << "The student with highest marks is : " << endl;
    s[loc].print();
}