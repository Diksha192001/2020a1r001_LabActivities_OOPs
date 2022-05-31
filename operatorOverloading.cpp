#include <iostream>
using namespace std;
class complex
{
    float r, i;

public:
    complex() //default constructor
    {
        r = 10.5;
        i = 12.2;
    }
    void operator++()
    {
        ++r;
        ++i;
    }
    void display()
    {
        cout <<"Result = "<< r << " + i" << i;
    }
};
int main()
{
    complex c;
    ++c;
    cout<<"\tOPERATOR OVERLOADING\n";
    c.display();
}