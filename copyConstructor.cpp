#include <iostream>
using namespace std;
class sample
{
    int x;
    float y;

public:
    sample()
    {
        x = 10;
        y = 20.5;
    }
    // copy constructor
    sample(sample &c)
    {
        x = c.x;
        y = c.y;
    }
    void display()
    {
        cout << x << "\n"
             << y;
    }
};
int main()
{
    sample s1, s2(s1);
    s1.display();
    s2.display();
    return 0;
}