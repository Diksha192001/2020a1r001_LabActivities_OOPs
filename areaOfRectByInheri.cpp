#include <iostream>
using namespace std;
class length
{
public:
    int leng;
    void input_length()
    {
        cin >> leng;
    }
};
class breadth : public length
{
public:
    int bre;
    void input_breadth()
    {
        cin >> bre;
    }
};
class areaa : public breadth
{
public:
    int area;
    void area1()
    {
        area = leng * bre;
        cout << "Area = " << area;
    }
};
int main()
{
    areaa a;
    a.input_length();
    a.input_breadth();
    a.area1();
    return 0;
}