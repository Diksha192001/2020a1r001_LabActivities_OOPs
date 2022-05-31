#include <iostream>
using namespace std;
class circle
{
private:
    int radius;
    float area;

public:
    void input()
    {
        cout << "Enter the radius of the circle : ";
        cin >> radius;
    }
    void display()
    {
        area = 3.14 * radius * radius;
        cout << "Area of the circle is : " << area;
    }
};
int main()
{
    circle area1;
    area1.input();
    area1.display();
    return 0;
}